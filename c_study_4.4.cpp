#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main()
{
	int m, n,i,count=0;
	int factorsum(int number);
	printf("Enter m,n: ");
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
	{
		if (factorsum(i))
		{
			printf("%4d", factorsum(i));
			count++;
			if (count % 5 == 0) putchar('\n');
		}
	}
	printf("\nperfect number count:%d", count);

	return 0;
}
int factorsum(int number)
{
	int sum=0,i;
	for (i = number - 1; i >= 1; i--)
	{
		if (number % i == 0) sum += i;
	}
	if (sum == number) return sum;

	return 0;
}
*/

/*
int main()
{
	int m, n, i=1, my_fib, count = 0;
	int fib(int n);
	printf("Enter m,n: ");
	scanf("%d%d", &m, &n);
	while (1)
	{
		my_fib = fib(i);
		if (my_fib >= m && my_fib <= n)
		{
			printf("%6d", my_fib);
			count++;
			if (count % 5 == 0) putchar('\n');
		}
		else if (my_fib > n) break;
		i++;
	}
}
int fib(int n)
{
	if (n == 1) return 1;
	if (n == 2) return 1;
	return fib(n - 1) + fib(n - 2);
}
*/

/*
int main()
{
	int i,j,k, count = 0,onePrime,twoPrime,flag=0;
	int isPrime(int i);
	for (i = 6; i <= 100; i+=2)
	{
		for (j = 2; j <= 100; j++)
		{
			if (isPrime(j)) onePrime = j;
			else onePrime = 0;
			if (onePrime != 0)
			{
				for (k = 2; k <= 100; k++)
				{
					if (isPrime(k)) twoPrime = k;
					else twoPrime = 0;
					if (i == onePrime + twoPrime)
					{
						printf("%d = %d + %d   ", i, onePrime, twoPrime);
						count++;
						if (count % 5 == 0) putchar('\n');
						flag = 1;
						break;
					}
					else if (i < j + k) break;
				}
			}
			if (flag == 1)
			{
				flag = 0;
				break;
			}
		}
	}

	return 0;
}
int isPrime(int i)
{
	int j,limit;
	limit = sqrt(i) + 1;
	if (i == 2) return 1;
	for (j = 2; j <= limit; j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
*/

/*
int main()
{
	int n;
	int reverse(int n);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("%d's reserve = %d", n, reverse(n));
	return 0;
}
int reverse(int n)
{
	int pow=1,s_n=n,result=0;

	while (s_n / 10 != 0)
	{
		s_n /= 10;
		pow *= 10;
	}
	while (n % 10 != 0)
	{
		result += n % 10*pow;
		n /= 10;
		pow /= 10;
	}
	return result;
}
*/

/*
int main()
{
	char ch='0';
	int sum=0,firstCount=1,countType=0;
	printf("Enter expression: ");
	do
	{
		scanf("%c", &ch);
		if (ch >= '0' && ch <= '9')
		{
			ch = ch - '0';
			if (firstCount == 1)
			{
				sum += ch;
				firstCount = 0;
			}
			switch (countType)
			{
			case 1:sum += ch,countType=0; break;
			case 2:sum -= ch,countType=0; break;
			case 3:sum *= ch,countType=0; break;
			case 4:sum /= ch,countType=0; break;
			default:break;
			}
		}
		switch (ch)
		{
		case '+':countType = 1; break;
		case '-':countType = 2; break;
		case '*':countType = 3; break;
		case '/':countType = 4; break;
		default:break;
		}

	} while (ch != '=');
	printf("%d", sum);
	return 0;
}
*/

/*
int main()
{
	int a, b, sum;
	char ch;
	printf("Enter expression: ");
	scanf("%d", &a);//取第一个数
	while ((ch = getchar()) != '=')
	{
		scanf("%d", &b);
		switch (ch)
		{
		case '+':sum = a + b; break;
		case '-':sum = a - b; break;
		case '*':sum = a * b; break;
		case '/':if (b != 0) sum = a / b; break;
		default:printf("Error!"); break;
		}
		a = sum;
	}
	printf("%d", sum);

	return 0;
}
*/

/*
int main()
{
	int ban=0;
	char ch;
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n')
	{
		if (ban==0)
		{
			if (ch >= 'a' && ch <= 'z')
			{
				ch = ch - 'a' + 'A';
				ban = 1;
			}
		}
		if (ch == ' ') ban = 0;
		putchar(ch);
	}

	return 0;
}
*/

/*
int main()
{
	int a[10],n,i;
	double average=0, sum;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d intergers(n<=10): ", n);
	for (i = 0; i <= n-1; i++)
	{
		scanf("%d", &a[i]);
	}
	sum = 0;
	for (i = 0; i <= n - 1; i++)
	{
		sum += a[i];
	}
	average = sum / n;
	printf("Average: %.2f\n", average);
	printf(">average: ");
	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] > average) printf("%d ", a[i]);
	}

	return 0;
}
*/

/*
int main()
{
	int a['a'];
	a['a' - 'a' + 1] = 1;
	printf("%d", a[1]);

	return 0;
}
*/

/*
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 1,2,3 }; printf("%d", b[3]);
	int c[5]; printf(" %d %d ", c[0], c[1]);
	int d[] = { 1,2,3,4,5 };
	static int e[5]; printf("%d", e[2]);

	return 0;
}
*/

/*
#define MAXN 46
int main()
{
	int fib[MAXN] = { 1,1 };
	int i,n;
	printf("Enter n: ");
	scanf("%d", &n);
	if (n >= 1 && n <= 46)
	{
		for (i = 2; i <= n - 1; i++)
		{
			fib[i] = fib[i - 1] + fib[i - 2];
		}
		for (i = 0; i <= n - 1; i++)
		{
			printf("%6d", fib[i]);
			if ((i + 1) % 5 == 0) putchar('\n');
		}
		if (i % 5 != 0) putchar('\n');
	}
	else printf("Invalid value!");
}
*/

