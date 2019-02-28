#include <Book.h>
#include <iostream>
using std::cout;
using std::endl;

Book::Book(string _title, string _author) : _title(_title), _author(_author) {
    _book.emplace_back("Title: " + _title);
}

Book::~Book() {
    _book.clear();
}

void Book::AddPage(B5Page * page) {
    if(_book.size() == 1) {
        _book.emplace_back( page->getText(), page->getHeader());
        return;
    }

    int current = _book.size();
    string currentHeader = _book[current - 1].getHeader();
    string currentText = _book[current - 1].getText();

    if( currentHeader != page->getHeader() && currentText != page->getText())
        cout << "[WARNING]:: Trying to add already existing page!" << endl;
    else 
        _book.emplace_back(page->getText(), page->getHeader());   
}

void Book::SetHeader(string header) {
    for (int i = 1; i < (int)_book.size(); i++)
        _book[i].SetHeader(header);
}

void Book::Print() {
    cout << endl <<"[Book::autor]\t" << _author << endl;
    cout << "[Page(0)::text]\t" << _book[0].getText() << endl;
    for (int i = 1; i < (int)_book.size(); i++) {
        cout << "[Page(" << i << ")::header]\t" << _book[i].getHeader() << endl;
        cout << "[Page(" << i << ")::text]\t" << _book[i].getText() << endl; 
    }
}