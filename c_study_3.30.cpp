#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main()
{
	int bf_tu=1, bff_tu=1, tu, i, month;
	printf("Enter month: ");
	scanf("%d", &month);
	if (month == 1 || month == 2) printf("if month=%d,the number of rabbit: 1", month);
	else
	{
		for (i = 3; i <= month; i++)
		{
			tu = bf_tu + bff_tu;
			bff_tu = bf_tu;
			bf_tu = tu;
		}
		printf("if month=%d,the number of rabbit: %d", month,tu);
	}
	return 0;
}
*/

/*
double cylinder(double h, double r);
int main()
{
	double height, radius,volume;
	printf("Enter height && radius: ");
	scanf("%lf%lf",&height,&radius);
	volume = cylinder(height, radius);
	printf("volume: %.2f", volume);
	return 0;
}
double cylinder(double h, double r)
{
	double result;
	result = 3.1415926 * r * r * h;

	return result;
}
*/

/*
double S(double x,double y,double z);
int main()
{
	int flag=1;
	double s, a1, a2, a3, a4, a5, a6, a7;
	printf("Input 7 sides: ");
	scanf("%lf%lf%lf%lf%lf%lf%lf", &a1, &a2, &a3, &a4, &a5, &a6, &a7);
	if (a1 + a2 < a3 || a3 + a4 < a5 || a5 + a6 < a7)
	{
		printf("Invalid value!");
		flag = 0;
	}
	if (flag == 1)
	{
		s = S(a1,a2,a3)+S(a3,a4,a5)+S(a5,a6,a7);
		printf("S: %.2f", s);
	}
	return 0;
}
double S(double x, double y, double z)
{
	double result,s;
	s = (x + y + z) / 2;
	result = sqrt(s*(s-x)*(s-y)*(s-z));
	return result;
}
*/

/*
int Issquart(int n);
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("%d is squart: %d",n ,Issquart(n));

	return 0;
}
int Issquart(int n)
{
	int i=1,s=0;
	while (s < n)
	{
		s += i;
		i += 2;
		if (s == n) return 1;
	}
	return 0;
}
*/

