#include <stdio.h>

double unitconversion(double usage_in_miles_per_galon)
{

double usage_in_liters_per_100km=1.0/usage_in_miles_per_galon*100*3.785/1.609;//100km/l=1,609km/3,785l
 
	return usage_in_liters_per_100km;
}

int main()
{
	double usage_in_miles_per_galon;
	double usage_in_liters_per_100km;

	while(scanf("%lf",&usage_in_miles_per_galon)>0)
	{
		usage_in_liters_per_100km=unitconversion(usage_in_miles_per_galon);
		printf("%.3f\n",usage_in_liters_per_100km);
	}

	return 0;
}