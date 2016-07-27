#include <iostream>
#include "InterestRateCalc.h"
#include <cstdlib>

int main(int argc, const char *argv[]){

	if(argc!=3){
		std::cout<<"usage: progName <interest rate> <value"<<std::endl;
		return 1;
	}

	double rate = atof(argv[1]);
	double value= atof(argv[2]);

	InterestRateCalc irCalc(rate);

	double res=irCalc.singlePeriod(value);
	std::cout<<"result is"<<res<<std::endl;
	return 0;
}