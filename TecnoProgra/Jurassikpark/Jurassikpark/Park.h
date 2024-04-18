#pragma once
#include <vector>
#include "Dynosaur.h"
#include "Scientist.h"
#include "Constants.h"
class Park
{
private:
	// std::vector -> Dynosaur i Scientist
	std::vector<Scientist> m_scientists;
	std::vector<Dynosaur> m_dynosaurs;

	float CalculateDistance(const Position2D& pos1, const Position2D pos2) const {

	}
public:
	//TO-DO
	// Tenir posicions de Dynosaur i Scientist 
	// Dynosaur: Access to m_isDangerous;
	// Scientist: Access to m_isdead
	std::vector<Scientist> GetScientistsInDanger() const {

	}
};

