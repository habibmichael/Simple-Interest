#include "InterestRateCalc.h"

InterestRateCalc::InterestRateCalc(double rate)
:m_rate(rate)
{

}

InterestRateCalc::~InterestRateCalc(){}

InterestRateCalc::InterestRateCalc(const InterestRateCalc &v)
:m_rate(v.m_rate){}


InterestRateCalc &InterestRateCalc::operator=(const InterestRateCalc &v){
	if(&v !=this){
		this->m_rate=v.m_rate;
	}
	return *this;
}