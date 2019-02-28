# pragma once
# include <string>
class Page {

    public:
        virtual void Print ()=0;
        virtual void SetHeader (std::string)=0;
        Page (std::string str="empty"):_text_buffer(str) {};
        virtual ~Page () =default;
    protected:
        std::string _header;
        std::string _text_buffer;

};