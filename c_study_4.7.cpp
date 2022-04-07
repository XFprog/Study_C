#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main()
{
	int i, j,n,m;
	int a[6][6];
	printf("Enter n,m: ");
	scanf("%d%d", &n, &m);
	printf("Enter %d numbers: ", n * n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	m %= n;
	for (i = 0; i < n; i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ", a[i][(n - m + j) % n]);
		}
		putchar('\n');
	}

	return 0;
}
*/

/*
int main()
{
	int i,k;
	char a[80];
	printf("Enter a string: ");
	k = 0;
	while ((a[k] = getchar()) != '\n') k++;
	a[k] = '\0';
	i = 0;
	k -= 1;
	while (i<k) 
	{
		if (a[i] != a[k]) break;
		i++, k--;
	}
	if (i >= k) printf("It is a palindrome");
	else printf("It is not a palindrome");


	return 0;
}
*/

/*
int main()
{
	char str[80];
	char t[5] = { 'h','a','p','p','y' };
	static char s[6] = { 'h','a','p','p','y' };
	static char q[6] = { 'h','a','p','p','y',0 };
	static char w[6] = { 'h','a','p','p','y','\0' };
	static char e[6] = { "happy" };
	static char r[6] = "happy";
	static char u[] = "happy";
}
*/

/*
int main()
{
	static char s[80];
	s[0] = 'a';
	s[1] = '\0';
	static char d[80] = "a";

	return 0;
}
*/

/*
int main()
{
	char s[5] = "a";
	putchar(s[0]);
	putchar(s[1]);

	return 0;
}
*/

#pragma region 凯撒密码(加密解密)
/*
#define M 26
int main()
{
	char a[80];
	int i,offest,left_flag=0,key,process;

	printf("Enter a string: ");
	i = 0;
	while ((a[i] = getchar()) != '\n') i++;
	a[i] = '\0';

	printf("Enter offest: ");
	scanf("%d", &offest);

	offest %= M;
	if (offest < 0)
	{
		offest = fabs(offest);
		left_flag = 1;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			if (left_flag == 1)
			{
				if (a[i] - 'A' - offest >= 0) a[i] = a[i] - offest;
				else a[i] = a[i] + (M - offest);
			}
			else
			{
				if (a[i] - 'A' + offest < M) a[i] = a[i] + offest;
				else a[i] = a[i] - (M - offest);
			}
		}
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (left_flag == 1)
			{
				if (a[i] - 'a' - offest >= 0) a[i] = a[i] - offest;
				else a[i] = a[i] + (M - offest);
			}
			else
			{
				if (a[i] - 'a' + offest < M) a[i] = a[i] + offest;
				else a[i] = a[i] - (M - offest);
			}
		}
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	printf("\n");
	printf("开始解密，请输入解密秘钥: ");
	scanf("%d", &key);
	while (1)
	{
		key %= M;
		if (key < 0)
		{
			key = fabs(key);
			left_flag = 1;
		}
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] >= 'A' && a[i] <= 'Z')
			{
				if (left_flag == 1)
				{
					if (a[i] - 'A' - key >= 0) a[i] = a[i] - key;
					else a[i] = a[i] + (M - key);
				}
				else
				{
					if (a[i] - 'A' + key < M) a[i] = a[i] + key;
					else a[i] = a[i] - (M - key);
				}
			}
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				if (left_flag == 1)
				{
					if (a[i] - 'a' - key >= 0) a[i] = a[i] - key;
					else a[i] = a[i] + (M - key);
				}
				else
				{
					if (a[i] - 'a' + key < M) a[i] = a[i] + key;
					else a[i] = a[i] - (M - key);
				}
			}
		}
		printf("解密结果: ");
		for (i = 0; a[i] != '\0'; i++)
		{
			putchar(a[i]);
		}
		printf("\nEnter 1(continue),0(exit): ");
		scanf("%d", &process);
		printf("开始解密，请输入解密秘钥: ");
		scanf("%d", &key);
		if (process == 1);
		else break;
	}
	return 0;
}
*/
#pragma endregion

#pragma region 字符转换
/*
#define MAXLINE 20
int main()
{
	int i, number, str[MAXLINE];
	printf("Enter a string: ");
	i = 0;
	while ((str[i] = getchar()) != '\n') i++;
	str[i] = '\0';
	number = 0;
	for (i = 0; str[i]!='\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + str[i] - '0';
		}
	}
	printf("digit: %d", number);

	return 0;
}
*/
#pragma endregion

#pragma region 16进制字符转10进制
/*
#define MAXN 80
int main()
{
	int i,k,number=0;
	char a[MAXN],b[MAXN];
	printf("Enter a string: ");
	i = 0;
	while ((a[i] = getchar()) != '\n') i++;
	a[i] = '#';
	i = 0, k = 0;
	while (a[i] != '#')
	{
		if (a[i] >= '0' && a[i] <= '9'||a[i]>='A'&&a[i]<='F'||a[i]>='a'&&a[i]<='f')
		{
			b[k] = a[i];
			k++;
		}
		i++;
	}
	b[k] = '#';
	for (k = 0; b[k] != '#'; k++) putchar(b[k]);
	for (k = 0; b[k] != '#'; k++)
	{
		if (b[k] >= '0' && b[k] <= '9') number = number * 16 + b[k] - '0';
		else if (b[k] >= 'a' && b[k] <= 'f') number = number * 16 + b[k] - 'a' + 10;
		else if (b[k] >= 'A' && b[k] <= 'F')number = number * 16 + b[k] - 'A' + 10;
	}
	printf("\nnumber = %d", number);

	return 0;
}
*/
#pragma endregion

/*
int main()
{
	int a=2;

	if (a > 1)
	{
		if (a > 2)
		{
			printf("hehe");
		}
		else
		{
			printf("heihei");
		}
	}
	else
	{
		printf("ohoh");
	}

	return 0;
}
*/
