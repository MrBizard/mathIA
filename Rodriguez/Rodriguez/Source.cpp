#include <iostream>

#include "CReseau.h"

void afficherTableau(std::vector<double> vec)
{
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << ' ';
	std::cout << std::endl;
}

int main()
{
	std::shared_ptr<ReLU> relu = std::make_shared<ReLU>();


	CReseau reseau = CReseau();

	CLayer couche1 = CLayer();
	std::vector<double> weight1 = { 1, 1, -1, 2, -1, 0, 1, 1 };
	CNeurone neurone1 = CNeurone(-0.1, weight1, relu);
	couche1.addNeurone(neurone1);
	std::vector<double> weight2 = { 0, 0, 1, 1, 1, 3, 2, 0 };
	CNeurone neurone2 = CNeurone(0.2, weight2, relu);
	couche1.addNeurone(neurone2);
	std::vector<double> weight3 = { 1, -1, 1, -1, 0, 0, 0, 1};
	CNeurone neurone3 = CNeurone(1.2, weight3, relu);
	couche1.addNeurone(neurone3);
	std::vector<double> weight4 = { 2, 2.5, 3, -2, -2.5, 1, 0, 0 };
	CNeurone neurone4 = CNeurone(-2.5, weight4, relu);
	couche1.addNeurone(neurone4);

	reseau.addLayer(couche1);

	CLayer couche2 = CLayer();
	std::vector<double> weight5 = { -1.3, 1.7, 0.7, 0.4 };
	CNeurone neurone5 = CNeurone(0, weight5, relu);
	couche2.addNeurone(neurone5);
	std::vector<double> weight6 = { 0.35, -0.95, 1.1, 0.2 };
	CNeurone neurone6 = CNeurone(1.2, weight6, relu);
	couche2.addNeurone(neurone6);

	reseau.addLayer(couche2);


	std::vector<double> input = { 4, -1, 0, 2, 5, 1, 0, 4 };
	std::cout << "start" << std::endl;
	afficherTableau(reseau.evaluate(input));
	std::cout << "end" << std::endl;
	return 0;
}