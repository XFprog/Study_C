#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#pragma region 求矩阵各行元素之和
/*
int main()
{
	int i, j, n, m, sum;
	int a[6][6];
	printf("Enter m,n: ");
	scanf("%d%d",&m, &n);
	printf("Enter %d numbers(%drow and %dcol): ", m * n,m,n);
	for (i = 0; i <= m - 1; i++)
	{
		sum = 0;
		for (j = 0; j <= n - 1; j++)
		{
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
		printf("the sum of the aspect of %d: %d\n", i + 1, sum);
	}

	return 0;
}
*/
#pragma endregion

#pragma region 找鞍点
/*
int main()
{
	int i, j, k, n, n_found, flag, indexI,indexJ;
	int a[6][6];
	printf("Enter n: ");
	scanf("%d", &n);
	n_found = n;
	printf("Input %d numbers: ", n * n);
	for (i = 0; i < n; i++) for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
	for (i = 0; i < n; i++)
	{
		indexJ = 0;
		flag = 1;
		for (j = 1; j < n; j++)
		{
			if (a[i][indexJ] < a[i][j])
			{
				indexJ = j;
			}
			else if (a[i][indexJ] == a[i][j])
			{
				n_found--;
				flag = 0;
				break;
			}
		}
		if (flag != 0)
		{
			indexI = 0;
			for (k = 1; k < n; k++)
			{
				if (a[indexI][indexJ] > a[k][indexJ])
				{
					indexI = k;
				}
			}
			printf("An point position: (%d,%d)\n", indexI+1, indexJ+1);
		}
		if (n_found == 0) printf("Not found!");
	}

	return 0;
}
*/
#pragma endregion

#pragma region 统计大写辅音字母个数
/*
int main()
{
	int i,count=0;
	char ch[80];
	printf("Enter a string: ");
	i = 0;
	while ((ch[i] = getchar()) != '\n') i++;
	ch[i] = '\0';
	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z' && ch[i] != 'A' && ch[i] != 'E' && ch[i] != 'I' && ch[i] != 'O' && ch[i] != 'U') count++;
	}
	printf("the fuyin count: %d", count);
	return 0;
}
*/
#pragma endregion

#pragma region 字符串替换
/*
int main()
{
	int i;
	char ch[80];
	i = 0;
	while ((ch[i] = getchar()) != '\n')
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z') ch[i] += 26 - 2*(ch[i] - 'A') - 1;
		printf("%c", ch[i]);
	}
	return 0;
}
*/
#pragma endregion

#pragma region 16进制字符串转10进制数字
/*
int main()
{
	int i,k,number=0;
	char ch[80];
	char sch[80];
	i = 0;
	k = 0;
	while ((ch[i] = getchar()) != '\n')
	{
		if (ch[i] >= '0' && ch[i] <= '9' || ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z'||ch[i]=='-')
		{
			sch[k] = ch[i];
			k++;
		}
		i++;
	}
	ch[i] = '#';
	sch[k] = '#';
	for (i = 0; sch[i] != '#'; i++) putchar(sch[i]);
	for (i = 0; i != '#'; i++)
	{
		if (sch[i] >= '0' && sch[i] <= '9') number = number * 16 + ch[i] - '0';
		else if (sch[i] >= 'a' && sch[i] <= 'z') number = number * 16 + ch[i] - 'a' + 10;
		else if (sch[i] >= 'A' && sch[i] <= 'Z') number = number * 16 + ch[i] - 'A' + 10;
	}
	if (sch[0] == '-') number *= -1;
	printf("\nnumber: %d", number);
	return 0;
}
*/
#pragma endregion

#pragma region 密码开锁
/*
int main()
{
	int x = 5342;
	int *p;
	p = &x;
	printf("I can get the value by varibal name: %d\n", x);
	printf("I also can get value %d by the varibal address: %x", *p, p);

	return 0;
}
*/
#pragma endregion

