#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int is(int number);
int main()
{
	int m, n, i,count=0;
	printf("Enter m n: ");
	scanf("%d%d",&m,&n);
	for (i = m; i <= n; i++)
	{
		if (is(i))
		{
			printf("%4d", i);
			count++;
			if (count % 5 == 0) putchar('\n');
		}
	}
	printf("\ncount: %d", count);
	return 0;
}
int is(int number)
{
	int sum=0,s_number = number,power=0,p;
	while (s_number % 10 > 0)
	{
		power += 1;
		s_number /= 10;
	}
	p = power;
	while (power > 0)
	{
		sum += pow(number%10,p);
		power--;
	}
	if (sum == number) return 1;
	return 0;
}
*/

/*
double funs(double e, double x);
double fact(int n);
int main()
{
	double e, x;
	printf("Enter e,x: ");
	scanf("%lf%lf", &e, &x);
	printf("value: %.4f", funs(e, x));

	return 0;
}
double funs(double e, double x)
{
	int i=1,flag=1;
	double value=0,item=1;
	while (fabs(item) > e)
	{
		item = flag * pow(x, 2 * (i - 1)) / fact(2 * (i - 1));
		value += item;
		flag = -flag;
		i++;
	}
	return value;
}
double fact(int n)
{
	int i = 1;
	double sum=1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
*/

/*
void hollow_pyramid(int n);
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	hollow_pyramid(n);
	return 0;
}
void hollow_pyramid(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n-i; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= 2*i - 1; j++)
		{
			if (i != n)
			{
				if (j == 1) printf("%d",i);
				if (j > 1 && j < 2 * i - 1) putchar(' ');
				if (j == 2 * i - 1 && i != 1) printf("%d", i);
			}
			if (i == n) printf("%d", i);
		}
		putchar('\n');
	}
}
*/

/*
int main()
{
	int a;
	char b;
	char c;
	char d;
	a = 'a' + 'A';
	b = 1 + 47;
	c = '\101';
	d = '\x42';
	printf("a=%d\n", a);
	printf("b=%c\n", b);
	printf("c=%c\n",c);
	printf("d=%c\n", d);
	return 0;
}
*/

/*
int is(int number);
int main()
{
	int b = 2;

	if (is(b) == 1)
	{
		printf("hh");
	}

	return 0;
}
int is(int number)
{
	int a = number/2;

	return a;
}
*/

/*
int main()
{
	int a = 67;//64��10���Ʊ�����ʽ
	int b = 0103;//64��8���Ʊ�����ʽ
	int c = 0x43;//64��16���Ʊ�����ʽ
	printf("10����64���10����:%d  8����:%o  16����:%x\n",a,a,a);//67|103|43
	printf("8����0103���10����:%d  8����:%o  16����:%x\n", b, b, b);//67|103|43
	printf("16����0x43���10����:%d  8����:%o  16����:%x\n", c, c, c);//67|103|43
}
*/

/*
int main()
{
	int a, b;
	printf("Enter a(8���ƶ���),b(16���ƶ���): ");
	scanf("%o%x", &a, &b);
	printf("%d%d", a, b);

	return 0;
}
*/

/*
int main()
{
	float a;
	double b;
	scanf("%f%lf", &a, &b);//����ʱ%f��%e����һ����
	printf("%e%e", a, b);

	return 0;
}
*/

/*
int main()
{
	char ch;
	printf("Enter ch: ");
	ch = getchar();
	while (ch != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32;
			putchar(ch);
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 32;
			putchar(ch);
		}
		else putchar(ch);
		ch = getchar();
	}

	return 0;
}
*/

/*
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("%o  %x", n,n);

	return 0;
}
*/

/*
int main()
{
	char ch;
	printf("Enter ch: ");
	ch = getchar();
	while (ch != '\n')
	{
		if (ch >= 'a' && ch < 'z')
		{
			ch = ch - 'a' + 'A' + 1;
			putchar(ch);
		}
		else if (ch >= 'A' && ch < 'Z')
		{
			ch = ch - 'A' + 'a'+1;
			putchar(ch);
		}
		else if (ch == 'Z')
		{
			ch = 'a';
			putchar(ch);
		}
		else if (ch == 'z')
		{
			ch = 'A';
			putchar(ch);
		}
		ch = getchar();
	}

	return 0;
}
*/

