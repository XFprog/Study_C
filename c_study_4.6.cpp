#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
#define MAXM 6
#define MAXN 6
int main()
{
	int i, j, m, n, row=0, col=0, a[MAXM][MAXN];
	printf("Enter m,n: ");
	scanf("%d%d", &m, &n);
	printf("Enter m*n: ",m*n);
	for (i = 0; i <= m - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i <= m - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			if (a[row][col] < a[i][j])
			{
				row = i;
				col = j;
			}
		}
	}
	printf("max: %d", a[row][col]);
	return 0;
}
*/

/*
int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[3][3] = { 1,2,3,4,5,6,7,8,9};
	int c[][3] = { {1,2,3},{1,2,3},{4,5,6} };
	static int d[4][3] = { {1,2,3,},{},{5,6,7} };
	static int e[4][3] = { 1,2,3,0,0,0,5,6,7 };
}
*/

/*
#define MAXM 6
#define MAXN 6
int main()
{
	int i, j, n,temp;
	int a[MAXM][MAXN];

	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			a[i][j] = i * n + j + 1;
		}
	}
	for (i = 0; i <= n - 1; i++)
	{
		for (j = i; j <= n - 1; j++)
		{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d", a[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
*/

/*
int main()
{
	int year, month, day;
	int year_month_day(int year, int month, int day);

	printf("Enter year,month,day: ");
	scanf("%d%d%d", &year, &month, &day);
	printf("the days of date is: %d", year_month_day(year, month, day));

	return 0;
}
int year_month_day(int year, int month, int day)
{
	int sum, i,leap;
	int tab[2][13] = {
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	for (i = 1; i < month; i++)
	{
		day += tab[leap][i];
	}
	return day;
}
*/

#define MAX 10
int main()
{
	int i, j, n, m, moveIndex,limit, a[MAX][MAX];
	int b[MAX][MAX];

	printf("Enter n squre: ");
	scanf("%d", &n);
	n++;
	printf("Enter move distance: ");
	scanf("%d", &m);
	printf("Enter %d numbers: ", (n-1) * (n-1));
	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	limit = n - 1;
	for (i = 1; i <= limit; i++)
	{
		for (j = 1; j <= limit; j++)
		{
			if (j + m <= limit)
			{
				moveIndex = j + m;
				b[i][moveIndex] = a[i][j];
			}
			else if(j==limit)
			{
				moveIndex =m%limit==0?limit:m%limit;
				b[i][moveIndex] = a[i][j];
			}
			else if (j + m> limit)
			{
				moveIndex = (m-(limit-j))%limit==0?limit: (m - (limit - j)) % limit;
				b[i][moveIndex] = a[i][j];
			}
		}
	}
	for (i = 1; i <= limit; i++)
	{
		for (j = 1; j <= limit; j++)
		{
			printf("%4d", b[i][j]);
		}
		putchar('\n');
	}

	return 0;
}