#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{

	float ini_rate = 0.10;
	float rate = 10;
	for (int i = 1; i <= 5; i++)
	{
		float principal = 5000;
		printf("interest rate: %.2f%%\n", rate);
		for (int j = 1; j <= 15; j++)
		{
			float amount = principal * pow(1.0 + ini_rate, j);
			printf("year %d\t amount: %.2f\n", j, amount);
		}
		ini_rate += 0.005;
		rate += 0.5;
		printf("\n");
	}
	system("pause");
}