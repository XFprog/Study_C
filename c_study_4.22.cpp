#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 素数文件
/*
int main()
{
	int n = 2, count = 0;
	int prime(int n);
	FILE* fp;

	if ((fp = fopen("primeTxt.txt", "w")) == NULL)//打开或创建文件(写入)
	{
		printf("File open error!");
		exit(0);
	}

	while(count <= 500)
	{
		if (prime(n) != 0)
		{
			count++;
			fprintf(fp,"%d ", n);//在文件内写入素数
		}
		n++;
	}

	if (fclose(fp))
	{
		printf("File close error!");
		exit(0);
	}

	printf("done!");
	return 0;
}
int prime(int n)
{
	int i,limit = sqrt(n);
	for (i = 2; i <= limit; i++)
	{
		if (n % i == 0) return 0;
	}
	if (i > limit) return 1;
	return 1;
}
*/
#pragma endregion

/*
int main()
{
	int i;
	for(i=0;i<128;i++)
		printf("%c ", i);

	return 0;
}
*/

/*
typedef struct
{
	int level;
	char name[10];
}Autuman;
int main()
{
	Autuman diga;
	diga.level = 98;
	strcpy(diga.name, "mbyousi");
	printf("name:%s\nlevel:%d", diga.name, diga.level);

	return 0;
}
*/

/*
int main()
{
	typedef int INTERGER;//类型重命名
	typedef INTERGER interger;//类型重命名嵌套重命名
	typedef int NUMARR[10];
	INTERGER i = 1; interger j = 2; NUMARR numarr = {1,2,3,4,5};
	printf("i = %d", i);
	printf("\nj = %d\n", j);
	for (i = 0; i < 10; i++) printf("%d ", numarr[i]);

	return 0;
}
*/

/*
int main()
{
	typedef int* pointer;
	pointer p1;
	int a = 10;
	p1 = &a;
	printf("%d", *p1);

	return 0;
}
*/

