# pragma once
# include "Page.h"
# include <iostream>
class B5Page : public Page
{
    public:
    B5Page* Copy (void);
    void Print (void) override;
        B5Page (std::string str="empty")
    {
        _header=str;
    }

    void SetHeader (std::string str) override
    {
        _header=str;
    }
        std::string get_header (void)
    {
        return _header;
    }
    std::string get_text  (void)
    {
        return _text_buffer;
    }
    void set_text (std::string str)
    {
        _text_buffer=str;
    }

};