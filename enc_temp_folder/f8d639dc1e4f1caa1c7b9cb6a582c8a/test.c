#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int remainder;
//	if (a > b)
//	{
//		do
//		{
//			remainder = a % b;
//			a = remainder;
//			remainder = a % b;
//		} while (remainder != 0);
//	}
//	else if(b>a)
//	{
//		do
//		{
//			remainder = a % b;
//			a = remainder;
//			remainder = a % b;
//		} while (remainder!=0);
//	}
//	else
//	{
//		
//	}
//	printf("a和b的最大公约数为：%d", a);
//	
//	return 0;
//}
//


//int main() {
//
//    double price;
//    scanf("%df", &price);
// 
//    if (price > 5000)
//    {
//        price *= 0.6;
//        printf("%.1df", price);
//    }
//    else if (price > 2000)
//    {
//        price *= 0.7;
//        printf("%.1df", price);
//    }
//    else if (price > 500)
//    {
//        price *= 0.8;
//        printf("%1.df", price);
//    }
//    else if (price > 100)
//    {
//        price *= 0.9;
//        printf("%.1df", price);
//    }
//
//    // write your code here.......
//
//
//   
//    return 0;
//}
//
//int main()
//{
//	printf("请输入两个数。");
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		c = a;
//	}
//	else
//	{
//		c = b;
//	}
//	for (;c >= 1;c--)
//	{
//		if (a % c == 0 && b % c == 0)
//		{
//			printf("最大公约数为：%d", c);
//				break;
//		}
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	sscanf("%d %d", &a, &b);
//	do
//	{
//		c = a % b;
//		a = b;
//		b = c;
//		c = a % b; 
//	} while (c!=0);
//}
//闰年判断器
//int main()
//{
//	int year;
//	printf("请输入年份：");
//	scanf("%d", &year);
//	if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//		{
//			printf("%d年是闰年。", year);
//
//		}
//		else if (year % 100 == 0)
//		{
//			printf("%d年不是闰年。", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d年是闰年。", year);
//		}
//	}
//	else
//	{
//		printf("%d年不是闰年。", year);
//	}
//	return 0;
//}
//辗转相除法
//int main()
//{
//	int m, n, t;
//	printf("请输入两个数字：");
//	scanf("%d%d", &m, &n);
//	/*if (m < n)
//	{
//		int a;
//		a = m;
//		m = n;
//		n = a;
//
//	}*/ //不需要比大小，小的取余还是大的，只不过多一次循环
//	while (m % n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//
//
//	}
//	printf("二者最大公约数为：%d", n);
//	return 0;
//}
//最小公倍数
//int main()
//{
//	int m, n, t;
//	printf("请输入两个数：");
//	scanf("%d%d", &m, & n);
//	if (m > n)
//	{
//		t = m;
//	}
//	else
//	{
//		t = n;
//	}
//	for (;;t++)
//	{
//		if (t % m == 0 && t % n == 0)
//		{
//			printf("二者最小公倍数是%d", t);
//			break;
//		}
//		
//	}
//	return 0;
//}
//
// 输出1000-2000年的闰年
//int main()
//{
//	int year;
//	int i;
//	for (year = 1000, i=0;year >= 1000 && year <= 2000;year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d\n", year);
//				i++;
//			}//可合并两个条件
//		}
//			
//		 if (year % 400 == 0)
//			{
//				printf("%d\n", year);
//				i++;
//			}
//		 
//		
//	}
//	printf("%d", i);
//	return 0;
//}
//
//
//判断素数100-200
int main()
{
	int a, b;
	for (a = 100;a <= 200;a++)
	{
		for (b = 2;b < 200;b++)
		{
			if (a % b==0)
			{
				break;
			}
		}
		if (b == a)
		{
			printf("%d\t", a);
		}

	}
	return 0;
}




