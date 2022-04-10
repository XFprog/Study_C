#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

#pragma region 指针算术运算
/*
int main()
{
	double a[3];
	double* dp1, * dp2;
	dp1 = &a[0];
	dp2 = &a[2];
	printf("dp2 - dp1 = %d\n", dp2 - dp1);
	printf("(int)dp2 - (int)dp1 = %d", (int)dp2 - (int)dp1);

	return 0;
}
*/
#pragma endregion

/*
int main()
{
	int a[3] = { 1,2,3 };
	int test(int *a, int n);
	printf("sum = %d",test(a,3));

	return 0;
}
int test(int *a, int n)
{
	int sum=0,*sa;
	sa = a;
	for (; a < sa+n ; a++)
	{
		sum += *a;
	}
	return sum;
}
*/

#pragma region 冒泡排序(改进)
/*
void bubble(int a[], int n);
void swap(int* op1, int* op2);
int main()
{
	int a[10], n, i, j;
	printf("Enter n(n<=10): ");
	scanf("%d", &n);
	printf("Enter %d numbers: ", n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);//输入存入数组
	bubble(a, n);
	printf("After sorted: ");
	for (i = 0; i < n; i++) printf("%3d", a[i]);

	return 0;
}
void bubble(int a[], int n)
{
	int i, j, flag=0;
	for (i = 1; i < n; i++)
	{
		flag = 0;
		for (j = 0; j < n-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			printf("第%d轮排列本就是升序,无需再排\n", i);
			break;
		}
	}
}
void swap(int *op1,int *op2)
{
	int temp;
	temp = *op1;
	*op1 = *op2;
	*op2 = temp;
}
*/
#pragma endregion

#pragma region 选择排序
/*
void choSort(int a[], int n);
void swap(int* op1, int* op2);
int main()
{
	int i, n, a[10];
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ",n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	choSort(a, n);
	printf("After sorted: ");
	for (i = 0; i < n; i++) printf("%3d", a[i]);
	return 0;
}
void choSort(int a[], int n)
{
	int i, j, index;
	for (i = 0; i < n; i++)
	{
		index = i;
		for (j = i + 1; j< n; j++)
		{
			if (a[index] > a[j])
			{
				index = j;
			}
		}
		swap(&a[i], &a[index]);
	}
}
void swap(int *op1,int *op2)
{
	int t;
	t = *op1;
	*op1 = *op2;
	*op2 = t;
}
*/
#pragma endregion

#pragma region 字符串压缩
/*
#define MAXN 80
void zip(char* line); void get(char* line); void put(char* line);
int main()
{
	char line[MAXN];
	printf("Enter a string: ");
	get(line);
	zip(line);
	put(line);
}
void get(char* line)
{
	int i;
	while ((*line++ = getchar()) != '\n');
	*line = '\0';
}
void zip(char* line)
{
	char* cline = line;
	int i, n;
	while (*line != '\0')
	{
		n = 1;
		while (*cline == *(cline + n)) n++;
		if (n >= 10) *cline++ = (n / 10) + '0', * cline++ = (n % 10) + '0';
		else if (n >= 2) *cline++ = n + '0';
		*cline++ = *(line + n - 1);
		line += n;
	}
	*cline = '\0';
}
void put(char* line)
{
	while (*line!='\0') putchar(*line++);
}
*/
#pragma endregion

/*
int main()
{
	int i;
	char a[10] = { 'a','b','c','\0','d','e','f','\0','g',0 };
	for (i = 1; i < 10; i++)
		putchar(a[i]);

	return 0;
}
*/

/*
int main()
{
	char sa[] = "Hello";
	const char* sp = "point";

	printf("%s\n", sa+2);
	printf("%s\n", sp+3);
	printf("%s", "string");
	return 0;
}
*/

/*
int main()
{
	char* s,str[20];
	s = str;
	printf("%p", s);
	scanf("%s", *s);
	printf("%p", s);

	return 0;
}
*/

int main()
{
	char ch[10];
	gets_s(ch);//数组名
	puts(ch);//数组名或字符串

	return 0;
}