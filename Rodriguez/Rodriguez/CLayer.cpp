#include "CLayer.h"
#include <iostream>

void CLayer::addNeurone(const CNeurone& neurone)
{
	if (m_neurones.size() == 0)
		m_nbPoids = neurone.getNbPoids();
	else
	{
		if (m_nbPoids != neurone.getNbPoids()) 
		{
			std::cout << "nbpoids du neuronne incomptible avec les précédents" << std::endl;
			throw;
		}
	}
	m_neurones.push_back(neurone);
}

std::vector<double> CLayer::evaluate(const std::vector<double>& input) const
{
	std::vector<double> output = {};
	for (size_t i = 0; i < m_neurones.size(); i++)
		output.push_back(m_neurones[i].evaluate(input));
	return output;
}