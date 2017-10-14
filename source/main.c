#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void)
{
	double a;		//ammount on deposit 
	double p = 5000;  //starting principal
	double r ;		//annual interest rate
	unsigned int y;		//year
	

	for (r = 0.1; r <= 0.12; r += 0.005)
	{
		printf("Rate:%f\n", r);
		printf("%4s%21s\n", "Year", "Amount on deposit");

		for (y = 1; y <= 15; y++)
		{
			a = p*pow(1.0 + r, y);
			printf("%4u%21.2f\n", y, a);
		}
		printf("\n");
	}

	

	system("pause");
	return 0;
}