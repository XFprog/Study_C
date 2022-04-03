#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main()
{
	int a=1;
	char b='a';
	double c;

	c = a + b;
	printf("%lf", c);

	return 0;
}
*/

/*
int main()
{
	int b;
	int a = 1;
	b = a++ + a;
	printf("第一种b = %d\n\n", b);

	a = 1;
	b = a + a++;
	printf("第二种b = %d\n\n", b);

	a = 1;
	b = (a++) + a;
	printf("第三种b = %d\n\n", b);

	a = 1;
	b = a + (a++);
	printf("第四种b = %d\n\n", b);
	return 0;
}
*/

/*
int main()
{
	int a = 1;
	float b = 1.0;
	if (a == b) printf("equal");

	return 0;
}
*/

/*
int main()
{
	int a,b,c;
	char d;
	d = (a = 32, b = 33, c = a + b);
	printf("%c", d);


	return 0;
}
*/

/*
int main()
{
	int a = 18, b = 23,c=3;
	a ^= b ^= a ^= b;
	c = ~c;
	printf("a=%d  b=%d  c=%d", a, b,c);

	return 0;
}
*/

/*
int main()
{
	int a = 1,b = 64;
	printf("%d %d %d %d", a, a << 1, a << 2, a << 3);
	printf("%d %d %d %d", b, b >> 1, b >> 2, b >> 3);

	return 0;
}
*/

/*
int main()
{
	char ch;
	int count=0;
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n')
	{
		if (ch == ' ') count++;
	}
	count++;
	printf("the sentence have %d words", count);

	return 0;
}
*/

/*
int main()
{
	int a = 1;
	printf("%d   %d", sizeof(a), sizeof(int));

	return 0;
}
*/

/*
int main()
{
	char ch;
	int word_count = 0, digit_count = 0, blank_count = 0, other_count=0;
	printf("Enter a serices of characters: ");
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') word_count++;
		else if (ch >= '0' && ch <= '9') digit_count++;
		else if (ch == ' ') blank_count++;
		else other_count++;
	}
	printf("\nword_count:%d\ndigit_count:%d\nblank_count:%d\nother_count:%d\n", word_count, digit_count, blank_count, other_count);
	return 0;
}
*/

/*
int main()
{
	int a, n,i,sum=0;
	int output(int a, int n);

	printf("Enter a,n: ");
	scanf("%d%d", &a, &n);
	for (i = 1; i <= n; i++)
	{
		sum += output(a, i);
	}
	printf("%d+....+%d%d%d(%d个) = %d", a,a,a,a,n ,sum);
	return 0;
}
int output(int a, int n)
{
	int result=0,j;
	for (j = 1; j <= n; j++)
	{
		result += a;
		a *= 10;
	}

	return result;
}
*/

