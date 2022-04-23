#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 复制文件信息(文件)
/*
int main()
{
	char ch; int count = 0;
	FILE* fp1, * fp2;
	if ((fp1 = fopen("f12-2.txt", "r")) == NULL){printf("File open error!");exit(0);}//打开12-2.txt
	if ((fp2 = fopen("f12-3.txt", "w")) == NULL){ printf("File open error");exit(0);}//新建12-3.txt
	while (!feof(fp1))//从fp1读取字符写入fp2
	{
		ch = fgetc(fp1);
		if (ch != EOF) { fputc(ch, fp2); count++; };
	}
	printf("%d", count);//输出统计复制的字符数
	if (fclose(fp1)) { printf("File close error!"); exit(0); };//关闭12-2.txt
	if (fclose(fp2)) { printf("File close error!"); exit(0); };//关闭12-3.txt

	return 0;
}
*/
#pragma endregion

#pragma region 登录系统校验用户合法性(文件)
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
	printf("Enter username: "); scanf("%s", su.name);//输入待校验用户名
	printf("Enter passward: "); scanf("%s", su.passward);//输入待校验密码
	if (checkUserValid(&su) != 0) printf("Valid user!");//检测是否合法
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
	strcpy(usr, psu->name); strcpy(passward, psu->passward);//拷贝用户名和密码
	encrypt(passward);//加密
	strcat(usr, " "); strcat(usr, passward); strcat(usr, "\n");//连成检测字符串
	if ((fp = fopen("f12-2.txt", "r")) == NULL) { printf("File open error!"); exit(0); }//打开f12-2.txt用于检测
	while (!feof(fp))
	{
		fgets(usr1, 30, fp);//从文件读取读取一行的29个字符到usr1
		if (strcmp(usr, usr1) == 0) check = 1;//比较连接的字符串和usr1是否相等
	}
	if (fclose(fp)) { printf("File close error!"); exit(0); };//关闭文件
	return check;
}
*/
#pragma endregion

#pragma region 以二进制方式读写用户信息文件
/*
#define SIZE 5
struct sysuser { char name[20]; char passward[20]; };
void encrypt(char* psw);
int main()
{
	int i;
	FILE* fp;
	struct sysuser u[SIZE], su[SIZE], * pu = u, * psu = su;
	for (i = 0; i < SIZE; i++, pu++)//获取输入并加密密码
	{
		printf("Enter %d th user message(name/passward): ",i+1);
		scanf("%s%s", pu->name, pu->passward);
		encrypt(pu->passward);
	}
	pu = u;//结构指针归位
	if ((fp = fopen("f12-5.dat", "wb+")) == NULL) { printf("Open file failed!"); exit(0); }//打开文件
	fwrite(pu, sizeof(struct sysuser), SIZE, fp);//结构数据块写入二进制文件
	rewind(fp);//文件指针归位
	fread(psu, sizeof(struct sysuser), SIZE, fp);//二进制文件数据写入另外结构数组
	for (i = 0; i < SIZE; i++, psu++)//输出另外结构数组数据
	{
		printf("%-10s%s\n", psu->name, psu->passward);
	}
	if (fclose(fp)) { printf("File can not close!"); exit(0); }//关闭文件

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

#pragma region 字母转换并统计行数(文件)
/*
int main()
{
	FILE* fp;
	int i,countLine=0;
	char s[30];
	int transformCount(char* s);
	if ((fp = fopen("transform.txt", "r")) == NULL) { printf("File open error"); exit(0); }//打开文件(只读)
	while (!feof(fp))
	{
		fgets(s, 30, fp);
		countLine += transformCount(s);
		printf("%s", s);
	}
	printf("\ncountLine:%d", countLine+1);
	if (fclose(fp)) { printf("File close error!"); exit(0); }//关闭文件
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

#pragma region 写字符并验证(文件)
/*
int main()
{
	char s[30],ch;
	FILE* fp;
	if ((fp = fopen("f3.txt","w+")) == NULL) { printf("File open error!"); exit(0); }//打开文件
	printf("Enter a string: "); scanf("%s", s);
	if (fputs(s, fp) != EOF) printf("successed in writing to file\n");//写入文件
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

#pragma region 实数取整写入文件
/*
int main()
{
	FILE* fp1, * fp2;
	double num;
	int n,i,tnum;
	if ((fp1 = fopen("f1.txt", "w+")) == NULL)//打开f1.txt(读/写)
	{
		printf("File open failed!"); exit(0);
	}
	printf("Enter n: "); scanf("%d", &n);//设定输入n个实数
	printf("Enter %d double number: ",n);
	for (i = 1; i <= n; i++)//将n个实数写入f1.txt
	{
		scanf("%lf", &num);
		fprintf(fp1, "%lf\n", num);
	}
	rewind(fp1);//归位
	if ((fp2 = fopen("f2.txt", "w+")) == NULL)//打开f2.txt(读/写)
	{
		printf("File open failed!"); exit(0);
	}
	num = 0;
	for (i = 1; i <= n; i++)//从f1.txt中获取实数并且转换成整数存入f2.txt中
	{
		fscanf(fp1, "%lf", &num);
		tnum = (int)num;
		fprintf(fp2, "%d\n", tnum);
	}
	rewind(fp1); rewind(fp2);//归位
	tnum = 0;
	for (i = 1; i <= n; i++)//从f2.txt中读取整数并且输出到屏幕
	{
		fscanf(fp2, "%d", &tnum);
		printf("%d\n", tnum);
	}
	rewind(fp2);//归位
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

