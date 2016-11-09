#ifndef __FinancialSamples_MACalculator__
#define __FinancialSamples_MACalculator__
##
#include <vector>

class MACalculator{
public:
	MACalculator(int period);
	MACalculator(const MACalculator &);
	MACalculator &operator = (const MACalculator &);
	~MACalculator();

	void addPriceQuote(double close);
	std::vector<double> calculateMA();
	std::vector<double> CalculateEMA();

private:
	//number of periods used in calculation
	int m_numPeriods;
	std::vector<double> m_prices;
};

#endif /*defined(__FinancialSamples__MACalculator__)*/


