// 练习7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<windows.h>
#include<math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	//int count = 6;
	//printf("%d\n",count);
	//system("pause");

	//int i = 6;
	//system("pause");
	//float a = sqrt((float)i);
	//i = a;
	//printf("%d\n",i);

	////求出100-200的素数并且统计个数
	//int arr[100] = {0};
	//int i = 0;
	//int j = 1;
	//int count = 0;
	//for(i=0;i<100;i++)
	//	arr[i] = i+101;
	//for(i=0;i<100;i++)
	//{
	//	for(j=2;j<=sqrt((float)arr[i]);j++)
	//		if (arr[i]%j==0)
	//			arr[i]=0;			
	//}
	//for(i=0;i<100;i++)
	//	if(arr[i]!=0)
	//	{
	//		printf("%d\n",arr[i]);
	//		count++;
	//	}
	//printf("count = %d\n",count);

	//float sum = 0.0;
	///*float ret = 0.0;*/
	//int fl = 1;
	//for(int i=1;i<=100;i++)
	//{
	//	/*ret = 1.0/i;*/
	//	sum +=fl* 1.0/i;
	//	fl=-fl;
	//}
	//printf("%lf\n",sum);

	////寻找最大值
	//int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	//int max = arr[0];
	//int i = 0;
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//for(i=0;i<sz;i++)
	//{
	//	if(arr[i]>max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n",max);

	////九九乘法口诀表
	//int i=1;
	//int j=1;
	//int m=1;
	//for(i=1;i<=9;i++)
	//	{
	//		for(j=1;j<=i;j++)
	//		{
	//			m=i*j;
	//			printf("%d*%d=%-2d ",i,j,m);
	//		}
	//		printf("\n");
	//	}

	////二分查找
	//int arr[]={1,2,3,4,5,6,7,8,9,10};
	//int k = 14;
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//int left = 0;
	//int right = sz-1;
	//while(left<=right)
	//{
	//	int mid = (left+right)/2;
	//	if(arr[mid]<k)
	//		left = mid;
	//	if(arr[mid]>k)
	//		right = mid;

	//	if(arr[mid]==k)
	//	{
	//		printf("找到了，下标为%d\n",mid);
	//		break;
	//	}
	//	if(left = right)
	//	{
	//		printf("不存在\n");
	//		break;
	//	}
	//}
	
	////计算n的阶乘
	//int n = 0;
	//scanf("%d",&n);
	//int ret = 1;
	//for(int i=1;i<=n;i++)
	//	ret= ret*i;
	//printf("%d\n",ret);	
	
	////计算n的阶乘递加
	//int n = 0;
	//scanf("%d",&n);
	//int ret = 1;
	//int sum = 0;
	//for(int i=1;i<=n;i++)
	//{
	//	ret= ret*i;
	//	sum = sum+ret;
	//}
	//printf("%d\n",sum);

	////多字符向中间靠拢
	//char arr1[] = "hellow world!!!";
	//char arr2[] = "###############";
	//int left = 0;
	//int right = strlen(arr2)-1;
	//while(left<right)
	//{
	//	arr2[left]=arr1[left];
	//	arr2[right]=arr1[right];
	//	left++;
	//	right--;
	//	printf("%s\n",arr2);
	//	Sleep(1000);
	//	system("cls");
	//}


	return 0;
}

