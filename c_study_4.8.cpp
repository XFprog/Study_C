#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#pragma region �ַ�����
/*
#define MAXN 80
int main()
{
	int i;
	char ch;
	char str[MAXN];
	printf("Enter a character: ");
	scanf("%c", &ch);
	getchar();
	printf("Enter a string: ");
	i = 0;
	while ((str[i] = getchar()) != '\n') i++;
	str[i] = '\0';
	for (i = i - 1; i >= 0; i--)
	{
		if (str[i] == ch)
		{
			printf("str[%d] = %c", i, ch);
			break;
		}
	}
	if (i < 0) printf("Not found!");
	return 0;
}
*/
#pragma endregion

#pragma region �ַ�������
/*
#define MAXN 80
int main()
{
	int i=0,k,temp;
	char str[MAXN];
	printf("Enter a string: ");
	while ((str[i] = getchar()) != '\n') i++;
	str[i] = '\0';
	k = i - 1;
	for (i = 0; i <k; i++,k--)
	{
		temp = str[i];
		str[i] = str[k];
		str[k] = temp;
	}
	for ( i = 0; str[i] != '\0';i++) putchar(str[i]);

	return 0;
}
*/
#pragma endregion

#pragma region ѡ������
/*
int main()
{
	int i, k=0, n,temp,index;
	int a[10];
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ", n);
	for (i = 0; i <= n - 1; i++) scanf("%d", &a[i]);//�洢�����һ������
	for (i = 0; i < n - 1; i++)//����ÿ������
	{
		index = i;//�ȼ���������±�Ϊ0
		for (k = i + 1; k <= n - 1; k++)//ÿ�δӱ��������ֵĺ���һ�����ֿ�ʼ��һ��������ֵ�Ƚ�
		{
			if (a[k] > a[index]) index = k;//���������ȼ�������¼���������±�
		}
		temp = a[index];//������������������������С
		a[index] = a[i];
		a[i] = temp;
	}
	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
	}

	return 0;
}
*/
#pragma endregion

#pragma region ���һ�������г�����������
//����һ(�Լ�д�ķ����㷨)
/*
#define MAXrow 10
#define MAXcol 2
int main()
{
	int i, j, k,n,curNum,curDigit,rowFlag=0,rowCount=0,index;
	int a[10];
	int b[MAXrow][MAXcol];
	for (i = 0; i < MAXrow; i++)//b�����ʼ��
	{
		for (j = 0; j < MAXcol; j++)
		{
			if (j == 0) b[i][j] = -1;
			else b[i][j] = 0;
		}
	}
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ",n);
	for (i = 0; i <= n - 1; i++) scanf("%d", &a[i]);//����n������
	for (i = 0; i <= n - 1; i++)//����ÿ��������ÿ����λ����������b��¼����ֵĴ���
	{
		curNum = a[i];
		while (curNum != 0)
		{
			curDigit = curNum % 10;
			curNum /= 10;
			rowFlag = 0;
			for (j = 0; j < 10; j++)
			{
				if (curDigit != b[j][0])
				{
					rowFlag++;
				}
				else
				{
					b[j][1] += 1;
					break;
				}
				if (rowFlag == 10)
				{
					b[rowCount][0] = curDigit;
					b[rowCount][1] += 1;
					rowCount++;
				}
			}
		}
	}
	for (i = 1,index=0; i < MAXrow; i++)//������������г���������λ�������
	{
		if (b[index][1] < b[i][1])
		{
			index = i;
		}
	}
	printf("digit(max) %d: %d", b[index][0], b[index][1]);
	
	//i = 0;
	//while (b[i][0] >= 0&&i<MAXrow)//�������������ÿ����λ���ֵĴ���
	//{
	//	printf("digit %d: %d\n", b[i][0], b[i][1]);
	//	i++;
	//}
	

	return 0;
}
*/
//������(����csdn����㷨)
/*
int main()
{
	int i, j, n, x, max, nums, index=0, a[10] = {0};
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ",n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums);
		while (nums > 0)
		{
			x = nums % 10;
			a[x]++;
			nums /= 10;
		}
	}
	max = a[0];
	for (i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			index = i;
		}
	}
	printf("digit(max) %d: %d", index, max);
	return 0;
}
*/
#pragma endregion

#pragma region �ж������Ǿ���
/*
int main()
{
	int i, j, n, count=0, a[6][6];
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ", n * n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
			if (i > j && a[i][j] == 0) count++;
		}
	}
	if (n * (n - 1) / 2 == count) printf("YES");
	else printf("NO");
}
*/
#pragma endregion
