#include <iostream>
class InterestRateCalc{

	public:
		//Constructors
		InterestRateCalc(double rate);
		InterestRateCalc(const InterestRateCalc &v);
		InterestRateCalc &operator =(const InterestRateCalc &v);
		~InterestRateCalc();

		//Methods
		double singlePeriod(double value);


	private:
		double m_rate;
};

inline double InterestRateCalc::singlePeriod(double value){
	double f = value * (1+this->m_rate);
	return f;
}
