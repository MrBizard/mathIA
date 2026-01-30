#pragma once
#include <vector>
#include <memory>

#include "ActivateFonctions.h"
class CNeurone
{
private:
	double m_bias = 0;
	std::vector<double> m_weights = std::vector<double>();
	std::shared_ptr<CActivateFonction>	m_activate;

public:
	CNeurone(double bias, std::vector<double> weights, std::shared_ptr<CActivateFonction> activateFunction);
	double evaluate(const std::vector<double>& input) const;
	const size_t& getNbPoids()const { return m_weights.size(); }
};

