#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#pragma region 输出月份英文名称
/*
int main()
{
	int n;
	const char* month[12] = {"January","Febary","March",
		"April","May","June","July","August","June","Octable","Novenble","Decembal"};
	printf("Enter month: ");
	scanf("%d", &n);
	printf("%s", month[n - 1]);

	return 0;
}
*/
#pragma endregion

#pragma region 查找星期
/*
int main()
{
	int i,j,flag;
	char mystr[20];
	const char* str[7] = { "sunday","monday","tuesday","wensday","thursday","friday","saturday" };
	printf("Enter a string: ");
	gets_s(mystr);
	for (i = 0; i < 7; i++)
	{
		j = 0;
		flag = 1;
		while (*(str[i]+j) != '\0')
		{
			if (mystr[j] != *(str[i] + j))
			{
				flag = 0;
				break;
			}
			j++;
		}
		if (flag)
		{
			printf("Found!ID is %d", i);
			break;
		}
	}
	if (i == 7) printf("Not found");

	return 0;
}
*/
#pragma endregion

#pragma region 计算最长的字符串长度
/*
int main()
{
	int n,i,maxlen;
	const char* sp[9];
	int max_len(const char* s[], int n);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d string: ",n);
	for (i = 0; i < n; i++)
	{
		sp[i] = (const char*)malloc(10 * sizeof(char));
		scanf("%s", sp[i]);
	}
	maxlen= max_len(sp, n);
	printf("longest string's length: %d", maxlen);
	return 0;
}
int max_len(const char* s[], int n)
{
	int i, j, maxlen, len;
	for (j = 0; *(s[0] + j) != '\0'; j++);
	maxlen = j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; *(s[i] + j) != '\0'; j++);
		if (maxlen < j) maxlen = j;
	}
	return maxlen;
}
*/
#pragma endregion

