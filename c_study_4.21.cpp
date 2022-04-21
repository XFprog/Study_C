#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 指定位置输出字符串(11-5)
/*
int main()
{
	char* strp[2], fs[20], c1, c2, news[20];
	char* match(char* s, char c1, char c2);
	strp[0] = fs;
	printf("Enter a string: ");
	scanf("%s", *strp);
	getchar();
	printf("Enter c1/c2: ");
	scanf("%c%c", &c1, &c2);
	strcpy(news, strp[1]=match(strp[0],c1,c2));
	printf("%s", news);
}
char* match(char* s, char c1, char c2)
{
	int i,j;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c1)
		{
			j = i;
		}
		if (s[i] == c2)
		{
			s[i + 1] = '\0';
			return &s[j];
		}
	}
}
*/
#pragma endregion

#pragma region 查找子串(11-6)
/*
int main()
{
	char s1[20], s2[20], * p;
	char* search(char* s1, char* s2);
	printf("Enter s1/s2: ");
	scanf("%s%s", s1, s2);
	p = search(s1, s2);
	if (p != NULL) printf("yes");
	else printf("Not found!");
}
char* search(char* s1, char* s2)
{
	int i,j;
	for (i = 0; s1[i]!='\0'; i++)
	{
		if (s1[i] == *s2)
		{
			j = 0;
			while (s1[i+j] == s2[j] && s2[j] != '\0')
			{
				j++;
			}
			if (s2[j] == '\0') return s1;
		}
	}
	return NULL;
}
*/
#pragma endregion

#pragma region 奇数值节点链表(11-7自己)
/*
struct number
{
	int num;
	struct number* next;
};
int main()
{
	int num,i;
	struct number L = {}, NEW = L, * p, * p1 = &L, * head = &L, * p2 = &NEW;
	printf("Enter a series of numbers: ");
	scanf("%d", &num);//建立表头
	p1->num = num;
	p1->next = NULL;
	while (1)//建立数链表
	{
		scanf("%d", &num);
		if (num == -1)
		{
			p1->next = NULL;
			break;
		}
		p = (struct number*)malloc(sizeof(struct number));
		p1->next = p;
		p1 = p;
		p1->num = num;
	}
	p1 = head;//建立奇数链表
	p = p2;
	while (1)
	{
		if (p1->num % 2 != 0)
		{
			if (NEW.num != NULL)
			{
				p = (struct number*)malloc(sizeof(struct number));
				p2->next = p;
				p2 = p;
				p2->num = p1->num;
				p2->next = NULL;
			}
			else
			{
				NEW.num = p1->num;
				NEW.next = NULL;
			}
		}
		if (p1->next != NULL) p1 = p1->next;
		else break;
	}

	p2 = &NEW;//输出链表内容
	while (p2->next!=NULL)
	{
		printf("%d ", p2->num);
		p2 = p2->next;
	}printf("%d", p2->num);

	p1 = head;//释放链表(只保留表头)
	free(p1->next);
	p1->next = NULL;
}
*/
#pragma endregion

