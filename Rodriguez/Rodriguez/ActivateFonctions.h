#pragma once
class CActivateFonction
{
public:
	virtual double activation(double x)const  = 0;
};

class ReLU : public CActivateFonction
{
	double activation(double x) const override;
};