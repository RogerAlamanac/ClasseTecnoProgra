#include "Car.h"
// :: -> resolution scope operator
Car::Car(int numWheels) {
	m_wheels = new Wheel[numWheels];
}

Car::Car() {

}

Car::Car(int numWheels, int color, std::string model, bool isElectric)
//Option 2
//: m_wheels (new Wheel[numWheels])
//, m_color(color)
//, m_model(model)
//, m_isElectric(isElectric)
{
	m_wheels = new Wheel[numWheels];
	//Option 1
	m_color = color;
	m_model = model;
	m_isElectric = isElectric;
}

Car::~Car() {
	if (m_wheels != nullptr) {
		delete m_wheels;
	}
}
