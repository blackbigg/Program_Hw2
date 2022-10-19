#include <stdio.h>
#include <stdlib.h>

void main()
{
	int hour;
	float rate,salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hour);
		if (hour==-1)
		{
			break;
		}
		printf("Enter hourly rate of the worker: ");
		scanf("%f", &rate);
		if (hour <= 40)
		{
			salary = hour * rate;
		}
		else
		{
			salary = 40 * rate + (hour - 40) * rate * 1.5;
		}
		printf("Salary is $%.2f\n\n", salary);
	}
	system("pause");
}