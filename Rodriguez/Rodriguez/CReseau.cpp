#include "CReseau.h"
#include <iostream>


void CReseau::addLayer(const CLayer& layer)
{
	if (m_layers.size() != 0)
	{
		if (layer.getNbPoids() != m_layers.back().getNbNeurone())
		{
			std::cout << "le nombre de poids de ce layer est incompatible avec le nombre de neurones du layer précédent" << std::endl;
			throw;
		}
	}
	m_layers.push_back(layer);
}
std::vector<double> CReseau::evaluate(const std::vector<double>& input) const
{
	std::vector<double> valeur = input;
	for (size_t i = 0; i < m_layers.size(); i++)
	{
		valeur = m_layers[i].evaluate(valeur);
	}
	return valeur;
}