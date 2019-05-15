# include "Samochod.h"
std::string Samochod::_st_kolor;
void Samochod::DefaultColor (std::string str)
{
_st_kolor = str;
}
std::ostream& operator<<(std::ostream &stream, Samochod object)
{
    return std::cout << "\n"
                     << "[INFO] " <<object.get_nazwa() <<  "\n"
                     << "[INFO] Stan licznika " << object.get_stan_licznika() << " [km]\n"
                     << "[INFO] Kolor " << object.get_kolor() << "\n";
}