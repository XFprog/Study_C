#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 测试
/*
enum en
{
	FALSE = 0,
	TRUE = 1
};
enum weekday
{
	sunday = 7,
	monday,
	tuesday,
	wednesday,
	thesday,
	friday,
	saturday,
	sum
};
int main()
{
	int day;
	int a = 1;
	enum en myen = TRUE;
	enum weekday weekday;
	if (a == TRUE)printf("yes");
	if (a == FALSE)printf("no");
	printf("\n%d", myen);
	scanf("%d", &day);
	weekday = (enum weekday)day;
	printf("%d", weekday);
}
*/
#pragma endregion

#pragma region 枚举(战神)
/*
typedef enum
{
	攻击力 = 128,
	防御力 = 500,
	生命值 = 2000,
	机甲态 = 0,
	战车态 = 1
}战神属性;
int main()
{
	int Attack;
	int ZS[10];
	战神属性 zs;

	Attack = 攻击力;
	printf("Attack: %d", Attack);
	Attack = ZS[战车态];

	return 0;
}
*/
#pragma endregion

//int main() { int a; a = 15; printf("%d", a); if (a < 100) { printf("hh"); } return 0; }


#pragma region static在语句块内的值变化
/*
int main()
{
	int a = 1;
label:
	{
		static int b = 1;
		b++;
		printf("%d", b);
		getchar();
	}
	goto label;

	return 0;
}
*/
#pragma endregion

#pragma region regeister(???)
/*
int main()
{
	register int a;
	a = 1;

	printf("%d\n", a);
	printf("%p", &a);
}
*/
#pragma endregion

#pragma region 内联函数(inline)
/*
inline int sum(int a, int b)
{
	return a + b;
}
int main()
{
	int a=1, b=2;
	printf("%d", sum(a, b));
	return 0;
}
*/
#pragma endregion

#pragma region 条件编译(if-else-endif)
/*
int main()
{
#if 1
	printf("if0");
#elif 0
	printf("elif");
#else
	printf("else");
#endif

	return 0;
}
*/
#pragma endregion

#pragma region 宏是否定义(ifdef)
/*
#define MAXN 1
int main()
{
#ifdef MAXN
	printf("have define MAXN");
#elif MIN
	printf("have define MIN");
#else
	printf("No define MAXN and MIN");
#endif
	return 0;
}
*/
#pragma endregion

#pragma region 文件删除和重命名
/*
int main()
{
	if (rename("C:\\Users\\User\\Desktop\\virus.txt","C:\\Users\\User\\Desktop\\safe.txt") == EOF) printf("rename failed!");//文件重命名
	remove("C:\\Users\\User\\Desktop\\safe.txt");//删除文件
	return 0;
}
*/
#pragma endregion
