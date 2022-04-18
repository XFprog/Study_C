#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>
#include<time.h>

#pragma region 字符串大小排序(指针数组,冒泡排序)
/*
int main()
{
	const char* ccolor[5] = {"yellow", "green", "black", "white", "gold"};
	int i, j;
	void csort(const char* cclor[], int n);
	csort(ccolor, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%s\t", ccolor[i]);
	}

	return 0;
}
void csort(const char* ccolor[], int n)
{
	int i, j;
	const char* temp;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (strcmp(ccolor[j],ccolor[j + 1])>0)
			{
				temp = ccolor[j];
				ccolor[j] = ccolor[j+1];
				ccolor[j + 1] = temp;
			}
		}
	}
}
*/
#pragma endregion

#pragma region 解密英文藏头诗(指针数组，动态内存分配)
/*
int main()
{
	int i, n=0;
	char* poem[20], str[80], mean[20];
	printf("Enter your poems: ");
	gets_s(str);
	while (str[0] != '#')
	{
		poem[n] = (char*)malloc(sizeof(char) * (strlen(str) + 1));//根据数组元素长度分配动态内存空间
		strcpy(poem[n], str);
		n++;
		gets_s(str);
	}
	for (i = 0; i < n; i++)
	{
		mean[i] = *poem[i];
		free(poem[i]);
	}
	mean[i] = '\0';
	puts(mean);

	return 0;
}
*/
#pragma endregion

#pragma region 发牌(指针综合应用)
/*
struct card 
{
	int suit;
	int face;
};
int main()
{
	int i,j;
	void deal(struct card *wdeck);
	struct card deck[52];
	const char* suit[4] = { "heart","diamond","cube", "spade"};
	const char* face[13] = { "A","K","Q","J","10","9","8","7","6","5","4","3","2" };
	deal(deck);
	for (i = 0; i < 52; i++)
	{
		if (i % 13 == 0)
		{
			printf("\nplayer %d:\n", i / 13 + 1);
		}
		printf("%s of %s\t", face[deck[i].face], suit[deck[i].suit]);
	}

	return 0;
}
void deal(struct card* wdeck)
{
	int i,m,j;
	int temp[52] = { 0 };
	srand(time(NULL));
	for (i=0;i<52;i++)
	{
		while (1)
		{
			m = rand() % 52;
			if (temp[m] == 0)
			{
				break;
			}
		}
		temp[m] = 1;
		j = (i % 4) * 13 + i / 4;
		wdeck[i].suit = m / 13;
		wdeck[i].face = m % 13;
	}
}
*/
#pragma endregion

/*
int main()
{
	int x,count1=0,count2=0;
	scanf("%d", &x);
	if (x % 2 == 0)
	{
		count1++;
	}
	else
	{
		count2++;
	}
	while (getchar() != '\n')
	{
		scanf("%d", &x);
		if (x % 2 == 0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	printf("count1:%d  count2:%d", count1, count2);
	return 0;
}
*/

#pragma region 命令行操作
/*
int main(int argc, char* argv[])
{
	int i;
	for (i = 1, argv++; i < argc; i++)
	{
		printf("%s ", *(argv++));
	}

	return 0;
}
*/
#pragma endregion

#pragma region 字符串从小到大排序(二级指针)
/*
int main()
{
	int i;
	const char* ccolor[5] = { "Yellow","Black","White","Green","Red" };
	const char** ccp = ccolor;
	void sort(const char** ccp);
	sort(ccolor);
	for (i = 0; i < 5; i++)
	{
		printf("%s ", *(ccp++));
	}
	return 0;
}
void sort(const char** ccp)
{
	int i,j;
	const char* temp;
	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			if (strcmp(*(ccp+j), *(ccp+j+1))>0)
			{
				temp = *(ccp + j); *(ccp + j) = *(ccp + j + 1); *(ccp + j + 1) = temp;
			}
		}
	}
}
*/
#pragma endregion

#pragma region 字符定位(指针函数)
/*
int main()
{
	char* sp=NULL;
	char ch,str[20];
	char* cposition(char* s, char ch);
	printf("Enter a string: ");
	scanf("%s",str);
	getchar();
	printf("Enter a character: ");
	scanf("%c", &ch);
	if ((sp = cposition(str, ch)) != NULL) printf("%s", sp);
	else printf("Not found!");

	return 0;
}
char* cposition(char* sp, char ch)
{
	while (*sp != '\0')
	{
		if (*sp == ch) return sp;
		sp++;
	}
	return NULL;
}
*/
#pragma endregion

