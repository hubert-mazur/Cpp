#include "B5Page.h"
#include <iostream>
using std::cout;
using std::endl;
B5Page::B5Page(string _text, string _header): _text(_text), _header(_header) {}

void B5Page::Print() {
    cout << "[Page::header]\t" << _header << endl;
    cout << "[Page::text]\t" << _text << endl;
}

void B5Page::SetHeader(string header) {
    _header = header;
}

B5Page* B5Page::Copy() {
    return new B5Page( _header + " (Copy)", _text);
}