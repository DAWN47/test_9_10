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
//	printf("a��b�����Լ��Ϊ��%d", a);
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
//	printf("��������������");
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
//			printf("���Լ��Ϊ��%d", c);
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
//�����ж���
//int main()
//{
//	int year;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//		{
//			printf("%d�������ꡣ", year);
//
//		}
//		else if (year % 100 == 0)
//		{
//			printf("%d�겻�����ꡣ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d�������ꡣ", year);
//		}
//	}
//	else
//	{
//		printf("%d�겻�����ꡣ", year);
//	}
//	return 0;
//}
//շת�����
//int main()
//{
//	int m, n, t;
//	printf("�������������֣�");
//	scanf("%d%d", &m, &n);
//	/*if (m < n)
//	{
//		int a;
//		a = m;
//		m = n;
//		n = a;
//
//	}*/ //����Ҫ�ȴ�С��С��ȡ�໹�Ǵ�ģ�ֻ������һ��ѭ��
//	while (m % n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//
//
//	}
//	printf("�������Լ��Ϊ��%d", n);
//	return 0;
//}
//��С������
//int main()
//{
//	int m, n, t;
//	printf("��������������");
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
//			printf("������С��������%d", t);
//			break;
//		}
//		
//	}
//	return 0;
//}
//
// ���1000-2000�������
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
//			}//�ɺϲ���������
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
//�ж�����100-200
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




