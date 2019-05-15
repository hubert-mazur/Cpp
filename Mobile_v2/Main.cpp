// Nazwa pliku wykonywalnego: mobile

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze napisac klasy reprezentujace:
// Silnik
// Pojazd (opcjonalnie)
// Samochod
// Mercedes
// Mercedes dziedziczy po ogólniejszej klasie  Samochod. Ten może (ale nie musi)
// dziedziczyc po klasie Pojazd.

// W zadaniu mozna korzystac z elementow bilbioteki standardowej
// zwlaszcza klasy std::string, ktora jest dostepna w pliku o nazwie
// "string", oraz std::vector

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Makefile (lub CMakeLists.txt) dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie mobile. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)

// Rozwiazanie (archiwum mobile2.tar.gz zawierajace dodane pliki, makefile i Main.cpp)
// nalezy wgrac do UPEL.

#include "Main.h"

int main()
{
   Samochod::DefaultColor("Czerwony");
   Mercedes mercedes("ON", 65, 1598); // paliwo, moc [kW], pojemnosc [cm^3]
   std::cout << mercedes << std::endl;

   mercedes.WheelsPressureInfo();
   mercedes.Wheels()[0]->UpdatePressure(2.1);
   std::cout << "Updated presure [0]: " << mercedes.Wheels()[0]->Pressure() << std::endl;
   return 0;
}

/* Wynik dzialania programu:
[INFO] Mercedes A
[INFO] Stan licznika 0 [km]
[INFO] Kolor Czerwony

[INFO] Mercedes A :: Wheel [0] :: Pressure 2.2 [bar]
[INFO] Mercedes A :: Wheel [1] :: Pressure 2.2 [bar]
[INFO] Mercedes A :: Wheel [2] :: Pressure 2.2 [bar]
[INFO] Mercedes A :: Wheel [3] :: Pressure 2.2 [bar]
Updated presure [0]: 2.1
*/