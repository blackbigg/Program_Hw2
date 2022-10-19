#include <stdio.h>
#include <stdlib.h>

void main()
{
	float sales, salary;
	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
		if (sales == -1)
		{
			break;
		}
		salary = 200.00f + sales * 0.09f;
		printf("Salary is: $%.2f\n\n", salary);
	}
	system("pause");
}