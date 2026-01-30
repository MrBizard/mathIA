#pragma once

#include "CLayer.h"

class CReseau
{
	std::vector<CLayer> m_layers;
public:
	void addLayer(const CLayer& layer);
	std::vector<double> evaluate(const std::vector<double>& input) const;
};

