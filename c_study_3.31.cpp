#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


/*
int gcd(int m, int n);
int main()
{
	int m, n;
	printf("Enter m,n: ");
	scanf("%d%d", &m, &n);
	printf("the biggest public division: %d", gcd(m, n));

	return 0;
}
int gcd(int m, int n)
{
	int result,temp,r;
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	r = m % n;
	while (r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	result = n;
	return result;
}
*/

/*
int prime(int n);
int main()
{
	int n;
	printf("Enter a prime number: ");
	scanf("%d", &n);
	prime(n) > 0 ? printf("yes") : printf("No");
	return 0;
}
int prime(int n)
{
	int i;
	double limit;
	limit = sqrt(n)+1;
	if (n == 1) return 0;
	else if (n == 2) return 1;
	for (i = 2; i <= limit; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
*/

/*
int sum(int m,int n);
int main()
{
	int m,n;
	printf("Enter m n: ");
	scanf("%d%d",&m ,&n);
	printf("%d", sum(m,n));
	return 0;
}
int sum(int m,int n)
{
	int i,sum=0;
	for (i=m;i<=n;i++)
	{
		sum += i;
	}
	return sum;
}
*/

/*
int max(int m, int n);
int main()
{
	int m, n;
	printf("Enter m,n: ");
	scanf("%d%d", &m, &n);
	printf("max: %d", max(m, n));

	return 0;
}
int max(int m, int n)
{
	if (m > n) return m;
	else return n;
}
*/

/*
void pyramid(int n)
{
	int i,j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++) printf(" ");
		for (j = 1; j <= i; j++) printf("%d ",i);
		printf("\n");
	}
}

int main()
{
	int n;
	void hello();
	hello();
	putchar('\n');
	printf("Enter n: ");
	scanf("%d", &n);
	pyramid(n);
	return 0;
}
void hello()
{
	printf("Hello you!");
	return;
	printf("kkkk");
}
*/

/*
//字符金字塔显示程序模块(主层)
//模块功能:显示一个指定高度由同一字符组成的金字塔
//模块目的:显示一个指定高度由同一字符组成的金字塔

//层数输入模块(一层)
int input_line();
//模块功能:获取层数的输入
//模块目的:为显示n层金字塔提供层数数据

//字符输入模块(一层)
char input_ch();
//模块功能:获取字符的输入
//模块目的:以字符做为显示金字塔的每处

//行数输出模块(一层)
void output_line(int line,char ch);
//模块功能:在屏幕上换行
//模块目的:在屏幕上换行

//字符输出模块(二层)
void output_char(int i,char ch);
//模块功能:在屏幕上输出字符
//模块目的:在屏幕上输出字符

//空格输出模块(二层)
void output_blank(int i,int line);
//模块功能:在屏幕上输出空格
//模块目的:在屏幕上输出空格

int main()
{
	int line; char ch;//声明层数和字符
	line = input_line();//获取行数输入
	ch = input_ch();//获取字符输入
	output_line(line,ch);//输出显示金字塔
}

int input_line()
{
	int line;
	printf("Enter line: ");
	scanf("%d",&line);
	getchar();
	return line;
}
char input_ch()
{
	char ch;
	printf("Enter char: ");
	scanf("%c",&ch);
	return ch;
}
void output_line(int line,char ch)
{
	int i;
	for (i = 1; i <= line; i++)
	{
		output_blank(i,line);
		output_char(i,ch);
		putchar('\n');
	}
}
void output_blank(int i,int line)
{
	int j;
	for (j = 1; j <= line-i; j++)
	{
		putchar(' ');
	}
}
void output_char(int i, char ch)
{
	int j;
	for (j = 1; j <= i; j++)
	{
		putchar(ch);
		putchar(' ');
	}
}
*/

/*
double result_real, result_imag;
int main()
{
	double imag1, imag2, real1, real2;
	void complex_prod(double imag1, double real1, double iamg2, double real2);
	void complex_add(double imag1, double real1, double imag2, double real2);

	printf("Enter the 1st complex number(real and imag): ");
	scanf("%lf%lf", &real1, &imag1);
	printf("Enter the 2nd complex number(real and imag): ");
	scanf("%lf%lf",&real2,&imag2);
	complex_prod(imag1, real1,imag2,real2);
	printf("c1*c2 = %.0f + %.0fi\n", result_real, result_imag);
	complex_add(imag1, real1, imag2, real2);
	printf("c1+c2 = %.0f + %.0fi", result_real, result_imag);

	return 0;
}
void complex_prod(double imag1,double real1,double imag2,double real2)
{
	result_real = real1*real2-imag1*imag2;
	result_imag = real1 * imag2 + real2 * imag1;
}
void complex_add(double imag1, double real1, double imag2, double real2)
{
	result_real = real1 + real2;
	result_imag = imag1 + imag2;
}
*/

/*
int c = 2;
int main()
{
	int a = 2;
	int c = 1;
	if (a == 1) printf("hh");
	else 
	{
		int b = 1;
		if (b == 1) printf("ll");
	}
	if (c == 2) printf("kk");
	return 0;
}
*/

/*
double cash=0;
void income(),void expend(),void check();
int main()
{
	int enter_number=-1;
	while (enter_number != 0)
	{
		printf("Enter your operation(1取出  2存放  3查看  0退出): ");
		scanf("%d", &enter_number);
		switch (enter_number)
		{
		case 1:expend(); break;
		case 2:income(); break;
		case 3:check(); break;
		case 0:printf("welcome next time!"); break;
		default:printf("Invalid value!"); break;
		}
	}

	return 0;
}
void income()
{
	double add;
	printf("Enter how much you want to storage: ");
	scanf("%lf", &add);
	cash += add;
}
void expend()
{
	double expend;
	printf("Enter how much you want to storage: ");
	scanf("%lf", &expend);
	cash -= expend;
}
void check()
{
	printf("%.2f\n", cash);
}
*/

