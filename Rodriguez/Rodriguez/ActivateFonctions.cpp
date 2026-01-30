#include "ActivateFonctions.h"

double ReLU::activation(double x) const
{
	if (x < 0) return 0;
	else return x;
}
