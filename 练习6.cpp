// 练习6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{	
	////寻找有序数组中的某一个数字下表
	//int k = 7;
	//printf("请输入需要查找的数字:>");
	//scanf("%d",&k);
	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//int left = 0;
	//int right = sz-1;
	//while(left<=right)
	//{
	//	int mid = (left + right)/2;
	//	if(arr[mid]>k)
	//	{
	//		right = mid-1;
	//	}
	//	else if(arr[mid]<k)
	//	{
	//		left = mid+1;
	//	}
	//	else
	//	{
	//		printf("找到了，下标是：%d\n",mid);
	//		break;
	//	}
	//}
	//while(left>right)
	//{
	//	printf("找不到");
	//}

	////welcome to my world!!!!!!
	////#########################
	////w#######################!
	//char arr1[] = "welcome to my world!!!!!!";
	//char arr2[] = "#########################";
	//int left = 0;
	//int right = sizeof(arr1)/sizeof(arr1[0])-1;
	//while(left<=right)
	//{
	//arr2[left] = arr1[left];
	//arr2[right] = arr1[right];
	//printf("%s\n",arr2);
	//Sleep(1000);
	//system("cls");
	//left++;
	//right--;
	//}
	//printf("%s\n",arr2);

	////三次输入密码的机会
	//int i = 0;
	//char password[20] = {0};
	//for(i=0;i<3;i++)
	//{
	//	printf("请输入密码:>");
	//	scanf("%s",&password);
	//	if(strcmp(password,"123456")==0)
	//	{
	//		printf("登陆成功");
	//		break;
	//	}
	//	else
	//	{
	//		printf("密码错误\n");
	//	}
	//}
	//if(i == 3)
	//{
	//	printf("尝试3次，退出程序");
	//}

	////从大到小输出3个数值
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d%d%d",&a,&b,&c);
	//
	//if(a<b)
	//{
	//	int ret = a;
	//	a = b;
	//	b = ret;
	//}
	//if(a<c)
	//{
	//	int ret = a;
	//	a = c;
	//	c = ret;
	//}
	//if(b<c)
	//{
	//	int ret = b;
	//	b = c;
	//	c = ret;
	//}
	//printf("%d\t%d\t%d\t",a,b,c);

	////辗转相除
	//int m = 0;
	//int n = 0;
	//scanf("%d%d",&m,&n);
	//while(m%n)
	//{
	//	int tmp = m%n;
	//	m=tmp;
	//	n=m;
	//}
	//if(m<n)
	//	n=m;
	//printf("%d",n);

	////打印1000到2000年间的闰年
	//int year =1000;
	//int count=0;
	//for(year=1000;year<=2000;year++)
	//{
	//	//能被4整除且1不能被100整除的是闰年
	//	//能被400整除是闰年
	//	if(year%4==0 && year%100!=0)
	//	{
	//		printf("%d\n",year);
	//		count++;
	//	}
	//	else if(year%400==0)
	//	{
	//		printf("%d\n",year);
	//		count++;
	//	}
	//}
	//printf("%d\n",count);

	////求出100-200之间的素数
	//int i = 0;
	//int count = 0;
	//for(i=100;i<200;i++)
	//{
	//	int j = 1;
	//	for(j=2;j<i;j++)
	//	{
	//		if(i%j==0)
	//			break;
	//	}
	//	if(i==j)
	//	{
	//		printf("%d\n",i);
	//		count++;
	//	}
	//}
	//printf("%d\n",count);

	//素数求法2

	int i = 1;
	int count = 0;
	for(i=101;i<200;i+=2)
	{
		int j = 2;
		for(j=3;j<=sqrt((float)i);j+=2)
		
			if(i%j==0)
			{
				break;
			}
			if(j>sqrt((float)i))
			{
				printf("%d\n",i);
				count++;
			}
		
	}
	printf("%d\n",count);
	return 0;
}

