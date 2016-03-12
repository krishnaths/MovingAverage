#include "MACalculator.h"
#include <iostream>

//the main function receives the parameters passed to the program and calls the MACalculator class
int main(int argc, const char * argv[])
{
	if(argc != 2)
	{
		std::cout << "usage is :Program Name <num periods>" << std::endl;
		return 1;
	}

	int num_periods = atoi(argv[1]);
	double price;
	MACalculator calculator(num_periods);
	for(;;){
		std::cin >> price;
		if(price == -1)
		{
			break;
		}
		calculator.addPriceQuote(price);
	}
	std::vector<double> ma = calculator.calculateMA();
	for (int i=0; i<ma.size(); ++i)
	{
		std::cout << "average value" << i << " = " << ma[i] << std::endl ;

	}

	std::vector<double> ema = calculator.CalculateEMA();

	for(int i=0; i< ema.size(); ++i)
	{
		std::cout << "exponential average value" << i << " = " << ema[i] << std::endl;

	}

	return 0;

}
