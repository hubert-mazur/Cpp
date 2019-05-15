#pragma once
#include <string>
#include <iostream>
#include "ObiektMiotajacy.h"

class MyExeptions
{

public:
    MyExeptions(std::string str = "") : type_info(str){};
    MyExeptions(const ObiektMiotajacy &object)
    {
        *to_free = object;
    }
    virtual void PrzedstawSie() const = 0;
    virtual ~MyExeptions() = default;
    std::string getTypeInfo()
    {
        return type_info;
    }

    virtual ObiektMiotajacy *get_to_free()
    {
        return to_free;
    }

protected:
    std::string type_info;
    ObiektMiotajacy *to_free;
};

class typ1 : public MyExeptions
{

public:
    typ1(ObiektMiotajacy *object = NULL) : MyExeptions("1") { to_free = object; };
    inline void PrzedstawSie() const override
    {
        std::cout << "Nazywam sie " << type_info << " (adres obiektu: <" << this << ">)" << std::endl;
    }
};

class typ2 : public MyExeptions
{

public:
    typ2(ObiektMiotajacy *object = NULL) : MyExeptions("2") { to_free = object; };
    inline void PrzedstawSie() const override
    {
        std::cout << "Nazywam sie " << type_info << " (adres obiektu: <" << this << ">)" << std::endl;
    }
};

class typ3 : public MyExeptions
{

public:
    typ3(ObiektMiotajacy *object = NULL) : MyExeptions("3") { to_free = object; };
    inline void PrzedstawSie() const override
    {
        std::cout << "Nazywam sie " << type_info << " (adres obiektu: <" << this << ">)" << std::endl;
    }
};

class typ4 : public MyExeptions
{

public:
    typ4(ObiektMiotajacy *object = NULL) : MyExeptions("4") { to_free = object; };
    inline void PrzedstawSie() const override
    {
        std::cout << "Nazywam sie " << type_info << " (adres obiektu: <" << this << ">)" << std::endl;
    }
};

inline void Przetworz(MyExeptions *object)
{
    std::cout << "Przetworz - wyjatek typu " << object->getTypeInfo() << " o adresie: <" << object << ">" << std::endl;
    if (object->get_to_free())
        delete object->get_to_free();
    delete object;
    throw(new typ4());
}