#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a, b,c,d;
	for (int i = 0; i < 9; i++)
	{
		a = 5 + i;
		b = 5 - i;
		c = 5 + (8 - i);
		d = 5 - (8 - i);
		for (int j = 1; j <= 9; j++)
		{
			if (((b<=j&&j<=a)&&i<5)||(i>=5&&(d<=j&&j<=c)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
}