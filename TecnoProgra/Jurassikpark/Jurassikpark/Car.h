#pragma once
#include <iostream>

struct Wheel
{
    int radius;
    float friction;
};

class Car //La diferencia entre struct i class es que en un struct els seus atributs son públics per defecte, mentre que en una class són privats
{
private:
    static const int NUM_WHEELS = 4;
    // Atributos (non-static)
    Wheel* m_wheels = nullptr;
    int m_color = 4;
    std::string m_model;
    bool m_isElectric;

    // Metodos
    // 
public:
    // Constructor
    Car();
    Car(int numWheels);
    Car(int numWheels, int color, std::string model, bool isElectric);

    // Getter
    int GetColor();
    // Setter
    void SetColor(int color);

    // Other methods
    float GetAverageFriction();

    // Destructor
    ~Car();
};
