#pragma once
#include "B5Page.h"
#include <vector>
#include "TitlePage.h"
class Book : public Page
{

  public:
	void Print(void) override;
	void SetHeader(std::string) override;

	Book(std::string title, int number_of_pages, std::string format) : _Title(title), _format(format)
	{
		for (int i = 0; i < number_of_pages; i++)
		{
			_book.emplace_back(new B5Page());
		}
	}
	friend std::ostream &operator<<(std::ostream &ostrm, const Book &object);
	int size(void)
	{
		return _book.size() + 1;
	}
	TitlePage *TitlePagePtr(void)
	{
		ptr = new TitlePage();
		return ptr;
	}

	Page *operator[](int iterator)
	{
		return _book[iterator];
	}

	~Book(void)
	{
		for (int i = 0; i < (int)_book.size(); i++)
			delete _book[i];
		delete ptr;
	}

	void AddPage(B5Page *object);

  private:
	std::string _Title;
	std::string _Autor;
	std::vector<Page *> _book;
	std::vector<B5Page> _st_book;
	std::string _format;
	TitlePage *ptr;
};
inline std::ostream &operator<<(std::ostream &ostrm, const Book &object)
{
	ostrm << std::endl;
	ostrm << "[Book::Title]    " << object._Title << " (" << object.ptr->get_subtitle() << ")";
	ostrm << std::endl;
	ostrm << "[Book::Author]   " << object.ptr->get_Autor() << std::endl;
	for (int i = 0; i < (int)object._book.size(); i++)
	{
		ostrm << "[Page(" << i << ")::header] " << object._book[i]->Get_header() << std::endl;
		ostrm << "[Page(" << i << ")::text  ] " << object._book[i]->Get_text_buffer() << std::endl;
	}

	return ostrm;
}