#pragma region 奇数值节点链表(11-7CSDN)
/*
struct number
{
	int num;
	struct number* next;
};
int main()
{
	struct number* L, * Odd;
	struct number* build();
	struct number* getOdd(struct number**L);
	void print(struct number* Odd);
	L = build();
	Odd = getOdd(&L);
	print(L);
	print(Odd);
	return 0;
}
struct number* build()
{
	int num;
	int size = sizeof(struct number);
	struct number* head, * tail, * p;
	head = tail = NULL;
	printf("Enter numbers: ");
	scanf("%d", &num);
	while (num!=-1)
	{
		p = (struct number*)malloc(size);
		p->num = num;
		p->next = NULL;
		if (head == NULL)
		{
			head = p;
		}
		else
		{
			tail->next = p;//连接链表
		}
		tail = p;
		scanf("%d", &num);
	}
	return head;
}
struct number* getOdd(struct number**L)
{
	int num;
	int size = sizeof(struct number);
	struct number* head, * tail, * pnew;
	struct number* ptr1, * ptr2;
	head = tail = NULL;
	ptr1 = ptr2 = NULL;

	//表头为奇数
	while (*L != NULL && (*L)->num % 2 != 0)
	{
		num = (*L)->num;
		pnew = (struct number*)malloc(size);
		pnew->num = num;
		pnew->next = NULL;
		if (head == NULL)
		{
			head = pnew;
		}
		else
		{
			tail->next = pnew;
		}
		tail = pnew;

		//删除原链表奇数节点
		ptr2 = *L;
		*L = (*L)->next;
		free(ptr2);
	}
	if (*L == NULL)
	{
		return NULL;
	}

	//表头不是奇数
	ptr1 = *L;
	ptr2 = (*L)->next;
	while (ptr2 != NULL)
	{
		num = ptr2->num;
		if (num % 2 != 0)
		{
			pnew = (struct number*)malloc(size);
			pnew->num = num;
			if (head == NULL)
			{
				head = pnew;
			}
			else
			{
				tail->next = pnew;
			}
			tail = pnew;

			//删除原链表奇数节点
			ptr1->next = ptr2->next;
			free(ptr2);
		}
		else//若为偶数则偏移
		{
			ptr1 = ptr2;
		}
		ptr2 = ptr1->next;
	}
	tail->next = NULL;
	return head;
}
void print(struct number* L)
{
	struct number* ptr;
	ptr = L;
	while (ptr->next != NULL)
	{
		printf("%d ", ptr->num);
		ptr = ptr->next;
	}printf("%d \n", ptr->num);
}
*/
#pragma endregion

/*
int main()
{
	int n,sum,i,pr2=1,pr1=1,pre,count=0;
	printf("enter n: ");
	scanf("%d",&n);
	if (n == 1) sum = 1;
	else if (n == 2) sum = 2;
	else
	{
		sum = 2;
		printf("%10d%10d",1,1);
		for (i = 3; i <= n; i++)
		{
			pre = pr1 + pr2;
			sum += pre;

			pr2 = pr1;
			pr1 = pre;
			printf("%10d ", pre);
			count++;
			if ((count + 2) % 5 == 0)printf("\n");
		}
	}
	printf("%d", sum);
	return 0;
}
*/

#pragma region 删除节点(11-8)
/*
struct number { int num; struct number* next; };
int main()
{
	int m;
	struct number* numlist,*head;
	struct number* build();
	struct number* delet(struct number* head,int m);
	void print(struct number* head);
	printf("Enter a number: ");
	scanf("%d", &m);
	head = build();
	head = delet(head,m);
	print(head);

	return 0;
}
struct number* build()
{
	int num;
	int size = sizeof(struct number);
	struct number* head, * tail, * p;
	head = tail = NULL;
	printf("Enter numbers: ");
	scanf("%d", &num);
	while (num != -1)
	{
		p = (struct number*)malloc(size);
		p->num = num;
		p->next = NULL;
		if (head == NULL)
		{
			head = p;
		}
		else
		{
			tail->next = p;
		}
		tail = p;
		scanf("%d", &num);
	}
	return head;
}
struct number* delet(struct number* head, int m)
{
	int num;
	struct number* ptr1, * ptr2;
	ptr1 = ptr2 = NULL;
	while (head->num == m)//注意从头开始删除
	{
		head = head->next;
		if (head == NULL) return NULL;//考虑为NULL的情况
	}
	ptr1 = head;
	ptr2 = ptr1->next;
	while (ptr2)
	{
		if (ptr2->num == m)
		{
			ptr1->next = ptr2->next;
			free(ptr2);
		}
		else
		{
			ptr1 = ptr2;
		}
		ptr2 = ptr1->next;
	}
	return head;
}
void print(struct number*head)
{
	struct number* ptr;
	ptr = head;
	while (ptr)//ptr偏移到0时不仅输出了最后一个数并且可结束循环
	{
		printf("%d ", ptr->num);
		ptr = ptr->next;
	}
}
*/
#pragma endregion
