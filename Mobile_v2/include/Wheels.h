#pragma once
#include <iostream>

class Wheel {

public:
    Wheel(float _pressure = 2.2) : _pressure(_pressure) {}

    void UpdatePressure(float pressure){
        _pressure = pressure;
    }

    float Pressure(){
        return _pressure;
    }

    friend std::ostream &operator <<(std::ostream &ostrm, const Wheel &wheel){
        ostrm << wheel._pressure;
        return ostrm;
    }

private:
    float _pressure;
};