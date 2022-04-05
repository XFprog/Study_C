#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
#define MAXN 46
int main()
{
	int i,n, x, a[MAXN];
	printf("Enter n,x: ");
	scanf("%d%d", &n, &x);
	printf("Input some numbers: ");
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i <= n; i++)
	{
		if (a[i] == x) printf("%d ", i);
	}
}
*/

/*
#define MAXN 10
int main()
{
	int index=0,n, i, a[MAXN];
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Input %d numbers: ", n);
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n-1; i++)
	{
		if (a[index] > a[i])
		{
			index = i;
		}
	}
	printf("min:%d  index:%d", a[index], index);
	a[index] ^= a[0] ^= a[index] ^= a[0];
	printf("\na[0]: %d", a[0]);
	return 0;
}
*/

/*
#define MAXN 10
int main()
{
	int n, i,k,index,temp, a[MAXN];
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Input %d numbers: ", n);
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i <= n - 2; i++)
	{
		index = i;
		for (k = i + 1; k <= n - 1; k++)
		{
			if (a[index] > a[k])
			{
				index = k;
			}
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}
	for (i=0;i<=n-1;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/

/*
#define MAXN 8
int main()
{
	int n, i, response,a[MAXN+1];
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= MAXN; i++)
	{
		a[i] = 0;
	}
	for (i = 1; i <= n; i++)
	{
		printf("Enter your response: ");
		scanf("%d", &response);
		if (response >= 1 && response <= MAXN)
		{
			a[response]++;
		}
		else printf("Invalid:%d", response);
	}
	printf("Result:\n");
	for (i = 1; i <= MAXN; i++)
	{
		if (a[i] != 0)
		{
			printf("À¸Ä¿%d: %d\n", i,a[i]);
		}
	}

	return 0;
}
*/

/*
int main()
{
	int x,i, low, high, mid,index=0,n,flag=1;
	int a[15];
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter numbers(from low to big): ");
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n-1; i++)
	{
		if (a[index] > a[i])
		{
			flag = 0;
		}
		else index = i;
	}
	if (flag)
	{
		low = 0, high = n-1;
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (x == a[mid])
			{
				index = mid;
				printf("Found!!!\n");
				break;
			}
			else if (x < a[mid]) high = mid - 1;
			else low = mid + 1;
		}
		if (x == a[mid]) printf("index: %d", mid);
		else printf("Notfound");
	}
	else printf("The numbers error or fit the numbers origion.");
	return 0;
}
*/

/*
int main()
{
	int n, i, a[10],index=0;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ",n);
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n - 1; i++)
	{
		if (a[index] < a[i])
		{
			index = i;
		}
	}
	printf("Max:%d  index:%d", a[index], index);

	return 0;
}
*/

/*
int main()
{
	int n, i,limit,temp, a[10];
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ",n);
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	limit = (n % 2 == 0) ? (n - 2) / 2 : (n - 3) / 2;
	for (i = 0; i <= limit; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	for (i = 0; i <= n - 1; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/

/*
int main()
{
	int m, n, i,j, a[10], b[10];
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter numbers(n):");
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter numbers(m):");
	for (i = 0; i <= m - 1; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= m - 1; j++)
		{
			if (a[i] == b[j]) break;
		}
		if (j > m - 1) printf("%d ", a[i]);
	}
	for (j = m-1; j >=0; j--)
	{
		for (i = 0; i <= n - 1; i++)
		{
			if (a[i] == b[j]) break;
		}
		if (i > n - 1) printf("%d ", b[j]);
	}
	return 0;
}
*/

