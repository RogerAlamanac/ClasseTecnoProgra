//#include <iostream>
//
//class Animal {
//	std::string name;
//	int years;
//};
//
//struct Wheel {
//	int radius;
//	float friction;
//};
//
//struct Car {
//	static const int NUM_WHEELS = 4;
//	Wheel m_wheels[4];
//
//	//Atributos (non-static)
//	Wheel m_wheels[NUM_WHEELS];
//	int m_color;
//	std::string m_model;
//	bool m_isElectric;
//
//	//Metodos
//
//	//Constructor
//	Car(int numWheels) {
//		m_wheels = new Wheel[numWheels];
//	}
//
//	Car(int numWheels, int color, std::string model, bool isElectric)
//		//Option 2
//		//: m_wheels (new Wheel[numWheels])
//		//, m_color(color)
//		//, m_model(model)
//		//, m_isElectric(isElectric)
//	{
//		m_wheels = new Wheel[numWheels];
//		//Option 1
//		m_color = color;
//		m_model = model;
//		m_isElectric = isElectric;
//	}
//
//	//Destructor
//	~Car() {
//		if (m_wheels != nullptr) {
//			delete m_wheels;
//		}
//	}
//};
//int main(){
//	Car c1; //Objeto C1 de la Clase car;
//	Car c2; 
//	Car c3(5, 2, "Ferrari", false);
//	Car c4(5);
//	std::cout << c1.m_color << std::endl;
//std:.cout << Car::NUM_WHEELS << std::endl;
//}