#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region �����for����(12-5)
//��Ч
//int main()
//{
//	FILE* fp;
//	int row, i, j, pos[50] = {0},find; char str[20], ch;
//	fp = fopen("for.txt", "r");
//	row = 1;
//	while (fgets(str, 20, fp)!=NULL)
//	{
//		find = 0;
//		if (strcmp(str, "for") == 0)//���ҵ�ǰ���Ƿ���for
//		{
//			fseek(fp, pos[row], SEEK_SET);//ָ���Ƶ�������ǰ��
//			while (1)
//			{
//				fgets(str, 20, fp);
//				puts(str);//��������ַ���
//				j = 0;
//				while (str[j++] != '\0')//����ÿ���ַ������Ƿ��л��з�
//					if (str[j - 1] == '\n')
//					{
//						pos[row] = ftell(fp)+1;
//						row++;
//						find=1;
//						break;
//					}
//				if (find)break;
//			}
//		}
//	}
//	fclose(fp);
//
//	return 0;
//}

//�Լ�
//int main()
//{
//	long distance = 0;
//	char c1, c2, c3, str[80];
//	FILE* fp;
//	fp = fopen("for.txt", "r");
//	while (!feof(fp))
//	{
//		c1 = fgetc(fp);
//		c2 = fgetc(fp);
//		c3 = fgetc(fp);
//		while (1)
//		{
//			if (c1 == 'f' && c2 == 'o' && c3 == 'r')
//			{
//				fseek(fp, distance, SEEK_SET);//ƫ�Ƶ���λ��
//				fgets(str,80,fp);//��ȡ���(����ƫ�Ƶ���һ��)
//				distance = ftell(fp);//��ȡ����ַ������λ��
//				puts(str);
//				break;
//			}
//			c1 = c2;
//			c2 = c3;
//			c3 = fgetc(fp);
//			if (c3 == '\n')
//			{
//				distance = ftell(fp);//��ȡ���к����һ����λ��
//			}
//		}
//	}
//}

//CSDN����
//int main()
//{
//	FILE* fp;
//	char ch, arr[80];
//	int i=0, j;
//	fp = fopen("for.txt", "r");
//	while (!feof(fp))
//	{
//		while ((ch = fgetc(fp)) != '\n'&&ch!=EOF)
//		{
//			arr[i] = ch;
//			i++;
//		}
//		arr[i] = '\0';
//		for (j = 0; j < i; j++)
//			if (arr[j] == 'f' && arr[j + 1] == 'o' && arr[j + 2] == 'r')
//			{
//				puts(arr);
//				break;
//			}
//		i = 0;
//	}
//	fclose(fp);
//
//	return 0;
//}
#pragma endregion

#pragma region �˻�������(12-7)
/*
typedef struct Account 
{
	int AcctNo;
	char AcctName[20];
	double Balance;
}user;
int size = sizeof(user);//�ṹ�峤��
int Choose()
{
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);
	return choice;
}
int GetCount(FILE* fp)
{
	int count,end,begin;
	fseek(fp, 0, SEEK_SET);
	begin = ftell(fp);
	fseek(fp, 0, SEEK_END);
	end = ftell(fp);
	count = (end - begin) / size;
	rewind(fp);
	return count;
}
void AddUser(FILE* fp)
{
	int count;
	user us;
	printf("Enter name/balance:");
	scanf("%s%lf", us.AcctName, &us.Balance);
	count = GetCount(fp);

	//�����Ƿ�����û��������û�
	if (count > 0) us.AcctNo = count + 1;
	else us.AcctNo = 1;

	//�ļ�д�����û���Ϣ
	fseek(fp, 0, SEEK_END);
	fwrite(&us, size, 1, fp);
	rewind(fp);
}
void Update(FILE* fp)
{
	user us;
	int ID,count;
	double charge;
	printf("Enter user ID: ");
	scanf("%d", &ID);
	count = GetCount(fp);
	if (ID > count || ID <= 0) printf("No this ID!");
	else
	{
		fseek(fp, size * (ID - 1), SEEK_SET);
		fread(&us, size, 1, fp);
		fseek(fp, -size, SEEK_CUR);
		printf("Enter your charge: ");
		scanf("%lf", &charge);
		us.Balance += charge;
		fwrite(&us, size, 1, fp);
	}
	rewind(fp);
}
void Query(FILE*fp)
{
	int count;
	user us;
	count = GetCount(fp);
	if (count > 0)
	{
		printf("AcctNo\tAcctName\tBalance\n");
		rewind(fp);
		while (count > 0)
		{
			fread(&us, size, 1, fp);
			printf("%3d\t%s\t%15.2lf\n", us.AcctNo, us.AcctName, us.Balance);
			count--;
		}
	}
	else printf("There have no user node!\n");
	rewind(fp);
}
int main()
{
	int choice;
	user us;
	FILE* fp;

	//������ļ�
	if ((fp = fopen("Acct.dat", "rb+")) == NULL)
	{
		fp = fopen("Acct.dat", "wb+");
	}

	//��ʾѡ����Ϣ
	printf("[1]Add New User\n");
	printf("[2]Update\n");
	printf("[3]Query\n");
	printf("[0]End Program\n");

	//ѡ�����
	while ((choice=Choose())!=0)
	{
		switch (choice)
		{
		case 1:AddUser(fp); break;
		case 2:Update(fp); break;
		case 3:Query(fp); break;
		case 0:break;
		default:printf("Input invalied!\n"); break;
		}
	}

	return 0;
}
*/
#pragma endregion

#pragma region ת���ַ�����
/*
int main()
{
	printf("\v\t\v\t\v\n");
	printf("\v\t\v\t\v\n");
	printf("\v\t\v\t\v\n");
	//printf("\a");
	printf("\t\v");
	return 0;
}
*/
#pragma endregion

/*
int main()
{
	printf("%d", -3 / 2);

	return 0;
}
*/