#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region �����ʽ��˻�����
/*
struct LogDat
{
	long logid;          //ID
	char logdate[11];    //����
	char lognote[15];    //˵��
	double charge;       //��֧
	double balance;      //���
};
long size;
int InputChoice()
{
	int choice;
	printf("[1]Add a new cash log\n");
	printf("[2]List all cash log\n");
	printf("[3]Query last cash log\n");
	printf("[4]Update id log\n");
	printf("[0]End program\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	putchar('\n');
	return choice;
}
int GetLogCount(FILE* fp)
{
	long begin, end; int count;
	fseek(fp,0L,SEEK_SET);
	begin = ftell(fp);
	fseek(fp, 0L, SEEK_END);
	end = ftell(fp);
	count = (end - begin) / size;
	rewind(fp);
	return count;
}
void AddNewLog(FILE* fp)
{
	struct LogDat log, lastlog;
	long logcount;
	printf("Input logdate(format:2006-01-01):"); scanf("%s", &log.logdate);   //��������
	printf("Input lognote:"); scanf("%s", &log.lognote);                      //����˵��
	printf("Input charge(income+ and expend-):"); scanf("%lf", &log.charge);  //������֧
	logcount = GetLogCount(fp);
	if (logcount > 0)
	{
		fseek(fp,size*(logcount-1),SEEK_SET);//ָ���Ƶ����һ����¼
		fread(&lastlog, size, 1, fp);//��ȡ���һ����¼��lastlog
		log.logid = lastlog.logid + 1;//������id����lastlog.logid��һ
		log.balance = lastlog.balance + log.charge;//���������ڱ�����֧���ϴ����
	}
	else
	{
		log.logid = 1;
		log.balance = log.charge;
	}
	printf("Logid:%ld\n", log.logid);
	fwrite(&log, size, 1, fp);//���μ�¼д���ļ�
	rewind(fp);
}
void ListAllLog(FILE* fp)
{
	struct LogDat log;
	fseek(fp, 0L, SEEK_SET);
	fread(&log, size, 1, fp);
	printf("\n\nlogid    logdate\t lognote\tcharge\t\t  balance\n");
	while (!feof(fp))
	{
		printf("%3ld\t %-11s\t %-15s %5.2lf %16.2lf\n",
			log.logid,log.logdate,log.lognote,log.charge,log.balance);
		fread(&log,size,1,fp);
	}
	putchar('\n');
}
void UpdateLog(FILE* fp)
{
	int i,end;
	double balance,newbalance;
	long id,count;
	struct LogDat log,bflog,templog;

	fseek(fp, 0, SEEK_END);
	end = ftell(fp);//��ȡ�ļ�ĩβ�ֽ�λ��
	fseek(fp, 0, SEEK_SET);

	printf("Enter ID: ");
	scanf("%ld", &id);
	count = GetLogCount(fp);
	if (id > count || id <= 0) printf("No this id!");
	else
	{
		printf("curfp:%d", ftell(fp));
		fseek(fp, size * (id - 1), SEEK_SET);//ָ�붨λ��id��
		printf("curfp:%d", ftell(fp));
		printf("Enter new logdate/lognote/charge: ");
		scanf("%s%s%lf", log.logdate, log.lognote, &log.charge);//�������ȴ�log��
		log.logid = id;
		if (id == 1)//idΪ1ʱ����Ϣ����
		{
			log.balance = log.charge;
			newbalance = log.balance;
			fwrite(&log, size, 1, fp);//��������Ϣд���ļ�id��Ӧ��
			while (ftell(fp)<end)
			{
				fread(&log, size, 1, fp);//��ȡid����Ϣ����log
				newbalance = newbalance + log.charge;//����id����balance
				log.balance = newbalance;
				fseek(fp, -size, SEEK_CUR);
				fwrite(&log, size, 1, fp);
			}
		}
		else//id��Ϊ1����Ϣ����
		{
			fseek(fp, -size, SEEK_CUR);//ָ�붨λ��ǰһ��id���Ի�ȡ��balance
			fread(&bflog, size, 1, fp);
			balance = bflog.balance;
			log.balance = balance + log.charge;//id��balance�����ϸ�id��balance���ϱ�id��charge
			newbalance = log.balance;//����һ��id����balance
			fwrite(&log, size, 1, fp);//��������Ϣд���ļ�id��Ӧ��
			while (ftell(fp) < end)
			{
				fread(&log, size, 1, fp);//��ȡid����Ϣ����log
				newbalance = newbalance + log.charge;//����id����balance
				log.balance = newbalance;
				fseek(fp, -size, SEEK_CUR);
				fwrite(&log, size, 1, fp);
			}
		}
	}
}
void QuertLastLog(FILE* fp)
{
	struct LogDat log;
	long count;
	count = GetLogCount(fp);
	if (count > 0)
	{
		fseek(fp, size * (count - 1), SEEK_SET);
		fread(&log, size, 1, fp);
		printf("The last cashnote is:\n");
		printf("Logid: %-12ld\n", log.logid);
		printf("Logdate: %-12s\n", log.logdate);
		printf("lognote: %-12s\n", log.lognote);
		printf("Charge: %-12.2f\n", log.charge);
		printf("Balance: %-12.2f\n\n\n", log.balance);
	}
	else
	{
		printf("No lognotes in this file!");
	}
}
int main()
{
	FILE* fp;
	int choice;
	size = sizeof(struct LogDat);
	if ((fp = fopen("cashbox.dat", "wb+")) == NULL) { printf("open error"); exit(0); }//���ļ�
	while ((choice = InputChoice()) != 0)
	{
		switch (choice)
		{
		case 1:AddNewLog(fp); break;
		case 2:ListAllLog(fp); break;
		case 3:QuertLastLog(fp); break;
		case 4:UpdateLog(fp); break;
		default:printf("Input error!"); break;
		}
	}
	if (fclose(fp)) { printf("close error"); exit(0); }

	return 0;
}
*/
#pragma endregion

