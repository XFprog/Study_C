#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region ���ʵ��
/*
int main()
{
	int i, intpart;float n, fracpart;
	void splitfloat(float, int*, float*);
	printf("Enter n: ");
	scanf("%f", &n);
	splitfloat(n, &intpart, &fracpart);
	printf("origanate number: %.2f  intpart: %d  fracpart: %.2f", n, intpart, fracpart);
	return 0;
}
void splitfloat(float n, int* intpart, float* fracpart)
{
	*intpart = (int)n;
	*fracpart = n - (int)n;
}
*/
#pragma endregion

#pragma region �������в���ָ��Ԫ��
/*
int main()
{
	int i, n, x, id, list[10];
	int search(int list[], int, int);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter % d numbers : ", n);
	for (i = 0; i < n; i++) scanf("%d", &list[i]);
	printf("Enter a number x: ");
	scanf("%d", &x);
	id = search(list, n, x);
	if (id > 0)
		printf("when they are the same,the id is %d", id+1);
	else printf("No the same number");
	return 0;
}
int search(int list[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (list[i] == x)
		{
			return i;
		}
	}
}
*/
#pragma endregion

#pragma region ѭ������
/*
int main()
{
	int i, n, m, list[10];
	void backmove(int list[], int n, int m);
	printf("Enter n,m: ");
	scanf("%d%d", &n,&m);
	printf("Enter %d numbers: ",n);
	for (i = 0; i < n; i ++ ) scanf("%d", &list[i]);
	backmove(list, n, m);
	for (i = 0; i < n; i++) printf("%d ", list[i]);
	return 0;
}
void backmove(int list[], int n, int m)
{
	int i,cpylist[10];
	for (i = 0; i < n; i++)
	{
		cpylist[i] = list[i];
	}
	m %= n;
	for (i = 0; i < n; i++)
	{
		if (i < n - m)
		{
			list[i + m] = cpylist[i];
		}
		else
		{
			list[m-n+i] = cpylist[i];
		}
	}
}
*/
#pragma endregion

#pragma region ����
/*
int main()
{
	int i, j, n, m, curm=0, list[11] = {0};
	printf("Enetr n,m: ");
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) list[i] = i;//���
	for (i = 1; i <= n; i++)
	{
		curm++;//����(ÿ�μ�һ������һ����)
		if (curm == m)
		{
			curm = 0;//�ر�(����m,���¿�ʼ��)
			printf("%3d", list[i]);//����
			for (j = i; j < n; j++) list[j] = list[j+1];//���ֵ��˺������ǰ��
			n--;i--;//������һ;����i��λ��ԭ�����˳���,�����ֱ������������,��Ȼ��ԭ��i����ʼ����
		}
		if (i == n) i = 0;//����(һ�ֱ��꣬��ǰ��ʼ��)
		if (n == 0) break;//����(nΪ0ʱ˵��û���ˣ��������Ϸ)
	}
	return 0;
}
*/
#pragma endregion

#pragma region �ַ�������
/*
int main()
{
	int i,m; char t[20],s[20];
	void strmcpy(char* s, char* t, int m);
	printf("Enter a string: ");
	scanf("%s", t);
	printf("Enter m: ");
	scanf("%d", &m);
	strmcpy(s, t, m);
	puts(s);
	return 0;
}
void strmcpy(char* s, char* t,int m)
{
	int i;
	for (t = t+m-1; *t != '\0'; t++,s++)
	{
		*s = *t;
	}
	*s = '\0';
}
*/
#pragma endregion

#pragma region ɾ���ַ�
/*
int main()
{
	char str[20],* s=str,ch;
	int i;
	void delchar(char* s, char c);
	printf("Enter a string: ");
	scanf("%s", s);
	getchar();
	printf("Enter a character: ");
	scanf("%c", &ch);
	delchar(s, ch);
	for (i = 0; s[i] != '\0'; i++) putchar(s[i]);
	return 0;
}
void delchar(char* s, char c)
{
	int i;
	do
	{
		if (*s == c)
		{
			for (i = 0; *(s + i) != '\0'; i++)
			{
				*(s + i) = *(s + i + 1);
			}
			if (*s == c) s--;
		}
	} while (*s++ != '\0');
}
*/
#pragma endregion

#pragma region �ַ�������
/*
int main()
{
	char str[10][10],ss[10],*s=ss;
	int i,j,n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d strings: ", n);
	for (i = 0; i < n; i++) scanf("%s", str[i]);
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (strcmp(str[j], str[j+1]) > 0)
			{
				strcpy(s, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], s);
			}
		}
	}
	for (i = 0; i < n; i++) puts(str[i]);

	return 0;
}
*/
#pragma endregion

/*
int main()
{
	int arr[2][2];
	scanf("%d", arr[1]);
	printf("arr[1] = %d\n",*arr[1]);
	//printf("arr[1][0] = %d", arr[1][0]);
	//*arr[1] = 5;
	//printf("%d", arr[3]);
	return 0;
}
*/

#pragma region �жϻ���
/*
void main()
{
	char str[10], * sp1=str, *sp2=str;int i,cnt=0;
	gets_s(str);//��ȡ�ַ�
	for (i = 0; str[i] != '\0'; i++, cnt++);//��ȡ�ַ�����(������\0)
	sp2 = sp2 + cnt - 1;//sp2ָ��ָ�����һ���ַ�
	while (*sp1 == *sp2) sp1++, sp2--;//����ָ�����м��ַ�ƫ��
	if (sp1 >= sp2) printf("Yes");else printf("NO");
}
*/
#pragma endregion

#pragma region �ַ�ͳ��
/*
int main()
{
	char sumtab[5][2] = 
	{
		{'0','0'},
		{'0','0'},
		{'0','0'},
		{'0','0'},
		{'0','0'}
	};
	char s[20],* p=s; int i;
	gets_s(s);
	do
	{
		if (*p >= 'a' && *p <= 'z') sumtab[0][1] += 1;
		else if (*p >= 'A' && *p <= 'Z') sumtab[1][1] += 1;
		else if (*p >= '0' && *p <= '9') sumtab[2][1] += 1;
		else if (*p == ' ') sumtab[3][1] += 1;
		else sumtab[4][1] += 1;
	} while (*p++ != '\0');
	for (i = 0; i < 5; i++) printf("numbers: %c\n", sumtab[i][1]);
	return 0;
}
*/
#pragma endregion

