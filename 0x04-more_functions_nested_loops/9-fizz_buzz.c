#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
			{
				printf("Buzz");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fuzz ");
		}

		else
		{
			printf("%d", h);
		}
		i++;
	}
	return (0);
}
