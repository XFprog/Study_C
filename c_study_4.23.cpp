#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region �����ļ���Ϣ(�ļ�)
/*
int main()
{
	char ch; int count = 0;
	FILE* fp1, * fp2;
	if ((fp1 = fopen("f12-2.txt", "r")) == NULL){printf("File open error!");exit(0);}//��12-2.txt
	if ((fp2 = fopen("f12-3.txt", "w")) == NULL){ printf("File open error");exit(0);}//�½�12-3.txt
	while (!feof(fp1))//��fp1��ȡ�ַ�д��fp2
	{
		ch = fgetc(fp1);
		if (ch != EOF) { fputc(ch, fp2); count++; };
	}
	printf("%d", count);//���ͳ�Ƹ��Ƶ��ַ���
	if (fclose(fp1)) { printf("File close error!"); exit(0); };//�ر�12-2.txt
	if (fclose(fp2)) { printf("File close error!"); exit(0); };//�ر�12-3.txt

	return 0;
}
*/
#pragma endregion

#pragma region ��¼ϵͳУ���û��Ϸ���(�ļ�)
/*
struct sysuser
{
	char name[20];
	char passward[20];
};
void encrypt(char* psw);
int checkUserValid(struct sysuser* psu);
int main()
{
	struct sysuser su;
	printf("Enter username: "); scanf("%s", su.name);//�����У���û���
	printf("Enter passward: "); scanf("%s", su.passward);//�����У������
	if (checkUserValid(&su) != 0) printf("Valid user!");//����Ƿ�Ϸ�
	else printf("Invalid user!");

	return 0;
}
void encrypt(char* psw)
{
	for (int i = 0; i < strlen(psw); i++) psw[i] = psw[i] ^ 15;
}
int checkUserValid(struct sysuser* psu)
{
	int check = 0;
	FILE* fp;
	char usr[30], passward[20], usr1[30];
	strcpy(usr, psu->name); strcpy(passward, psu->passward);//�����û���������
	encrypt(passward);//����
	strcat(usr, " "); strcat(usr, passward); strcat(usr, "\n");//���ɼ���ַ���
	if ((fp = fopen("f12-2.txt", "r")) == NULL) { printf("File open error!"); exit(0); }//��f12-2.txt���ڼ��
	while (!feof(fp))
	{
		fgets(usr1, 30, fp);//���ļ���ȡ��ȡһ�е�29���ַ���usr1
		if (strcmp(usr, usr1) == 0) check = 1;//�Ƚ����ӵ��ַ�����usr1�Ƿ����
	}
	if (fclose(fp)) { printf("File close error!"); exit(0); };//�ر��ļ�
	return check;
}
*/
#pragma endregion

#pragma region �Զ����Ʒ�ʽ��д�û���Ϣ�ļ�
/*
#define SIZE 5
struct sysuser { char name[20]; char passward[20]; };
void encrypt(char* psw);
int main()
{
	int i;
	FILE* fp;
	struct sysuser u[SIZE], su[SIZE], * pu = u, * psu = su;
	for (i = 0; i < SIZE; i++, pu++)//��ȡ���벢��������
	{
		printf("Enter %d th user message(name/passward): ",i+1);
		scanf("%s%s", pu->name, pu->passward);
		encrypt(pu->passward);
	}
	pu = u;//�ṹָ���λ
	if ((fp = fopen("f12-5.dat", "wb+")) == NULL) { printf("Open file failed!"); exit(0); }//���ļ�
	fwrite(pu, sizeof(struct sysuser), SIZE, fp);//�ṹ���ݿ�д��������ļ�
	rewind(fp);//�ļ�ָ���λ
	fread(psu, sizeof(struct sysuser), SIZE, fp);//�������ļ�����д������ṹ����
	for (i = 0; i < SIZE; i++, psu++)//�������ṹ��������
	{
		printf("%-10s%s\n", psu->name, psu->passward);
	}
	if (fclose(fp)) { printf("File can not close!"); exit(0); }//�ر��ļ�

	return 0;
}
void encrypt(char* psw)
{
	for (int i = 0; i < strlen(psw); i++) psw[i] = psw[i] ^ 15;
}
*/
#pragma endregion

