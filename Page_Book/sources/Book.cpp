# include "Book.h"
void Book::Print(void)
{
    std::cout<<std::endl;
    std::cout<<"[Book::autor]        "<<_autor<<std::endl;
    std::cout<<"[Page(0)::text]      "<<_title<<std::endl;
    int size=_book.size();
      for (int i=0;i<size;i++)
      {
      std::cout<<"[Page("<<i+1<<")::header]    "  <<_st_book[i].get_header()<<std::endl;
      std::cout<<"[Page("<<i+1<<")::text]      "    <<_st_book[i].get_text()<<std::endl;
      }
}

void Book::SetHeader (std::string str)
{
    int size=_st_book.size();
  for (int i=0;i<size;i++)
      _st_book[i].SetHeader(str);
} 
Book::Book (std::string str="empty")
{
    _autor="Anonym";
    _title="Title: "+str;
}

void Book::AddPage(B5Page* object)
{
    if (_book.empty())
    {
        _book.emplace_back(object);
        _st_book.emplace_back(*object);
    }
     else
     {
         int size=_book.size();
         bool check=false;
         for (int i=0;i<size;i++)
         {
         if (_book[i] == object)
            check=true;
         }
         if (check)
         std::cout<<"[WARNING]:: Trying to add already existing page!"<<std::endl;
         else
         _book.emplace_back(object);
        _st_book.emplace_back(*object);
     }
     
}
    