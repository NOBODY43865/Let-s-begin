// ��ϰ6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{	
	////Ѱ�����������е�ĳһ�������±�
	//int k = 7;
	//printf("��������Ҫ���ҵ�����:>");
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
	//		printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
	//		break;
	//	}
	//}
	//while(left>right)
	//{
	//	printf("�Ҳ���");
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

	////������������Ļ���
	//int i = 0;
	//char password[20] = {0};
	//for(i=0;i<3;i++)
	//{
	//	printf("����������:>");
	//	scanf("%s",&password);
	//	if(strcmp(password,"123456")==0)
	//	{
	//		printf("��½�ɹ�");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�������\n");
	//	}
	//}
	//if(i == 3)
	//{
	//	printf("����3�Σ��˳�����");
	//}

	////�Ӵ�С���3����ֵ
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

	////շת���
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

	////��ӡ1000��2000��������
	//int year =1000;
	//int count=0;
	//for(year=1000;year<=2000;year++)
	//{
	//	//�ܱ�4������1���ܱ�100������������
	//	//�ܱ�400����������
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

	////���100-200֮�������
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

	//������2

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