/*
int main()
{
	int a=1234, b=45678, c = 125;
	//printf("%-6d\n%6d\n", a, a);
	printf("%-6d%-6d\n", a, a);
}
*/

#pragma region ��ĸת����ͳ������(�ļ�)
/*
int main()
{
	FILE* fp;
	int i,countLine=0;
	char s[30];
	int transformCount(char* s);
	if ((fp = fopen("transform.txt", "r")) == NULL) { printf("File open error"); exit(0); }//���ļ�(ֻ��)
	while (!feof(fp))
	{
		fgets(s, 30, fp);
		countLine += transformCount(s);
		printf("%s", s);
	}
	printf("\ncountLine:%d", countLine+1);
	if (fclose(fp)) { printf("File close error!"); exit(0); }//�ر��ļ�
	return 0;
}
int transformCount(char* s)
{
	int count=0;
	while (*s++ != '\0')
	{
		if (*(s - 1) >= 'A' && *(s - 1) <= 'Z') *(s - 1) -= 'A' - 'a';
		if (*(s - 1) == '\n') count += 1;
	}
	return count;
}
*/
#pragma endregion

#pragma region д�ַ�����֤(�ļ�)
/*
int main()
{
	char s[30],ch;
	FILE* fp;
	if ((fp = fopen("f3.txt","w+")) == NULL) { printf("File open error!"); exit(0); }//���ļ�
	printf("Enter a string: "); scanf("%s", s);
	if (fputs(s, fp) != EOF) printf("successed in writing to file\n");//д���ļ�
	else printf("write failed!");
	rewind(fp);
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch != '\0') printf("%c", ch);
	}
	if (fclose(fp)) { printf("File close error"); exit(0); }


	return 0;
}
*/
#pragma endregion

#pragma region ʵ��ȡ��д���ļ�
/*
int main()
{
	FILE* fp1, * fp2;
	double num;
	int n,i,tnum;
	if ((fp1 = fopen("f1.txt", "w+")) == NULL)//��f1.txt(��/д)
	{
		printf("File open failed!"); exit(0);
	}
	printf("Enter n: "); scanf("%d", &n);//�趨����n��ʵ��
	printf("Enter %d double number: ",n);
	for (i = 1; i <= n; i++)//��n��ʵ��д��f1.txt
	{
		scanf("%lf", &num);
		fprintf(fp1, "%lf\n", num);
	}
	rewind(fp1);//��λ
	if ((fp2 = fopen("f2.txt", "w+")) == NULL)//��f2.txt(��/д)
	{
		printf("File open failed!"); exit(0);
	}
	num = 0;
	for (i = 1; i <= n; i++)//��f1.txt�л�ȡʵ������ת������������f2.txt��
	{
		fscanf(fp1, "%lf", &num);
		tnum = (int)num;
		fprintf(fp2, "%d\n", tnum);
	}
	rewind(fp1); rewind(fp2);//��λ
	tnum = 0;
	for (i = 1; i <= n; i++)//��f2.txt�ж�ȡ���������������Ļ
	{
		fscanf(fp2, "%d", &tnum);
		printf("%d\n", tnum);
	}
	rewind(fp2);//��λ
	if (fclose(fp1) || fclose(fp2))
	{
		printf("file shut failed!");
	}

	return 0;
}
*/
#pragma endregion

/*
int main()
{
	FILE* fp;
	double n;
	if ((fp = fopen("f4.txt", "w+")) == NULL);
	fprintf(fp, "%lf  %lf", 1.23,5.45);
	rewind(fp);
	fscanf(fp, "%lf", &n);
	printf("%lf", n);
	fscanf(fp, "%lf", &n);
	printf("%lf", n);
	fclose(fp);

	return 0;
}
*/

