#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>
#include "length.h"

#pragma region 长度单位转换(宏定义)
/*
#define mile_to_meter 1609
#define foot_to_centermeter 30.48
#define inch_to_centermeter 2.54
int main()
{
	float miles, feet, inches;
	printf("Enter miles,feet,inches: ");
	scanf("%f%f%f", &miles, &feet, &inches);
	printf("%f miles = %f meters\n", miles, miles * mile_to_meter);
	printf("%f feet = %f centermeters\n", feet, feet * foot_to_centermeter);
	printf("%f inches = %f centermeters\n", inches, inches * inch_to_centermeter);
	return 0;
}
*/
#pragma endregion

/*
#define My_s "hello my dear \
world world\n"
#define π 3.1415926
#define S π*r*r
#define F for(i=0;i<n;i++)
int main()
{
	int i, n, r;float s;
	printf(My_s);
	printf("Enter n,r: ");
	scanf("%d%d", &n, &r);
	s = S;
	printf("s=%f\n", s);
	F printf("%d ", i);

	return 0;
}
*/

/*
#define MAX(a,b) a>b?a:b
#define SMAX(a,b) (a)>(b)?(a):(b)
#define SQR(x) x*x
#define SSQR(x) (x)*(x)
#define CHAR(ch) (((ch)>='a')&&((ch)<='z'))?(ch)-'0':-1
int main()
{
	printf("MAX(3+3,4)-->%d\n", MAX(3 + 3, 4));
	printf("SMAX(3+3,4)-->%d\n", SMAX(3 + 3, 4));
	printf("SQR(3+3) = %d\n", SQR(3 + 3));
	printf("SSQR(3+3) = %d\n", SSQR(3 + 3));
	if (CHAR('8') != -1) printf("YES"); else printf("NO");

	return 0;
}
*/

/*
int main()
{
	float miles, feet, inches;
	printf("Enter miles,feet,inches: ");
	scanf("%f%f%f", &miles, &feet, &inches);
	printf("%f miles = %f meters\n", miles, miles * mile_to_meter);
	printf("%f feet = %f centermeters\n", feet, feet * foot_to_centermeter);
	printf("%f inches = %f centermeters\n", inches, inches * inch_to_centermeter);
	return 0;
}
*/

/*
#define FLAG 1
#if !FLAG
int main()
{
	printf("Hello");
	return 0;
}
#else
int main()
{
	printf("hidden hello");
	return 0;
}
#endif
*/

/*
#define MM 1
int main()
{
#if !MM
	printf("hello");
#else
	printf("hidden hello");
#endif
	return 0;
}
*/

/*
#define Min(a,b) (a)>(b)?(b):(a)
#define ISLOWER(c) c>='a'&&c<='z'?"yes":"no"
#define ISLEAP(n) (n)%4==0&&(n)%100!=0||(n)%400==0?'Y':'N'
#define CIRFER(r) 3.1415926*2*(r)
int main()
{
	printf("Min(3,4)-->%d\n", Min(3, 4));
	printf("ISLOWER('8')-->%s\n", ISLOWER('8'));
	printf("ISLEAP(2022)-->%c\n", ISLEAP(2022));
	printf("CIRFER(3)-->%f\n", CIRFER(3));

	return 0;
}
*/

#pragma region 找出3个数中最大数(比较函数和代参宏)
/*
#define MAX(a,b,c) (a>b?a:b)>c?(a>b?a:b):c
int max(int a, int b, int c);
int main()
{
	int a, b, c;
	printf("Enter 3 number: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("MAX(%d,%d,%d)-->%d\n\n", a, b, c, MAX(a, b, c));
	printf("max(%d,%d,%d)-->%d", a, b, c, max(a, b, c));

	return 0;
}
int max(int a, int b, int c)
{
	return (a > b ? a : b) > c ? (a > b ? a : b) : c;
}
*/
#pragma endregion

/*
int x = 5, y = 7;
void swap()
{
	int z;
	z = x; x = y; y = z;
}
int main()
{
	int x = 3, y = 8;
	swap();
	printf("%d#%d\n", x, y);
	return 0;
}
*/

#pragma region 满足条件三位数(10-1)
/*
//法一(自己lj)
int amazy(int n)
{
	int i,j,k,count=0,flag1,flag2,arr[3];
	for (i = 101; i <= n; i++)
	{
		j = 0;
		k = i;
		flag2 = 0;
		flag1 = 0;
		for (j = 11; j < 33; j++)
		{
			if (j * j == i)flag1 = 1;
		}
		j = 0;
		while (k != 0)//存储n的每位数
		{
			arr[j] = k % 10;
			k /= 10;
			j++;
		}
		for (k = 0; k < 2; k++)//遍历是否n中有数相等
		{
			for (j = k + 1; j < 3; j++)
			{
				if (arr[k] == arr[j]) flag2 = 1;
			}
		}
		if (flag1 && flag2)//若n中有数相等且为完全平方数则为amazy number
		{
			printf("%4d", i); count++;
		}
	}

	return count;
}
//法二(csdn大佬)
int amazy(int n)
{
	int i, n1, n2, n3,x, count=0;
	for (i = 11; i <= sqrt(n); i++)
	{
		x = pow(i, 2);
		n1 = x % 10; n2 = x % 100 / 10; n3 = x / 100;
		if (n1 == n2 || n1 == n3 || n2 == n3) count++,printf("%4d",x);
	}
	return count;
}
int main()
{
	int n;
	printf("Enter n(100<n<1000): ");
	scanf("%d", &n);
	if (n > 100 && n < 1000) printf("\namazing number's count: %d", amazy(n));
	else printf("\nInvalid input!");
}
*/
#pragma endregion

