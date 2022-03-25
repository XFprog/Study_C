#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main()
{
	int i,n;
	printf("[1]crisps\n");
	printf("[2]popcorn\n");
	printf("[3]chocolate\n");
	printf("[4]cola\n");
	printf("[0]exit\n");
	for (i = 1; i <= 5; i++)
	{
		printf("select your choice: ");
		scanf("%d", &n);
		if (n == 0) break;
		switch (n)
		{
		case 1:printf("price: 3.0\n"); break;
		case 2:printf("price: 2.5\n"); break;
		case 3:printf("price: 4.0\n"); break;
		case 4:printf("price: 3.5\n"); break;
		default: printf("price: 0\n"); break;
		}
	}

	return 0;
}
*/

/*
int main()
{
	int i,value1, value2;
	char op;

	printf("Type a expression: ");
	scanf("%d%c%d", &value1, &op, &value2);
	switch (op)
	{
	case '+': printf("%d\n", value1 + value2); break;
	case '-': printf("%d\n", value1 - value2); break;
	case '*': printf("%d\n", value1 * value2); break;
	case '/':
		if (value2 != 0) printf("%.2f\n", (float)value1 / (float)value2);
		else printf("division can not be 0!\n"); break;
	case '%':
		if (value2 != 0) printf("%d\n", value1 % value2);
		else printf("division can not be 0!\n"); break;
	default: printf("Unknow oprator!"); break;
	}


	return 0;
}
*/

/*
int main()
{
	int a;
	char ch;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:printf("ohoh\n"); break;
	default: printf("nono!\n");
	}

	return 0;
}
*/

/*
int main()
{
	int n,i,char_count=0,number_count=0,other_count=0;
	char ch;
	printf("Enter n: ");
	scanf("%d", &n);
	getchar();
	for (i = 1; i <= n; i++)
	{
		ch = getchar();
		switch (ch)
		{
		case ' ':case '\n':char_count++; break;
		case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':number_count++; break;
		default: other_count++; break;
		}
	}
	printf("char_count: %d\n", char_count);
	printf("number_count: %d\n", number_count);
	printf("other_count: %d\n", other_count);

	return 0;
}
*/

/*
int main()
{
	int a = 1,b = 2;
	if (a == 1)
		if (b == 1)
			printf("heihei");
	else printf("hh");

	return 0;
}
*/

/*
int main()
{
	int point;
	scanf("%d", &point);
	if (point >= 90 && point <= 100) printf("A");
	else if (point >= 80 && point < 90) printf("B");
	else if (point >= 70 && point < 80) printf("C");
	else if (point >= 60 && point < 70) printf("D");
	else printf("E");

	return 0;
}
*/

/*
int main()
{
	int choice,i;
	double price;
	printf("[1] apples\n");
	printf("[2] pears\n");
	printf("[3] oranges\n");
	printf("[4] grapes\n");
	printf("[0] exit\n");
	for (i = 1; i <= 5; i++)
	{
		printf("Choose your fruit Id: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: price = 3; break;
		case 2: price = 2.5; break;
		case 3: price = 4.1; break;
		case 4: price = 10.5; break;
		case 0: printf("successed in exiting\n"); break;
		default: price = 0; break;
		}
		if (choice == 0) break;
		printf("price is %.2f\n", price);
	}
	printf("Thanks for check!");

	return 0;
}
*/

/*
int main()
{
	int n;
	printf("Enter your consumetion of water: ");
	scanf("%d", &n);
	if (n < 0) printf("Invalid value!");
	if (n >= 0)
	{
		if (n < 15) printf("sum: %.1f", 4 * n / 3.0);
		else printf("sum: %.1f", 2.5 * n - 10.5);
	}

	return 0;
}
*/

