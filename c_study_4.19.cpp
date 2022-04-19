#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 计算数值积分(函数指针)
/*
int main()
{
	double result,a,b;
	double calc(double(*fun)(double), double a, double b);
	double f1(double x), f2(double x);
	double (*func)(double);
	printf("Enter a,b: ");
	scanf("%lf%lf", &a, &b);
	result = calc(f1, a, b);
	printf("1:result = %.2f\n", result);
	func = f2;
	result = calc(func, a, b);
	printf("2:result = %.2f", result);

	return 0;
}
double calc(double(*fun)(double), double a, double b)
{
	double z;
	z = (b - a) / 2 * ((*fun)(a) + (*fun)(b));
	return z;
}
double f1(double x)
{
	return x * x;
}
double f2(double x) { return (sin(x) / x); }
*/
#pragma endregion

#pragma region 获取字符串最后一个字符位置(指针函数)
/*
int main()
{
	char str[20];
	char* match(char* str);
	char* cp;
	printf("Enter a string: ");
	gets_s(str);
	cp = match(str);
	puts(cp);
	return 0;
}
char* match(char *str)
{
	int i;
	for (i = 0; *(str + i) != '\0'; i++);
	return str + i - 1;
}
*/
#pragma endregion

/*
int main()
{
	int(*pnum)(int);
	int getnum(int a);
	pnum = getnum + 1;

	return 0;
}
int getnume(int a)
{
	return a + 1;
}
*/

#pragma region 学生成绩信息(单向链表)
struct stud_node
{
	int num;
	char name[20];
	int score;
	struct stud_node* next;
};
struct stud_node* create_stu_doc();
struct stud_node* insert_stu_doc(struct stud_node*head,struct stud_node*p);
struct stud_node* delete_stu_doc(struct stud_node* head, int num);
void print_stud_doc(struct stud_node* head);
int main(void)
{
	int num,score,choice;
	char name[20];
	struct stud_node* head, * p;
	int size = sizeof(struct stud_node);
	head = NULL;
	do
	{
		printf("[1]create\n[2]insert\n[3]delet\n[4]print\n[0]exit\n");
		printf("Enter choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:head=create_stu_doc(); break;
		case 2:
			printf("Enter num,name,score: ");
			scanf("%d%s%d", &num, name, &score);
			p = (struct stud_node*)malloc(size);
			p->num = num;
			p->score = score;
			strcpy(p->name, name);
			head = insert_stu_doc(head,p);
			break;
		case 3:
			printf("Enter num: ");
			scanf("%d", &num);
			//head = delete_stu_doc(head, num);
			break;
		case 4:
			//print_stud_doc(head);
			break;
		case 0:
			break;
		}
	} while (choice!=0);

	return 0;
}
struct stud_node* creat_stu_doc()
{
	int num, score;
	char name[20];
	struct stud_node* head, * p;
	int size = sizeof(struct stud_node);
	head = NULL;
	printf("Enter num,name,score: ");
	scanf("%d%s%d", &num, name, &score);
	while (num != 0)
	{
		p = (struct stud_node*)malloc(size);
		p->num = num;
		p->score = score;
		strcpy(p->name, name);
		head = insert_stu_doc(head, p);
		scanf("%d%s%d", &num, name, &score);
	}
	return head;
}
struct stud_node* insert_stu_doc(struct stud_node* head, struct stud_node* p)
{
	struct stud_node* ptr, * ptr1, * ptr2;
	ptr2 = head;
	ptr = p;
	if (head == NULL)//链表为空时插入
	{
		head = ptr;
		head->next = NULL;
	}
	else
	{
		while (ptr->num > ptr2->num&&ptr2->next!=NULL)//ptr2向后偏移
		{
			ptr1 = ptr2;
			ptr2 = ptr2->next;
		}
		if (ptr->num <= ptr2->num)
		{
			if (head == ptr2) head = ptr;//插前
			else ptr1->next = ptr;//插中间
			ptr->next = ptr2;
		}
		else
		{
			ptr2->next = ptr;//插尾部
			ptr->next = NULL;
		}
	}
	return head;
}
#pragma endregion
