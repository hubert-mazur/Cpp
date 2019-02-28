#pragma once
#include <string>
using std::string;

class B5Page {
public:
//konstruktor z argumentami domyslnymi
    B5Page(string _text = "empty", string _header = "empty");
//wypisuje naglowek oraz tresc strony
    void Print();
//ustawia naglowek strony
    void SetHeader(string);
//metoda kopiujaca strone 
    B5Page* Copy();
//gettery
    string getHeader(){ return _header; };
    string getText(){ return _text; };
private:
    string _text;
    string _header;
};