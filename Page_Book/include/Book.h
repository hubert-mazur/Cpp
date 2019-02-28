# pragma once
# include "B5Page.h"
# include <vector>
class Book: public Page
{
    public:
    
    void Print (void) override;
    void SetHeader (std::string str) override;
    Book (std::string);
    void AddPage (B5Page*);

    private:
    std::vector <B5Page*> _book;
    std::vector <B5Page> _st_book;
    std::string _autor;
    std::string _title;
    };