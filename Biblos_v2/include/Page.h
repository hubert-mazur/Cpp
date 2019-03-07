#pragma once
#include <string>
#include <iostream>
class Page
{

  public:
	virtual ~Page() = default;
	virtual void Print(void) = 0;
	virtual void SetHeader(std::string) = 0;
	Page(std::string header = "empty", std::string text_buffer = "empty") : _Header(header), _text_buffer(text_buffer){};

	virtual std::string Get_header(void)
	{
		return _Header;
	}
	virtual std::string Get_text_buffer(void)
	{
		return _text_buffer;
	}

  protected:
	std::string _Header;
	std::string _text_buffer;
};