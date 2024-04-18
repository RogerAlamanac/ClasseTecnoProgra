#pragma once
#include <iostream>
#include "Util.h"
class Dynosaur
{
private:
	std::string m_name; //m_... es que són membres de la clase, els atributs
	int m_health;
	std::string m_adn;
	Position2D m_pos;
	bool m_isDangerous;
public:
	//Atributos publics
private:
	//metodes privats
public:
	//metodes publics
	Position2D GetPos() const //Amb un const no es pot modificar cap atribut dins la funció
	{
		return m_pos;
	}

	bool GetIsDangerous() const {
		return m_isDangerous
	}
};

