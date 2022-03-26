#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main()
{
	int i, a, b, c, max=0, mid=0, min=0;
	printf("Enter 3 number: ");
	while (1)
	{
		scanf("%d%d%d", &a, &b, &c);
		if (a > b && b > c)
		{
			max = a;
			mid = b;
			min = c;
		}
		else if (a > b && b < c)
		{
			max = a;
			mid = c;
			min = b;
		}
		else if (b > a && a > c)
		{
			max = b;
			mid = a;
			min = c;
		}
		else if (b > a && a < c)
		{
			max = b;
			mid = c;
			min = a;
		}
		else if (c > a && a > b)
		{
			max = c;
			mid = a;
			min = b;
		}
		else if (c > a && a < b)
		{
			max = c;
			mid = b;
			min = a;
		}
		printf("%d %d %d\n", min, mid, max);
	}
	return 0;
}
*/

/*
int main()
{
	double speed;
	printf("Enter a speed: ");
	scanf("%lf", &speed);
	if (speed > 1.1 && speed <= 1.5) printf("seize you 200 yuan!!!\n");
	else if (speed > 1.5) printf("You will never ride!!!!!!!!!!!!!!!!!!!!\n");
	else printf("Normal speed\n");
	return 0;
}
*/

/*
int main()
{
	double x, t, price=0;
	printf("Enter distance and time: ");
	scanf("%lf%lf", &x, &t);
	if (x >= 3 && x <= 10) price = 10 + 2 * (x - 3);
	else if (x > 10) price = 24 + 3 * (x - 10);
	else printf("The initial distance must bigger than or equal 3!");
	price += 2 * t / 5;
	printf("The total price: %.0f", price);
	return 0;
}
*/

/*
int main()
{
	int x1, x2, x3, y1, y2, y3;
	double a,b,c,s,area;
	while (1)
	{
		printf("Enter 3 point's position\n");
		printf("point1: ");
		scanf("%d%d", &x1, &y1);
		printf("point2: ");
		scanf("%d%d", &x2, &y2);
		printf("point3: ");
		scanf("%d%d", &x3, &y3);
		a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
		c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
		if (a + b > c)
		{
			s = a + b + c;
			area = sqrt(s / 2 * (s / 2 - a) * (s / 2 - b) * (s / 2 - c));
			printf("s: %.2f\narea: %.2f\n", s, area);
		}
		else printf("impossible!!!\n");
	}
	return 0;
}
*/

/*
int main()
{
	int i=1,flag=1;
	double ivalue=1,sum=0,exp;
	printf("Enter exp: ");
	scanf("%lf", &exp);
	while (fabs(ivalue) >= exp)
	{
		sum += flag*ivalue;
		i++;
		ivalue = 1.0/(2 * i - 1);
		flag = -flag;
	}
	sum = 4*(sum+ivalue);
	printf("sum: %.4f\ncycle times: %d",sum,i);

	return 0;
}
*/

/*
int main()
{
	int count=0,total_student=0;
	double average=0, total=0, score=0;
	while (score >= 0)
	{
		printf("Enter score: ");
		scanf("%lf", &score);
		if (score < 0)
		{
			total -= score;
			total_student--;
			count--;
		}
		total += score;
		total_student++;
		if (score < 60) count++;
	}
	average = total / total_student;
	printf("average: %.1f\ntotal_student: %d\nunPass_student: %d\n", average,total_student, count);

	return 0;
}
*/

/*
int main()
{
	int flag = 1;
	double i=0, esp, item=1, sum=0;
	printf("Enter a esp: ");
	scanf("%lf", &esp);
	while (item >= esp)
	{
		item = 1.0/(3 * i + 1);
		sum += flag * item;
		i++;
		flag = -flag;
	}
	printf("sum: %.6f", sum);

	return 0;
}
*/

/*
int main()
{
	int number,count=0;
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number < 0) number = -number;
	do
	{
		number = number / 10;
		count++;
	} while (number != 0);
	printf("the number have %d digits", count);
	return 0;
}
*/

/*
int main()
{
	int number, sto_number;
	printf("Enter a number: ");
	scanf("%d", &number);
	sto_number = number;
	do
	{
		if (sto_number < 0)
		{
			printf("Invilid value!");
			break;
		}
		printf("%d", sto_number % 10);
		sto_number = sto_number / 10;

	} while (sto_number!=0);

	return 0;
}
*/

/*
int main()
{
	int i,m;
	printf("Enter a number: ");
	scanf("%d", &m);
	if (m <= 1) printf("It is not a prime number.....");
	else if (m == 2) printf("yes,it is a prime number!");
	else
	{
		for (i = 1; i <= sqrt(m) + 1; i++)
		{
			if (m % 2 == 0)
			{
				printf("It is not a prime number!!!!!");
				break;
			}
		}
		if (i > sqrt(m) + 1) printf("Yes,it is a prime number!!!!!!!!!!");
	}

	return 0;
}
*/

/*
#include<stdlib.h>
#include<time.h>
int main()
{
	int pc_num, my_num, count = 0;
	srand(time(0));
	pc_num = rand() % 100 + 1;

	while (count <= 7)
	{
		printf("Enter your_num: ");
		scanf("%d", &my_num);

		if (my_num == pc_num)
		{
			printf("Lucky you!");
			break;
		}
		else if (my_num > pc_num) printf("too big!\n");
		else printf("too small!\n");
		count++;
	}
	return 0;
}
*/

/*
#include <stdlib.h>
#include <time.h>

int main()
{
	int pc_num, my_num,count ,times;
	srand(time(0));
	pc_num = rand() % 100 + 1;
	printf("Enter the times you want to guess!");
	scanf("%d", &times);
	for (count = 1; count <= times; count++)
	{
		printf("Enter your number: ");
		scanf("%d", &my_num);
		if (my_num < 0)
		{
			printf("Game over!");
			break;
		}
		if (my_num == pc_num)
		{
			switch (count)
			{
			case 1:printf("bingo!"); break;
			case 2:case 3:printf("Lucky!"); break;
			default:printf("Good Guess!"); break;
			}
			break;
		}
		else if (my_num > pc_num) printf("too big!\n");
		else printf("too small!\n");
	}
	if (count > times) printf("Game over!");

	return 0;
}
*/

/*
int main()
{
	int i, j, n, sum=0, item;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		item = 1;
		for (j = 1; j <= i; j++)
		{
			item *= j;
		}
		sum += item;
	}
	if (n == 0) printf("0!= 1");
	else if (n < 0) printf("Invalid value!");
	else printf("1!+...+%d! = %d", n, sum);

	return 0;
}
*/

/*
int main()
{
	int i, j, n,item;
	double sum=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		item = 1;
		for (j = 1; j <= i; j++)
		{
			item *= j;
		}
		sum += 1.0/item;
	}
	if (n == 0) printf("e = 0! = 1");
	else printf("e = 1+1/1!+...+1/%d! = %.6f", n, sum);

	return 0;
}
*/