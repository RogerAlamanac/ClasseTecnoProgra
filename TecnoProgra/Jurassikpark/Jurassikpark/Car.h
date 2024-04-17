#pragma once
#include <iostream>
	struct Wheel {
		int radius;
		float friction;
	};

	class Car {
		static const int NUM_WHEELS = 4;
		

		//Atributos (non-static)
		Wheel* m_wheels = nullptr;
		//Wheel m_wheels[NUM_WHEELS];
		int m_color = 4;
		std::string m_model;
		bool m_isElectric;
		//Metodos
	public:
		Car();
		//Constructor
		Car(int numWheels);
		Car(int numWheels, int color, std::string model, bool isElectric);

		int GetColor() {

		}
		//Destructor
		~Car();
	};


