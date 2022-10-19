#include <stdio.h>
#include <stdlib.h>

void main()
{
	int account_num=0;
	float begin_bal,total_cha,total_cre,credit_lim,new_bal;
	while (1)
	{

		printf("Enter account number (-1 to end): ");
		scanf("%d", &account_num);
		if (account_num==-1)
		{
			break;
		}
		printf("Enter beginning balance: ");
		scanf("%f", &begin_bal);

		printf("Enter total charges: ");
		scanf("%f", &total_cha);

		printf("Enter total credits: ");
		scanf("%f", &total_cre);

		printf("Enter credit limit: ");
		scanf("%f", &credit_lim);
		printf("\n");
		new_bal = begin_bal + total_cha - total_cre;
		if (new_bal>credit_lim)
		{
			printf("Account:\t%d\n", account_num);
			printf("Credit limit:\t%.2f\n", credit_lim);
			printf("Balance:\t%.2f\n", new_bal);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
	system("pause");
}