#include "CNeurone.h"

CNeurone::CNeurone(double bias, std::vector<double> weights, std::shared_ptr<CActivateFonction> activateFunction)
    :m_bias{ bias }, m_weights{ weights }, m_activate{ activateFunction }
{

}

double CNeurone::evaluate(const std::vector<double>& input) const
{
    double y = m_bias;
    for (size_t i = 0; i < input.size(); i++)
        y += m_weights[i] * input[i];
    return m_activate->activation(y);
}