/*
int main()
{
	FILE* fp;
	int i,num,size, arr[5] = {1,2,3,4,5}, aarr[5];
	size = sizeof(int);
	fp = fopen("ffff.dat", "wb+");
	fwrite(arr, size, 5, fp);
	rewind(fp);
	fread(aarr, size, 5, fp);
	for (i = 0; i < 5; i++) printf("%d ", aarr[i]);
	fclose(fp);
}
*/

#pragma region ͳ���ı��ļ��и����ַ�����(12-1)
/*
int main()
{
	FILE* fp;
	char ch;
	int char_cou = 0,num_cou=0,other_cou=0;
	fp = fopen("12-1.txt", "r");
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') char_cou++;
		else if (ch >= '0' && ch <= '9') num_cou++;
		else other_cou++;
	}
	printf("char_cou:%d\n", char_cou);
	printf("num_cou:%d\n", num_cou);
	printf("other_cou:%d", other_cou);
	fclose(fp);

	return 0;
}
*/
#pragma endregion

#pragma region ��ʵ��д���ļ�(12-2)
/*
int main()
{
	FILE* fp;
	double num;
	fp = fopen("doubleNum.txt", "w");
	do
	{
		scanf("%lf", &num);
		fprintf(fp, "%lf\n", num);
	} while (num != -1);
	fclose(fp);
}
*/
#pragma endregion

#pragma region �Ƚ������ı��ļ��Ƿ���ͬ(12-3)
/*
int main()
{
	int i=1, j=0; char ch;
	FILE* fp1, * fp2;
	fp1 = fopen("12-3-1.txt", "r");
	fp2 = fopen("12-3-2.txt", "r");
	while (!feof(fp1))
	{
		j++;
		ch = fgetc(fp1);
		if (ch == '\n') i++,j=0;              //ͳ������
		if (ch != fgetc(fp2)) break;      //�Ƿ��ҵ����
	}
	if (feof(fp1))printf("the same!");
	else printf("the not same character is %c in (%d,%d)", ch, i, j);

	fclose(fp1); fclose(fp2);

	return 0;
}
*/
#pragma endregion

#pragma region ���ļ���������Ͳ�д���ļ�β(12-4)
//����
//int main()
//{
//	FILE* fp;
//	int num,sum=0,end;
//	fp = fopen("integer.dat", "wb+");//���ļ�
//	do//���������ļ�
//	{
//		scanf("%d", &num);
//		if (num != -1)
//		{
//			fprintf(fp, "%-5d", num);
//		}
//
//	} while (num != -1);
//
//	fseek(fp, 0L, SEEK_END);//��ȡ�ļ�β�ֽ���
//	end = ftell(fp);
//	fseek(fp, 0L, SEEK_SET);
//
//	while (ftell(fp) < end)//�ۼ�����
//	{
//		fscanf(fp, "%d", &num);
//		sum += num;
//	}
//
//	fseek(fp, 0L, SEEK_END);//��β���������
//	fprintf(fp, "%d", sum);
//	fclose(fp);//�ر��ļ�
//}

//CSDN

#pragma endregion
