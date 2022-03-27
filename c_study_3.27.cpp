#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int  main()
{
	int i, n, number, max;
	printf("Enter a number stand for haw many you will enter: ");
	scanf("%d", &n);
	printf("Enter a initial number: ");
	scanf("%d", &number);
	max = number;
	for (i = 1; i <= n; i++)
	{
		printf("Enter number: ");
		scanf("%d", &number);
		if (number > max) max = number;
	}
	printf("The max number is: %d", max);

	return 0;
}
*/

/*
int main()
{
	int i, max=0, number;
	printf("Enter a serice of numbers: ");
	do
	{
		scanf("%d", &number);
		printf("amazing!");
		if (max < number) max = number;
	}while (number >= 0);
	printf("Max is: %d", max);

	return 0;
}
*/

/*
int main()
{
	int i, n, item, l_item=1, ll_item=1;
	printf("Enter n: ");
	scanf("%d", &n);
	if (n == 1) printf("fib = 1");
	else if (n >= 2) printf("fib =\n1, 1");
	for (i = 3; i <= n; i++)
	{
		item = l_item + ll_item;
		ll_item = l_item;
		l_item = item;
		printf(", %d", item);
		if (i % 5 == 0) printf("\n");
	}
	return 0;
}
*/

/*
int main()
{
	int i, j, m, n, flag, limit, count=0;
	printf("Enter m n: ");
	scanf("%d%d", &m, &n);
	if (m < 1 || n>500 || m > n) printf("Invalid value!");
	else
	{
		for (i = m; i <= n; i++)
		{
			flag = 1;
			if (i == 1||i == 2) flag = 1;
			else if (i > 2)
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
				printf("%10d", i);
				count++;
				if (count % 5 == 0) printf("\n");
			}
		}
	}

	return 0;
}
*/

/*
int main()
{
	int man, woman, child, n, count=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (man = 0; man <= n; man++)
	{
		for (woman = 0; woman <= n; woman++)
		{
			for (child = 0; child <= n; child++)
			{
				if (man + woman + child == n && 3 * man + 2 * woman + 0.5 * child == n)
				{
					printf("man:%4d  woman:%4d  child:%4d\n", man, woman, child);
					count++;
				}
			}
		}
	}
	printf("types: %d", count);

	return 0;
}
*/

/*
int main()
{
	int man, woman, child, n, types=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (man = 0; man <= n / 3.0; man++)
	{
		for (woman = 0; woman <= n / 2.0; woman++)
		{
			child = n - man - woman;
			if (man + woman + child == n && 3 * man + 2 * woman + 0.5 * child==n)
			{
				printf("man: % 4d  woman : % 4d  child : % 4d\n", man, woman, child);
			}
		}
	}
	printf("Types: %d", types);

	return 0;
}
*/

