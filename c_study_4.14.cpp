#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 修改学生成绩
/*
struct student
{
	int num;
	char name[20];
	int math, english, computer;
	double average;
};
int main()
{
	int i,n,course,num,score,pos;
	struct student stu[50];
	int update_score(struct student p[], int n, int num, int course, int score);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter info of %d students: \n", n);
	for (i = 0; i < n; i++)//输入学生信息
	{
		printf("No.%d :\n",i+1);
		printf("Number: ");
		scanf("%d", &stu[i].num);
		printf("Name : ");
		scanf("%s", stu[i].name);
		printf("Math: ");
		scanf("%d", &stu[i].math);
		printf("English: ");
		scanf("%d", &stu[i].english);
		printf("Computer: ");
		scanf("%d", &stu[i].computer);
		stu[i].average = (stu[i].math + stu[i].english + stu[i].computer) / 3.0;
	}
	printf("Enter info of the student to be update: \n");//输入被修改学生信息
	printf("Number: "); scanf("%d", &num);
	printf("Course: "); scanf("%d", &course);
	printf("Score: "); scanf("%d", &score);
	pos = update_score(stu, n, num, course, score);//修改成绩
	if (pos == -1)  printf("Not found!!!");
	else printf("Number\tmath\tenglish\tcomputer\n");
	printf("%d\t%d\t%d\t%d", stu[pos].num, stu[pos].math, stu[pos].english, stu[pos].computer);

	return 0;
}
int update_score(struct student p[], int n, int num, int course, int score)
{
	int i,pos;
	for (i = 0; i < n; i++,p++)//根据学号查找学生坐标
	{
		if (p->num == num)
		{
			break;
		}
	}
	if (i < n)
	{
		switch (course)
		{
		case 1:p->math = score; break;
		case 2:p->english = score; break;
		case 3:p->computer = score; break;
		default:printf("no this course!!!"); break;
		}
		pos = i;
	}
	else return -1;


	return pos;
}
*/
#pragma endregion

/*
struct student
{
	int num;
	int point;
};
int main()
{
	struct student stu,* p=&stu;
	p->point = 2000;
	(*p).point = 3000;
	printf("%d", p->point);

	return 0;
}
*/

#pragma region 时间换算(结构体)
/*
struct time { int hour; int minute; int second; };
int main()
{
	int seconds;
	struct time myKnock;
	printf("Enter hour/minute/second: ");
	scanf("%d%d%d", &myKnock.hour, &myKnock.minute, &myKnock.second);
	printf("Enter pass seconds(<60): ");
	scanf("%d", &seconds);
	myKnock.second += seconds;
	if (myKnock.second > 60)
	{
		myKnock.second -= 60;
		myKnock.minute += 1;
		if (myKnock.minute == 60)
		{
			myKnock.minute = 0;
			myKnock.hour += 1;
			if (myKnock.hour == 24)
			{
				myKnock.hour = 0;
			}
		}
	}
	printf("After %d seconds: \n\n", seconds);
	printf("hour\tminute\tsecond\n");
	printf("%d\t%d\t%d", myKnock.hour, myKnock.minute, myKnock.second);

	return 0;
}
*/
#pragma endregion

#pragma region 计算复数之积
/*
struct complex
{
	int a, b, c, d;
}cpx,*sp=&cpx;
int main()
{
	int real, unreal;
	printf("Enter two complex: \n");
	printf("complex1: "); scanf("%d%d",&sp->a,&sp->b);
	printf("complex2: "); scanf("%d%d", &sp->c, &sp->d);
	real = (sp->a * sp->c) - (sp->b * sp->d);
	unreal = (sp->a * sp->d) + (sp->b * sp->c);
	printf("(%d+%di)*(%d+%di) = %d+%di",sp->a,sp->b,sp->c,sp->d,real,unreal);
	return 0;
}
*/
#pragma endregion

#pragma region 计算平面向量和
/*
struct sumvector2{ int x,y; }vector2[2];
int main()
{
	int x, y;
	printf("Enter two vector2: \n");
	printf("V1: "); scanf("%d%d", &((&vector2[0])->x), &vector2->y);
	printf("V2: "); scanf("%d%d", &vector2[1].x, &(*(vector2 + 1)).y);
	x = (&vector2[0])->x + vector2[1].x;
	y = vector2[1].y + vector2[0].y;
	printf("V = (%d,%d)", x, y);
	return 0;
}
*/
#pragma endregion

#pragma region 查找书籍
/*
struct book { char name[10]; int price; }book[10],max,min;
int main()
{
	int i,n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d books'info:Name/price \n",n);
	for (i=1;i<=n;i++)
	{
		printf("No.%d:", i); scanf("%s%d", book[i].name, &book[i].price);
	}
	for (i = 2,max=book[1],min=book[1]; i <= n; i++)
	{
		if (max.price < book[i].price) max = book[i];
		if (min.price > book[i].price) min = book[i];
	}
	printf("value\tName\tprice\n");
	printf("max:\t%s\t%d\n", max.name, max.price);
	printf("min:\t%s\t%d", min.name, min.price);

	return 0;
}
*/
#pragma endregion

#pragma region 通信录排序
/*
struct addressbook
{
	char name[10];
	int tel;
	struct borndate
	{
		int year;
		int month;
		int day;
	}born;
}adb[10],*ad=adb;
int main()
{
	int i,j, n;
	void swap(struct addressbook* op1, struct addressbook* op2);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("name/tel/year/month/day\n");
	for (i=0; i < n; i++,ad++)
	{
		scanf("%s%d%d%d%d", ad->name, &ad->tel, &ad->born.year, &ad->born.month, &ad->born.day);
	}
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (adb[j].born.year > adb[j+1].born.year) swap(&adb[j], &adb[j+1]);
		}
	}
	printf("name\ttelphone\tyear\tmonth\tday\n");
	for (i = 0; i < n; i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\n", adb[i].name, adb[i].tel, adb[i].born.year, adb[i].born.month, adb[i].born.day);
	}
}
void swap(struct addressbook* op1, struct addressbook* op2)
{
	struct addressbook mid;
	mid = *op1;
	*op1 = *op2;
	*op2 = mid;
}
*/
#pragma endregion

