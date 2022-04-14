#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 学生成绩统计
/*
int main()
{
	int* p,i,n,heightst,lowest;
	double average,sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d student point: ",n);
	if ((p = (int*)calloc(n, sizeof(int))) == NULL)//动态分配空间
	{
		printf("not able to allocate memory");
		exit(1);
	}
	for (i = 0; i < n; i++)//成绩存入
	{
		scanf("%d", p+i);
	}
	heightst = *p; lowest = *p;
	for (i = 0; i < n; i ++)//求平均成绩和最高分最低分
	{
		sum += *(p + i);
		if (i<n-1) heightst = heightst < *(p + i + 1) ? *(p+i+1): heightst;
		if (i<n-1) lowest = lowest < *(p + i + 1) ? lowest : *(p+i+1);
	}
	average = sum / n;
	printf("average: %.2f  heighst: %d  lowest: %d", average, heightst, lowest);
	free(p);//释放空间
	return 0;
}
*/
#pragma endregion

#pragma region 学生成绩统计(结构体)
/*
struct student
{
	int num;
	char name[10];
	int math, english, computer;
	double average;
};
int main()
{
	int i, n;
	printf("Enter n: ");
	scanf("%d", &n);
	struct student stu, max;
	printf("Enter student's num,name,point: \n");
	for (i = 1; i <= n; i++)
	{
		printf("NO.%d: ", i);
		scanf("%d%s%d%d%d", &stu.num, stu.name, &stu.math, &stu.english, &stu.computer);
		stu.average = (stu.math + stu.english + stu.computer) / 3.0;
		if (i == 1) max = stu;
		else if (stu.average > max.average) max = stu;
	}
	printf("max studengt: num: %d,name: %s, average: %.2lf", max.num, max.name, max.average);

	return 0;
}
*/
#pragma endregion

/*
struct message
{
	int height;
	int kilo;
	int age;
};
struct studysource
{
	char xjj[10];
	int num;
	struct message m;
}sor1,sor2;
struct { int distribute; }xv;
int main()
{
	sor2 = { "xlulu",85,{165,45,24} };
	printf("xjj: %s   age: %d\n",sor2.xjj , sor2.m.age);
	xv.distribute = 666;
	printf("xv: %d", xv.distribute);
	return 0;
}
*/

#pragma region 学生成绩统计进阶(结构体)
/*
struct averageSto { double math_aver, english_aver, computer_aver; }storage;
struct bornDate { char date[20]; };
struct student
{
	int num;
	char name[20];
	int math, english, computer;
	double average;
	struct bornDate born;
};
int main()
{
	int i,n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Input student's <num> <name> <bornDate> <point>: \n");
	struct student stu, max;
	for (i = 1; i <= n; i++)
	{
		printf("No.%d: ", i);
		scanf("%d%s%s%d%d%d", &stu.num, stu.name, stu.born.date, &stu.math, &stu.english, &stu.computer);
		stu.average = (stu.math + stu.english + stu.computer) / 3.0;
		storage.math_aver += stu.math; storage.english_aver += stu.english; storage.computer_aver += stu.computer;
		if (i == 1) max = stu;
		else if (max.average < stu.average) max = stu;
	}
	storage.math_aver /= n; storage.english_aver /= n; storage.computer_aver /= n;
	printf("the average point: math:%.2lf  english:%.2lf  computer:%.2lf\n",storage.math_aver,storage.english_aver,storage.computer_aver);
	printf("max student: <num>:%d  <name>:%s  <average>:%.2lf  <bornDate>:%s", max.num, max.name, max.average, max.born.date);
	return 0;
}
*/
#pragma endregion

#pragma region 学生成绩排序
/*
struct student
{
	int num;
	char name[10];
	int math, english, computer;
	double average;
};
int main()
{
	struct student stu[50],temp;
	int i, j, n, index;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d student message: \n",n);
	for (i = 0; i < n; i++)//存储学生信息及平均成绩
	{
		printf("Enter info of No.%d: \n", i + 1);
		printf("Number: ");
		scanf("%d", &stu[i].num);
		printf("Name: ");
		scanf("%s", stu[i].name);
		printf("Math: ");
		scanf("%d", &stu[i].math);
		printf("English: ");
		scanf("%d", &stu[i].english);
		printf("Computer: ");
		scanf("%d", &stu[i].computer);
		stu[i].average = (stu[i].math + stu[i].english + stu[i].computer)/3.0;
	}
	for (i = 0; i < n-1; i++)//成绩排序
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (stu[index].average < stu[j].average)
			{
				index = j;
			}
		}
		temp = stu[index];
		stu[index] = stu[i];
		stu[i] = temp;
	}
	printf("Num\tName\taverage\n");
	for (i = 0; i < n; i++)//输出成绩
	{
		printf("%d\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].average);
	}

	return 0;
}
*/
#pragma endregion

/*
struct student
{
	int num;
	char name[10];
	int math, english, computer;
	double average;
};
int main()
{
	struct student stu[5] = 
	{ 
		{101,"jack",90,91,92},
		{102,"maren",85,87,64},
		{103,"yukio",99,98,100},
		{104,"landa",78,84,65},
		{105,"uio",86,45,22}
	};
	printf("%s", stu[3].name);
}
*/

/*
struct student
{
	int num;
	int math, english, computer;
	double average;
};
int main()
{
	struct student stu[10],max,min;
	int i;
	printf("Enter message for students:\n");
	for (i = 0; i < 3; i++)
	{
		printf("No.%d:", i);
		scanf("%d%d%d%d", &stu[i].num, &stu[i].math, &stu[i].english, &stu[i].computer);
		stu[i].average = (stu[i].math + stu[i].english + stu[i].computer) / 3.0;
	}
	for (i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			max = stu[i];
			min = stu[i];
		}
		if (max.average < stu[i].average) max = stu[i];
		if (min.average > stu[i].average) min = stu[i];
	}
	printf("max average student:%d  average:%.2f\n", max.num, max.average);
	printf("min average student:%d  average:%.2f", min.num, min.average);
	return 0;
}
*/

