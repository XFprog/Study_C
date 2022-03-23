#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

/*
int main()
{
	int day;
	double factor, initial, result;

	printf("Enter day,factor,initial one by one\n");
	scanf("%d%lf%lf",&day,&factor,&initial);//Sumarry:每个占位符对应的数值在输入时可以空格隔开和换行

	result = initial * pow(1+factor,day);
	printf("result = %.2f",result);

	return 0;
}
*/

/*
int main()
{
	double c=0, f=0;

	printf("Enter fahr and will output celsius: ");
	scanf("%lf", &f);
	c = 5 * (f - 32) / 9;
	printf("\nf(f=%.0f) = %.0f", f, c);

	return 0;
}
*/

/*
int main()
{
	int a, b;

	printf("Enter two int number(>0): ");
	scanf("%d%d", &a, &b);
	if (a > 0 && b > 0)
	{
		printf("a+b = %d\na-b = %d\na*b = % d\na/b = %d", a + b, a - b, a * b, a / b);
	}
	else printf("please enter two int number that bigger than 0");

	return 0;
}
*/

/*
int main()
{
	float n;
	printf("Enter a number: ");
	scanf("%f", &n);
	if (n != 0) printf("\n%.1f", 1 / n);
	else printf("0");

	return 0;
}
*/

/*
int main()
{
	double x;
	printf("Enter a number: ");
	scanf("%lf", &x);
	if (x < 0) printf("\nf(%lf) = %lf", x, pow(x+1, 2)+2*x+1/x);
	else printf("\nf(%lf) = %lf", x, sqrt(x));

	return 0;
}
*/

/*
int main()
{
	int n, i, sum;
	printf("Enter a number: ");
	scanf("%d", &n);
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("sum = %d", sum);

	return 0;
}
*/

/*
int main()
{
	int i,n,sum = 1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++) sum *= i;
	printf("sum = %d", sum);

	return 0;
}
*/

/*
int main()
{
	double sum = 0, i;
	int n,flag;
	printf("Enter a number: ");
	scanf("%d", &n);
	flag = 1;
	for (i = 0; i <= n; i++)
	{
		sum += flag * 1 / (2 * i + 1);
		flag = - flag;
	}
	printf("%lf", sum);
	return 0;
}
*/

/*
int main()
{
	double lower, upper, i;
	printf("Enter two number,and creat a table for lower to upper's transform: ");
	scanf("%lf%lf",&lower,&upper);
	for (i = lower; i <= upper; i++)
	{
		printf("\n%.0f%4.0f", i, 5 * (i - 32) / 9);

	}
	return 0;
}
*/

/*
int main()
{
	int a = -1;
	int b = -2;
	printf("%3d%3d", a,b);
	return 0;
}
*/

/*
int main()
{
	int n;
	double sum,i;
	sum = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		sum += 1/i;
	}
	printf("sum = %.2f", sum);
	return 0;
}
*/

/*
int main()
{
	double i, sum=0;
	int n,flag = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += flag * 1 / (3 * (i-1) + 1);
		flag = -flag;
	}
	printf("%.2f", sum);

	return 0;
}
*/

/*
double fact(int i);
int main()
{
	int n, i;

	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("%d!= %.0f\n", i, fact(i));
	}


	return 0;
}

double fact(int n)
{
	int i;
	double result = 1;

	for (i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}
*/

/*
int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("3^%d = %.2f\n", i, pow(3, i));
	}

	return 0;
}
*/

/*
double fact(int n);
int main()
{
	int n, m, conbineNum;
	printf("Enter two number(>0): ");
	scanf("%d%d", &n, &m);
	conbineNum = fact(n) / (fact(m) * fact(n-m));
	printf("\n%d个里面取%d个,组合数为%d", n, m, conbineNum);

	return 0;
}

double fact(int n)
{
	int i,result=1;
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}
*/