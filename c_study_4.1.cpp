#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
void fact(int a);
int main()
{
	static int a = 1;
	printf("%d", a);
	fact(a);
	printf("%d", a);
	fact(a);

	return 0;
}
void fact(int a)
{
	printf("%d", a);
	a++;
	printf("%d", a);
}
*/

/*
int fact(int i);
int main()
{
	int n, i,sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += fact(i);
	}
	printf("1!+...+%d! = %d", n, sum);
	return 0;
}
int fact(int i)
{
	static int f=1;
	f *= i;
	return f;
}
*/

/*
void test(int a, int b = 3);
int main()
{


	return 0;
}
*/

/*
int fun(int a, int b, int c)
{
	c = a * b;
	return 0;
}
int main()
{
	int c;
	fun(2, 3, c);
	printf("%d\n", c);
	return 0;
	return 0;
}
*/

/*
int sign(int x);
int main()
{
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("y = %d", sign(x));
	return 0;
}
int sign(int x)
{
	if (x > 0) return 1;
	if (x == 0) return 0;
	if (x < 0) return -1;
}
*/

/*
int main()
{
	int n,sum=0,count=0;
	int even(int n);
	printf("Enter a series of number: ");
	do
	{
		scanf("%d", &n);
		if (!even(n))
		{
			sum += n;
			count++;
		}
	} while (n > 0);
	printf("sum: %d   count: %d", sum, count);

	return 0;
}
int even(int x)
{
	if (x % 2 != 0) return 0;
	else return 1;
}
*/

/*
double dist(int x1, int y1, int x2, int y2);
int main()
{
	int x1, x2, y1, y2;
	printf("Enter two point position: ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	printf("The two point's distance is: %.2f", dist(x1,y1,x2,y2));

	return 0;
}
double dist(int x1,int y1,int x2,int y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
*/

/*
int prime(int n);
int main()
{
	int m,n, sum=0, count=0, i;
	printf("Enter m, n:");
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
	{
		if (prime(i))
		{
			sum += i;
			count++;
		}
	}
	printf("the prime number of sum:%d  count:%d", sum, count);

	return 0;
}
int prime(int n)
{
	int i;
	if (n == 1) return 0;
	if (n == 2) return 1;
	for (i = 1; i <= sqrt(n)+1; i++)
	{
		if (n % 2 == 0) return 0;
	}
	if (i>sqrt(n)+1) return 1;
}
*/

/*
int countdigit(int number, int digit);
int main()
{
	int number,digit,i;
	printf("Enter a number: ");
	scanf("%d",&number);
	printf("Enter it's digit: ");
	scanf("%d", &digit);
	printf("%d's digit %d have: %d", number, digit, countdigit(number, digit));
	return 0;
}
int countdigit(int number, int digit)
{
	int vdigit,count=0;
	while (number % 10 > 0)
	{
		vdigit = number % 10;
		if (digit / vdigit == 1 && digit % vdigit == 0) count++;
		number /= 10;
	}
	return count;
}
*/
