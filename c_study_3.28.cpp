#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


/*
int main()
{
	int n5, n2, n1, money, flag=0;
	printf("Enter moner: ");
	scanf("%d", &money);
	for (n5 = money / 5; n5 >= 0&&flag==0; n5--)
	{
		for (n2 = (money - n5 * 5)/2; n2 >= 0&&flag==0; n2--)
		{
			for (n1 = money - n5 * 5 - n2 * 2; n1 >= 0 && flag == 0; n1--)
			{
				if (n5 * 5 + n2 * 2 + n1 == money)
				{
					printf("n5: %d  n2 : %d  n1 : %d  money: %d", n5, n2, n1, money);
					flag = 1;
				}
			}
		}
	}

	return 0;
}
*/

/*
int main()
{
	int min=9999999, number, n, i;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &number);
		if (number < min) min = number;
	}
	printf("min: %d", min);

	return 0;
}
*/

/*
int main()
{
	int m, n, count=0,sum=0, flag=1,i,j;
	double limit;
	printf("Enter m n: ");
	scanf("%d%d", &m, &n);
	if (m < 1 || n>500 || m > n)
	{
		printf("Invalid value!");
	}
	else
	{
		for (i = m; i <= n; i++)
		{
			flag = 1;
			if (i == 1) flag = 0;
			else if (i == 2) flag = 1;
			else
			{
				limit = sqrt(i) + 1;
				for (j = 2; j <= limit; j++)
				{
					if (i % j == 0)
					{
						flag = 0;
						break;
					}
				}
			}
			if (flag == 1)
			{
				sum += i;
				printf("%4d", i);
				count++;
				if (count % 5 == 0) printf("\n");
			}
		}
	}
	printf("\n\nsum: %d  count: %d", sum, count);
	return 0;
}
*/

