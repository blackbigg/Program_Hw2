#include <stdio.h>
#include <stdlib.h>

void main()
{
	int code;
	float salary=0,hourly_salary=0,gross_weekly_sales=0,per_item_money=0,hour=0,product_amount=0;
	start:
	printf("input the paycode:");
	scanf("%d", &code);
	switch (code)
	{
	case 1: //manager
		printf("input the fixed weekly salary: ");
		scanf("%f",&salary);
		break;
	case 2: //hourly workers
		printf("input the fixed hourly salary: ");
		scanf("%f", &hourly_salary);
		printf("input the work hour: ");
		scanf("%f",&hour);
		if (hour<=40)
		{
			salary = hourly_salary * hour;
		}
		else
		{
			salary = hourly_salary * 40 + hourly_salary * 1.5 * (hour - 40);
		}
		break;
	case 3: //commission workers
		printf("input the gross weekly sales: ");
		scanf("%f", &gross_weekly_sales);
		salary = 250 + gross_weekly_sales * 0.057;
		break;
	case 4: //pieceworkers
		printf("input the money of the item produced that can get: ");
		scanf("%f",&per_item_money);
		printf("input the amount of the product: ");
		scanf("%f",&product_amount);
		salary = per_item_money * product_amount;
		break;
	default:
		printf("input error,please input again.\n");
		goto start ;
		break;
	}
	printf("The salary is: %.1f\n", salary);
	system("pause");
}