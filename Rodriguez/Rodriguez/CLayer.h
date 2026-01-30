#pragma once
#include "CNeurone.h"

class CLayer
{
private:
	size_t m_nbPoids;
	std::vector<CNeurone> m_neurones = {};

public:
	CLayer() {};
	void addNeurone(const CNeurone& neurone);
	std::vector<double> evaluate(const std::vector<double>& input) const;
	const size_t& getNbPoids()const { return m_nbPoids; }
	const size_t& getNbNeurone()const { return m_neurones.size(); }
};

