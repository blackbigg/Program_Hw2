#include <stdio.h>
#include <stdlib.h>

void main()
{

	for (int num1 = 1; num1 < 500; num1++)
	{

		for (int num2 = 1; num2 < 500; num2++)
		{
			if (num2 == num1)
			{
				break;
			}
			for (int num3 = 1; num3 < 500; num3++)
			{
				if (num3 == num2)
				{
					break;
				}
				if (num3 * num3 + num2 * num2 == num1 * num1)
				{
					printf("Pythagorean triple : \t%d\t%d\t%d\n", num3, num2, num1);

				}
			}
		}
	}
	system("pause");
}