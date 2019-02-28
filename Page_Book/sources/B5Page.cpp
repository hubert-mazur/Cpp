# include "B5Page.h"
B5Page* B5Page::Copy (void)
{
    return new B5Page (_header) ; 
}
void B5Page::Print (void)
{
    std::cout<<"[Page::header]  "<<_header<<std::endl;
    std::cout<<"[Page::text]    "<<_text_buffer<<std::endl;
}
