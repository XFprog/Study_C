#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main()
{
	int number, t_number=0, pow=1, digit;
	scanf("%d", &number);
	t_number = number;
	while (t_number/10!=0)
	{
		pow *= 10;
		t_number /= 10;
	}
	while (pow >= 1)
	{
		digit = number / pow;
		number = number%pow;
		pow /= 10;
		printf("%d ", digit);
	}

	return 0;
}
*/

/*
int main()
{

	char ch= 'a';

	ch = ( 2 + ch);
	printf("%c", ch);
	return 0;
}
*/

/*
int main()
{
	int n, sum=0, i, number, flag=1;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter some numbers: ");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &number);
		if (number <= 0)
		{
			printf("Invalid value!");
			flag = 0;
			break;
		}
		if (number % 2 == 1)
		{
			sum += number;
		}
	}
	if(flag != 0) printf("sum: %d", sum);

	return 0;
}
*/

/*
double fact(int n);
int main()
{
	int x, i;
	double esp, sum, item;

	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter esp: ");
	scanf("%lf", &esp);

	sum = 0;
	i = 0;
	item = 1;
	while (fabs(item) >= esp)
	{
		item = pow(x, i) / fact(i);
		sum += item;
		i++;
	}
	printf("sum: %.4f", sum);


	return 0;
}
double fact(int n)
{
	int i;
	double result;

	for (i = 1,result=1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}
*/

/*
int main()
{
	int n, i;
	double bf_son, bf_mon, son, mon, sum, item;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1, bf_son = 1, bf_mon = 1,sum=0; i <= n; i++)
	{
		son = bf_son + bf_mon;
		mon = bf_son;
		item = son / mon;
		sum += item;

		bf_son = son;
		bf_mon = mon;
	}
	printf("sum: %.2f", sum);

	return 0;
}
*/

/*
int main()
{
	int i,j,k,a,n,item,sum=0;
	printf("Enter a,n: ");
	scanf("%d%d", &a, &n);
	for (i = 1,item=a; i <= n; i++)
	{
		
		for (j = 1,item=0; j <= i; j++)
		{
			item += a * pow(10, j-1);
		}
		
		item += a;
		sum += item;
		a *= 10;
		//item += a * pow(10, i);
	}
	printf("%d(", sum);
	for (k = 1,item=0; k <= n; k++)
	{
		item += a * pow(10, k - 1);
		if (k != n)
		{
			printf("%d+", item);
		}
		else printf("%d", item);
	}
	printf(")");

	return 0;
}
*/

/*
int main()
{
	int money, n5, n2, n1, count=0;
	printf("Enter money: ");
	scanf("%d", &money);
	for (n5 = 1; n5 <= money / 5; n5++)
	{
		for (n2 = 1; n2 <= (money - 5 * n5) / 2; n2++)
		{
			n1 = money - n5 * 5 - n2 * 2;
			if (n5 * 5 + n2 * 2 + n1 == money&& n1>=1)
			{
				printf("n5:%2d  n2:%2d  n1:%2d  sum:%4d\n",n5,n2,n1,n5+n2+n1);
				count++;
			}
		}
	}
	printf("count: %d", count);

	return 0;
}
*/

/*
int main()
{
	int n, i,j,min_pow,max_pow,sum=0,s_i,count=0;
	printf("Enter n: ");
	scanf("%d", &n);
	min_pow = pow(10, n-1);
	max_pow = pow(10, n);
	for (i = min_pow; i < max_pow; i++)
	{
		s_i = i;
		for (j = 1,sum=0; j <=n; j++)
		{
			sum += pow(s_i % 10, n);
			s_i = s_i / 10;
		}
		if (sum == i)
		{
			count++;
			printf("%d  ", i);
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("count: %d", count);

	return 0;
}
*/

/*
int main()
{
	int m, n,max_yue,min_bei,i,j,flag=0;
	printf("Enter m,n: ");
	scanf("%d%d", &m, &n);
	for (i = m; i > 0; i--)
	{
		if (m % i == 0)
		{
			for (j = n; j > 0; j--)
			{
				if (n % j == 0 && j == i && j!=1)
				{
					max_yue = j;
					printf("最大公约数是: %d\n", max_yue);
					min_bei = m*n/max_yue;//最小公倍数为两数的乘积除以最大公约数
					printf("最小公倍数是: %d", min_bei);
					flag = 1;
				}
				if (flag == 1) break;
			}
		}
		if (flag == 1) break;
	}
	if (flag == 0) printf("无最最大公约数，最小公倍数是: %d", m * n);

	return 0;
}
*/

/*
int main()
{
	int n;
	double h, s=0, item, l=0,i;
	printf("Enter height,n: ");
	scanf("%lf%d", &h, &n);
	item = h;
	s = h;
	if (n == 1) printf("s: %.1f  l: %.1f", item, item / 2);
	else if (n < 1) printf("Valid");
	else
	{
		for (i = 2; i <= n; i++)
		{
			item = h / pow(2, i - 2);
			s += item;
		}
		l = h / pow(2, n);
		printf("s:%.1f  l:%.1f", s, l);
	}
	return 0;
}
*/

int main()
{
	int n, i,j;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n / 2 + 1; i++)
	{
		for (j = 1; j <= (n - (2*i - 1)) / 2; j++) printf(" ");
		for (j = 1; j <= 2 * i - 1; j++) printf("*");
		printf("\n");
	}
	for (i = i; i <= n; i++)
	{
		for (j = 1; j <= (n - (-2 * i + 15)) / 2; j++) printf(" ");
		for (j = 1; j <= -2*i + 15; j++) printf("*");
		printf("\n");
	}

	return 0;
}