/*
int main()
{
	int i;
	int *p = &i;
	float* fp = 0;
	double* dp = NULL;
	char* cp = 0;
	char* c_ptr = 0;
}
*/

/*
int main()
{
	int a, * p;
	p = &a;
	a = 1;
	printf("a=%d  *p=%d\n", a, *p);
	a++;
	printf("a=%d  *p=%d\n", a, *p);
	*p = *p + 1;
	printf("a=%d  *p=%d\n", a, *p);
	++* p;
	printf("a=%d  *p=%d\n", a, *p);
	(*p)++;
	printf("a=%d  *p=%d\n", a, *p);
	*p++;
	printf("a=%d  *p=%d\n", a, *p);


	return 0;
}
*/

#pragma region 计算月日(指针返回多值)
/*
int main()
{
	int year, yearday, month,day;
	void month_day(int year, int yearday, int* pmonth, int* pday);
	printf("Enter year,yearday: ");
	scanf("%d%d", &year, &yearday);
	month_day(year, yearday, &month, &day);
	printf("%d-%d-%d", year, month, day);
	return 0;
}
void month_day(int year, int yearday, int* pmonth, int* pday)
{
	int i,leap=0;
	int tab[2][13] = 
	{
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) leap = 1;
	for (i = 0; yearday>tab[leap][i]; i++)
	{
		yearday -= tab[leap][i];
	}
	*pmonth = i;
	*pday = yearday;
}
*/
#pragma endregion

#pragma region 求数和与差(指针返回多值)
/*
int main()
{
	int op1, op2, sum, diff;
	void sum_diff(int op1, int op2,int *psum,int *pdiff);
	printf("Enter op1,op2: ");
	scanf("%d%d", &op1, &op2);
	sum_diff(op1, op2, &sum, &diff);
	printf("Sum: %d  diff: %d", sum, diff);
	return 0;
}
void sum_diff(int op1, int op2, int* psum, int* pdiff)
{
	*psum = op1 + op2;
	*pdiff = op1 - op2;
}
*/
#pragma endregion

#pragma region 冒泡排序算法
/*
#define MAXN 10
void bubble(int a[], int n);
void swap(int* op1, int* op2);
int main()
{
	int i, j, n;
	int a[MAXN];
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter n numbers: ");
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	bubble(a, n);
	printf("After sorted: ");
	for (i = 0; i < n; i++) printf("%3d", a[i]);
}
void bubble(int a[], int n)
{
	int i, j, k;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1]) swap(&a[j], &a[j + 1]);
		}
	}
}
void swap(int* op1, int* op2)
{
	int t;
	t = *op2;
	*op2 = *op1;
	*op1 = t;
}
*/
#pragma endregion

/*
int main()
{
	int a[100], * p;
	p = a;
	printf("p=a时p: %x\n", p);
	p = &a[0];
	printf("p=&a[0]时p: %x\n", p);
	p = a + 1;
	printf("p=a+1时p: %x\n", p);
	p = &a[1];
	printf("p=&a[1]时p: %x\n", p);
	p = &a[0] + 1;
	printf("p=&a[0]+1时p: %x\n", p);
	p--;
	printf("p--时p: %x\n", p);


	return 0;
}
*/

/*
int main()
{
	int a = 1, *p;
	p = &a;
	printf("%x\n", p);
	p++;
	printf("%x", p);

	return 0;
}
*/

#pragma region 求和(数组求和/指针求和/特殊求和)
/*
int main()
{
	int i, sum, *p, a[10] = {1,2,3,4,5,6,7,8,9,10};

	sum = 0;
	for (i = 0; i < 10; i++) sum += a[i];
	printf("sum by array: %d\n", sum);

	sum = 0;
	for (p = a; p < a+10; p++) sum += *p;
	printf("sum by pointer: %d\n", sum);

	sum = 0;
	for (p = a,i=0; i < 10;i++) sum += p[i];
	printf("sum by especial method: %d", sum);

	return 0;
}
*/
#pragma endregion
