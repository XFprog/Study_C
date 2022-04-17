#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 阶乘和(递归10-2)
/*
int main()
{
	int n, i;
	double sum=0, fact(int n);
	printf("Enter n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += fact(i);
	}
	printf("1!+...+%d! = %.0f", n, sum);
	return 0;
}
double fact(int n)
{
	if (n == 1) return 1;
	else return fact(n - 1) * n;
}
*/
#pragma endregion

#pragma region 计算x^n(递归10-3)
/*
double mypow(int x, int n)
{
	if (n == 1) return x;
	else return mypow(x, n - 1) * x;
}
int main()
{
	int x, n;
	printf("Enter x,n: ");
	scanf("%d%d", &x, &n);
	printf("x^n = %.0f", mypow(x, n));
	return 0;
}
*/
#pragma endregion

#pragma region 用函数求某计算式(递归10-4)
/*
double sumpow(int x, int n)
{
	if (n == 1) return x;
	else return sumpow(x, n - 1) + pow(-1, n - 1) * pow(x, n);
}
int main()
{
	int x, n;
	printf("Enter x,n: ");
	scanf("%d%d", &x, &n);
	printf("%d-%d^2+%d^3-...+(-1)^(%d-1)*%d^%d = %.0f", x, x, x, n, x, n, sumpow(x, n));

	return 0;
}
*/
#pragma endregion

#pragma region 计算Ackermenu函数值(递归10-5)
/*
double ack(int m, int n)
{
	if (m == 0) return n + 1;
	else if (n == 0 && m > 0) return ack(m - 1, 1);
	else if (n > 0 && m > 0) return ack(m - 1, ack(m, n - 1));
}
int main()
{
	int m, n;
	printf("Enter m,n: ");
	scanf("%d%d", &m, &n);
	printf("ack(%d,%d) = %.0f",m,n,ack(m,n));

	return 0;
}
*/
#pragma endregion

#pragma region 斐波那契数列(递归10-6)
/*
int Fab(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return Fab(n - 1) + Fab(n - 2);
}
int Fablist(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return Fablist(n - 1) + Fab(n);
}
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Fablist(%d) = %d", n, Fablist(n));

	return 0;
}
*/
#pragma endregion

#pragma region 10进制转2进制(递归10-7)
/*
int dectobin(int n)
{
	if (n == 1) return 1;
	else return dectobin(n / 2) * 10 + n % 2;
}
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("dectobin(n) = %d", dectobin(n));
	return 0;
}
*/
#pragma endregion

#pragma region 将数按位顺序输出(递归10-8)
/*
void output(int n)
{
	int pow = 1, rn = n, start, end;
	if (n >= 0 && n < 10) printf("%d ", n);
	else
	{
		while (rn/10 > 0)
		{
			rn /= 10;
			pow *= 10;
		}
		start = n / pow;
		end = n % pow;
		printf("%d ", start);
		output(end);
	}
}
int main()
{
	int n;
	printf("enetr n: ");
	scanf("%d",&n);
	output(n);
}
*/
#pragma endregion

#pragma region 计算三角形的面积(宏/函数10-10)
/*
#define S(a,b,c) (a+b+c)/2.0
#define Area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
double Sarea(int a, int b, int c)
{
	double s;
	s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
	int a, b, c;
	double s, area;
	printf("Enter a,b,c: ");
	scanf("%d%d%d", &a, &b, &c);
	if (a + b > c && a + c > b && c + b > a)
	{
		s = S(a, b, c);
		area = Area(a, b, c, s);
		printf("Area(%d,%d,%d) = %.1f\n", a, b, c, area);
		printf("Sarea(%d,%d,%d) = %.1f", a, b, c, Sarea(a, b, c));
	}
	else printf("it's can not be a trangle!");

	return 0;
}
*/
#pragma endregion

#pragma region 单词索引
int main()
{
	const char* color[5] = { "red", "yellow", "black", "pink", "green" };//创建字符指针数组，每个数组元素是字符指针，存储每个字符串的首元素地址
	int i, flag=0;
	char ch;const char *temp;
	printf("Enter ch: ");
	scanf("%c", &ch);
	for (i = 0; i < 5; i++)
	{
		if (*color[i] == ch)
		{
			flag = 1;
			puts(color[i]);
		}
	}
	if (flag == 0) printf("Not found");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", color[i]);
	}
	temp = color[1];
	color[1] = color[3];
	color[3] = temp;
	putchar('\n');
	for (i = 0; i < 5; i++)
	{
		printf("%s ", color[i]);
	}
	return 0;
}
#pragma endregion
