#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region �ַ�������,����,�Ƚ�,���Ⱥ���
/*
int main()
{
	//�ַ�������
	char str1[10], str2[10], from[10] = "hello";
	strcpy(str1, from);
	strcpy(str2, "world");
	printf("%s ", str1);
	puts(str2);

	//�ַ�������
	char s1[20] = "welcome ", s2[20], s3[20] = "katter";
	strcat(s1, s3);
	strcpy(s2, s1);
	strcat(s1, "!");
	printf("%s\n", s2);
	puts(s1);

	//�ַ����Ƚ�
	char ss1[20] = "zzz", ss2[20]="zz", ss3[20]="zzz";
	if (strcmp(ss1, ss3)==0)
	{
		strcat(ss1, ss2);
		puts(ss1);
	}
	putchar('\n');
	if (strcmp(ss1, ss2) > 0) printf("%s", ss2);

	//�ַ�������
	char s1[20] = "hello";
	char s2[20] = "hh aa hh ";
	printf("%d", strlen(s1));
	printf("%d", strlen(s2));
	return 0;
}*/
#pragma endregion

#pragma region ����С���ַ���
/*
int main()
{
	int i, n;
	char str[40],minstr[40];
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter %d string: ",n);
	scanf("%s", str);
	strcpy(minstr, str);
	for (i = 1; i < n; i++)
	{
		scanf("%s", str);
		if (strcmp(str,minstr)<0)
		{
			strcpy(minstr, str);
		}
	}
	printf("min string: %s", minstr);

	return 0;
}
*/
#pragma endregion

/*
int main()
{
	char a[10];
	scanf("%s", a);
	puts(a);

	return 0;
}
*/

#pragma region ǰ3���ַ������
/*
int main()
{
	int i;
	char pres[20], tars[20], moves[20];
	printf("Enter a string: ");
	scanf("%s", pres);
	for (i = 0; i < 3; i++)
		moves[i] = pres[i];
	moves[i] = '\0';
	for (i = 3; pres[i]!= '\0'; i++)
		tars[i - 3] = pres[i];
	tars[i - 3] = '\0';
	strcat(tars, moves);
	puts(tars);

	return 0;
}
*/
#pragma endregion

#pragma region ��n��������(��̬�ڴ�ռ�)
/*
int main()
{
	int i, n, sum, * p;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ", n);
	if ((p = (int*)calloc(n, sizeof(int))) == NULL)
	{
		printf("not able to allocate memory\n");
		exit(1);//�ر���
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", p + i);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += *(p + i);
	}
	printf("sum: %d", sum);
	free(p)
	return 0;
}
*/
#pragma endregion

/*
int main()
{
	int i,n,* p;
	printf("Enter how big memory space(byte) you need: ");
	scanf("%d", &n);
	if ((p=(int*)malloc(n*sizeof(char))) == NULL)
	{
		printf("not able to allocate memory");
		exit(1);
	}
	printf("then output every memory's number: ");
	for (i = 0; i < n; i++) *(p + i) = i+1,printf("%3d",*(p+i));
	
	//���·����ڴ�ռ�
	printf("\nthen will reallocate the memory space,enter haw big you need: ");
	scanf("%d", &n);
	if ((realloc(p,n*sizeof(char))) == NULL)
	{
		printf("not able to reallocate memory space");
		exit(1);
	}
	printf("\nthen will output the new space: ");
	for (i = 0; i < n; i++)
	{
		*(p + i) = i+1;
		printf("%3d", *(p + i));
	}
	free(p);
	return 0;
}
*/

#pragma region ð������(��̬�ڴ����)
/*
int main()
{
	int i, j, n, *p;
	void swap(int* op1, int* op2);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ",n);
	if ((p = (int*)calloc(n,sizeof(int))) == NULL)//Ϊp���䶯̬�ڴ�ռ�
	{
		printf("not able to allocate memory");
		exit(1);
	}
	for (i = 0; i < n; i++)//��ȡ��������
	{
		scanf("%d", p + i);
	}
	for (i = 0; i < n; i++)//ð������
	{
		for (j = 1; j < n-i; j++)
		{
			if (*(p+j-1) > *(p + j))
			{
				swap(p + j - 1, p + j);
			}
		}
	}
	for (i = 0; i < n; i++) printf("%3d", *(p + i));//������������
	free(p);
	return 0;
}
void swap(int* op1, int* op2)
{
	int t;
	t = *op1;
	*op1 = *op2;
	*op2 = t;
}
*/
#pragma endregion

