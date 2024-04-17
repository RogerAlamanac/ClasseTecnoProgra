#include <iostream>
#include "Car.h"
int main() {
	Car c1; //Objeto C1 de la Clase car;
	Car c2;
	Car c3(5, 2, "Ferrari", false);
	Car c4(3);
	std::cout << c1.GetColor() << std::endl;
	c1.m_color = 10;
	std::cout << Car::NUM_WHEELS << std::endl;
}