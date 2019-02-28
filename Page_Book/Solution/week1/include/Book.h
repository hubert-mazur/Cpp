#pragma once
#include "B5Page.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Book {

public:
//konstruktor z arugmentami domyslnymi
    Book(string _title = "empty", string _author = "Anonym");
//destruktor
    ~Book();
//dodaje nowa strone do ksiazki z pominieciem duplikatow
    void AddPage(B5Page *);
//ustawia naglowek dla wszystkich stron oprocz strony tytulowej
    void SetHeader(string);
//wypisuje zawartosc ksiazki
    void Print();

private:
    vector<B5Page> _book;
    string _title;
    string _author;
};