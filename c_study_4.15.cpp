#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 按等级统计学生
/*
struct student
{
	char name[10];
	int num;
	int point;
	char level;
};
int main()
{
	int i,n;
	struct student stu[10];
	void set_grade(struct student *sp,int n);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d student's info: name\\num\\point\n",n);
	for (i = 0; i < n; i++)
	{
		printf("No.%d: ", i+1);
		scanf("%s %d %d", stu[i].name, &stu[i].num, &stu[i].point);
	}
	set_grade(stu, n);
	printf("name\tlevel\n");
	for (i = 0; i < n; i++)
	{
		printf("%s\t%c\n", stu[i].name, (&stu[i])->level);
	}
	return 0;
}
void set_grade(struct student* sp, int n)
{
	int i;
	for (i = 0; i < n; i++,sp++)
	{
		if (sp->point >= 85) sp->level = 'A';
		if (sp->point >= 70 && sp->point < 85) sp->level = 'B';
		if (sp->point >= 60 && sp->point < 70) sp->level = 'C';
		if (sp->point < 60) sp->level = 'D';
	}
}
*/
#pragma endregion

#pragma region 有序表的增删查操作
/*
#define MAXN 100
int count;
void seclet(int a[], int option, int value);
void input_array(int a[]);
void print_array(int a[]);
void insert(int a[],int value);
void remove(int a[],int value);
void query(int a[], int value);
int main()
{
	int option,value, a[MAXN];
	input_array(a);
	printf("[1]Insert\n");
	printf("[2]Remove\n");
	printf("[3]Query\n");
	printf("[other option]end\n");
	while (1)
	{
		printf("Enter option: ");
		scanf("%d", &option);
		if (option < 1 || option>3) break;
		printf("Enter a value: ");
		scanf("%d", &value);
		seclet(a,option,value);
		printf("\n");
	}
	printf("Thanks");
	return 0;
}
void input_array(int a[])
{
	int i, n;
	printf("Enter count: ");
	scanf("%d", &count);
	printf("Enter %d numbers: ", count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &a[i]);
	}
}
void seclet(int a[],int option,int value)
{
	switch (option)
	{
	case 1:insert(a, value); break;
	case 2:remove(a, value); break;
	case 3:query(a, value); break;
	}
}
void print_array(int a[])
{
	int i;
	printf("the ordered array: \n");
	for (i = 0; i < count; i++)
	{
		printf("%d ", a[i]);
	}
}
void insert(int a[], int value)
{
	int i,j;
	for (i = 0; i < count; i++)
	{
		if (value < a[i]) break;
	}
	for (j = count-1; j >=i; j--)
	{
		a[j + 1] = a[j];
	}
	a[i] = value;
	count++;
	print_array(a);
}
void remove(int a[],int value)
{
	int i, j,index=-1;
	for (i = 0; i < count; i++)
	{
		if (a[i] == value)
		{
			index = i;
			break;
		}
	}
	if (index == -1) printf("Not have this number!");
	else
		for (j = i + 1; j < count; j++)
		{
			a[j - 1] = a[j];
		}
	count--;
	print_array(a);
}
void query(int a[], int value)
{
	int i,mid, left = 0, right = count - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] == value)
		{
			printf("this number index is %d", mid);
			return;
		}
		else if (value < a[mid]) right = mid - 1;
		else left = mid + 1;
	}
	printf("Not found!");
}
*/
#pragma endregion

#pragma region 求阶乘(递归)
/*
int main()
{
	int n;
	int fact(int n);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("%d! = %d", n, fact(n));
}
int fact(int n)
{
	if (n == 1 || n == 0)//递归出口
	{
		return 1;
	}
	else//递归式子
	{
		return n * fact(n - 1);
	}
}
*/
#pragma endregion

#pragma region 求最大公约数(递归)
/*
int gcd(int m, int n)
{
	if (m % n == 0)
	{
		return n;
	}
	else
	{
		return gcd(n, m % n);
	}
}
int main()
{
	int m,n;
	printf("Enter m,n:");
	scanf("%d%d",&m, &n);
	printf("%d and %d 's biggest public division: %d",m,n,gcd(m,n));
	return 0;
}
*/
#pragma endregion

#pragma region 逆序输出(递归)
/*
void reverse(int num);
int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	reverse(num);
	return 0;
}
void reverse(int num)
{
	if (num < 10) printf("%d", num);
	else
	{
		printf("%d", num % 10);
		reverse(num / 10);
	}
}
*/
#pragma endregion

#pragma region 汉诺塔(递归)
/*
void hanoi(int n, char a, char b, char c)
{
	if (n == 1) printf("%c--->%c\n", a, b);
	else
	{
		hanoi(n - 1, a, c, b);
		printf("%c--->%c\n", a, b);
		hanoi(n - 1, c, b, a);
	}
}
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');

	return 0;
}
*/
#pragma endregion

#pragma region 金块问题(分治递归)
/*
int main()
{
	int i,count,n, m, a[80];
	int max(int a[], int m, int n);
	int min(int a[], int m, int n);
	printf("Enter number of gold: ");
	scanf("%d", &count);
	printf("Enter %d number: ",count);
	for (i = 0; i < count; i++) scanf("%d", &a[i]);
	printf("Enter m,n to find the max and min gold: ");
	scanf("%d%d", &m, &n);
	printf("max: %d, min: %d", max(a, m, n), min(a, m, n));

	return 0;
}
int max(int a[], int m, int n)
{
	int u, v, mid;
	if (m == n) return a[m];
	else
	{
		mid = (m + n) / 2;
		u = max(a, m, mid);
		v = max(a, mid + 1, n);
		return (u > v) ? u : v;
	}
}
int min(int a[], int m, int n)
{
	int u, v, mid;
	if (m == n) return a[m];
	else
	{
		mid = (m + n) / 2;
		u = min(a, m, mid);
		v = min(a, mid + 1, n);
		return (u < v) ? u : v;
	}
}
*/
#pragma endregion

#pragma region 计算1加到n(递归)
int sum(int n);
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d", &n);
	printf("1+..+%d = %d", n, sum(n));

	return 0;
}
int sum(int n)
{
	if (n == 1) return 1;
	else return sum(n - 1) + n;
}
#pragma endregion
