#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

/*
int main()
{
	int a = 2;

	printf("\n%d", a);
	printf("\n%1d", a);
	printf("\n%2d", a);
	printf("\n%3d", a);
	printf("\n%4d", a);
}
*/

/*
int main()
{
	int a, b, c;
	a = 0;
	b = 2;
	c = 1;
	a = (b > c);
	printf("%d", a);
	return 0;
}
*/

/*
int main()
{
	int a;
	if (a == 0)
		printf("hh");
}
*/

/*
int main()
{
	int a, b, c, d;
	float even,sum;

	scanf("%d%d%d%d", &a,&b,&c,&d);
	sum = a + b + c + d;
	even = sum / 4;
	printf("sum = %.0f\neven = %.1f", sum, even);

	return 0;
}
*/

/*
int main()
{
	double x,totalPrice;

	printf("Please enter your number of using water: ");
	scanf("%lf", &x);
	if (x < 0) printf("Invalid value!");
	else if (x >= 0 && x <= 50) printf("%.2f total price is %.2f", x, x*0.53);
	else printf("%.2f total price is %.2f", x, 26.5+0.58*(x-50));

	return 0;
}
*/

/*
int main()
{
	int m, n;
	double sum=0, i;

	printf("Enter two number(>0): ");
	scanf("%d%d", &m, &n);
	if (m <= 0 || n <= 0) printf("Invalid value!");
	else
	{
		for (i = m; i <= n; i++)
		{
			sum += (pow(i, 2) + 1.0 / i);
		}
		printf("sum = %.6f", sum);
	}
	return 0;
}
*/

/*
int main()
{
	int n,flag=1;
	double i,sum = 0;
	printf("Enter a number(>0): ");
	scanf("%d", &n);
	if (n <= 0) printf("Valid value!");
	else
	{
		for (i = 1; i <= n; i++)
		{
			sum += flag * i / (2 * i - 1);
			flag = -flag;
		}
		printf("sum = %lf", sum);
	}
	return 0;
}
*/

/*
int main()
{
	int n;
	double i,sum;
	printf("Enter a number£¨>0£©: ");
	scanf("%d", &n);
	sum = 0;
	if (n <= 0) printf("Valid value!");
	else
	{
		for (i = 1; i <= n; i++)
		{
			sum += sqrt(i);
		}
		printf("sum = %.2f", sum);
	}
	return 0;
}
*/

/*
double fact(int n);
int main()
{
	int n;
	double i, e=0;
	printf("Enter a number(>0): ");
	scanf("%d", &n);
	if (n <= 0) printf("Valid value!");
	else
	{
		for (i = 1; i <= n; i++)
		{
			e += fact(i);
		}
		printf("e = %lf", e);
	}
	return 0;
}

double fact(int n)
{
	double i,result=1;
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
*/

/*
int main()
{
	int yournumber=0,mynumber;
	mynumber = 74;
	printf("Enter yournumber: ");
	while (yournumber != mynumber)
	{
		scanf("%d", &yournumber);
		if (yournumber > mynumber) printf("too bigger!");
		else if (yournumber < mynumber) printf("too smaller");
		else ("guess true!");
	}
	return 0;
}
*/

/*
int main()
{
	int i,n,number,even=0,odd=0;
	printf("Enter n(>0) numbers: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &number);
		if (number % 2 == 0) even++;
		else odd++;
	}
	printf("even: %d\nodd: %d", even, odd);

	return 0;
}
*/

/*
int main()
{
	int n, i, pass_number=0;
	double point=0, average_point=0,sum_point=0;
	printf("Enter a number stand for the number of the students: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%lf", &point);
		if (point >= 60) pass_number++;
		sum_point += point;
	}
	average_point = sum_point / n;
	printf("\n\npass_number: %d\naverage_point: %.1f", pass_number, average_point);

	return  0;
}
*/

/*
int main()
{
	double value1, value2;
	char op;
	printf("Type a expression: ");
	scanf("%lf%c%lf", &value1, &op, &value2);
	if (op == '+') printf("%.2f", value1 + value2);
	else if (op == '-') printf("%.2f", value1 - value2);
	else if (op == '*') printf("%.2f", value1 * value2);
	else if (op == '/')
	{
		if (value2 == 0) printf("Division can not be 0!");
		else printf("%.2f", value1 / value2);
	}
	else printf("Unknow operator!");

	return 0;
}
*/

/*
int main()
{
	char ch;
	int first = 1, k;
	printf("Enter 8 characters: ");
	for (k = 1; k <= 8; k++)
	{
		ch = getchar();
		if (first == 1)
		{
			putchar(ch);
			first = 0;
		}
		else
		{
			putchar('-');
			putchar(ch);
		}
	}

	return 0;
}
*/

/*
int main()
{
	char ch;
	printf("Enter a character: ");
	ch = getchar();
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("it is a letter!");
	}
	else
	{
		printf("it is not a letter!");
	}

	return 0;
}
*/

/*
int main()
{
	int n, i, letter_count=0, number_count=0, other_count=0;
	char ch;
	printf("Enter n char: ");
	scanf("%d", &n);
	getchar();
	for (i = 1; i <= n; i++)
	{
		ch = getchar();
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) letter_count++;
		else if (ch >= '0' && ch <= '9') number_count++;
		else other_count++;
	}
	printf("letter_count: %d\nnumber_count: %d\nother_count: %d", letter_count, number_count, other_count);

	return 0;
}
*/

/*
int main()
{
	int i, n, letter_count = 0, number_count = 0, backblack_count = 0, other_count = 0;
	char ch;
	printf("Enter n: ");
	scanf("%d", &n);
	getchar();
	for (i = 1; i <= n; i++)
	{
		ch = getchar();
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) letter_count++;
		else if (ch >= '0' && ch <= '9') number_count++;
		else if (ch == ' ' || ch == '\n') backblack_count++;
		else other_count++;
	}
	printf("letter_count=%d\nnumber_count=%d\nbackblack_count=%d\nother_count=%d", letter_count, number_count, backblack_count, other_count);

	return 0;
}
*/

/*
int main()
{
	int i, n, year;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 2000; i <= n; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) printf("runYear: %d\n",i);
	}

	return 0;
}
*/