#include <stdio.h>
#include <stdlib.h>

void main()
{
	int length, breadth;
	printf("input length: ");
	scanf("%d", &length);
	printf("input breadth: ");
	scanf("%d", &breadth);

	for (int i = 1; i < length + 1; i++)
	{
		for (int j = 1; j < breadth+1; j++)
		{
			if (i==1||i==length)
			{
				printf("*");
			}
			else
			{
				if (j==1||j==breadth)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}

		}
		printf("\n");
	}

	system("pause");
}