#define _CRT_SECURE_NO_WARNINGS 1

////˵��һ�仰
//#include<stdio.h>
//int main()
//{
//	printf("�������\n");
//	printf("hello world");
//	return 0;
//}
//�޸���������ϵͳΪ����̨����Ȼ��Ҫʹ��CTRL+F5���г��򣬵�F5��������

//дһ������ȫ�ֱ����ĳ���
//#include <stdio.h>
//int global = 2021;
//int main()
//{
//	int local = 2022;
//	int global = 2022;
//	printf("global = %d\n",global);
//	return 0;
//}
//���ȴ�ӡ2022

////������ӷ�1
//#include<stdio.h>
//int main ()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("������������:>");
//	scanf("%d %d", &num1,&num2);
//	sum = num1 + num2;
//	printf ("sum = %d\n",sum);
//	int i = 0;
//	scanf("%d",&i);
//	if (i == 0)
//		return 0;
//	else if(i !=0)
//		printf("������������:>");
//		scanf("%d %d", &num1,&num2);
//	sum = num1 + num2;
//		printf ("sum = %d\n",sum);
//		return 0;
//}

////������ӷ�2
//#include<stdio.h>
//int main ()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("������������:>");
//	scanf("%d\n%d\n", &num1,&num2);
//	sum = num1 + num2;
//	printf ("sum = %d\n",sum);
//	int i = 0;
//	scanf("%d",&i);
//	if (i == 0)
//		return 0;
//	else if(i !=0)
//		printf("������������:>");
//		scanf("%d\n%d\n", &num1,&num2);
//	sum = num1 + num2;
//		printf ("sum = %d\n",sum);
//		return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//    int a,b,c;
//    printf("Give me the value of a,b,c seperated with whitespaces:\n");
//    scanf("%d%d%d",&a,&b,&c);
//    printf("a=%d,b=%d,c=%d\n",a,b,c);
//    return 0;
//}

//#include <stdio.h>
// 
//int main(void)
// 
//{
// 
//char a,b;
//     
//printf("input character a,b\n");
// 
//scanf("%c %c",&a,&b);/*ע������%c֮��Ŀո�*/
// 
//printf("\n%c%c\n",a,b);
// 
//return 0;
// 
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = {'b', 'i', 't'};//ȱ�ٽ������ų�������
//	char arr3[] = {'b', 'i', 't', '\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0; 
//}

//�ӷ�����
//#include<stdio.h>
// int Add(int x , int y)
// {
//	 return x + y;
// }
//
// int main()
// {
//	 printf("%d\n",Add(1,2));
//	 return 0;
// }

//#include<stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//	scanf("%d",&coding);
//	if(coding == 1)
//	{
//		printf("��֣�����лر�\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("�������\n");
//	int line = 0;
//	while(line<=20000)
//	{
//		line++;
//		printf("��Ҫ����Ŭ���ô��� %d\n",line);
//	}
//	if(line>20000)
//		printf("δ���Ļ���\n");
//	return 0;
//}

////���������Ľϴ�ֵ
//#include<stdio.h>
//int Max(int a,int b)
//{
//	if(a>=b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int x=0;
//	int y=0;
//	int max=0;
//	scanf("%d%d",&x,&y);
//	max=Max(x,y);
//	printf("%d",max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int d[][4] = {1,2,3,4,5,6,7,8,9,10,11};
//	int*p[3],j;
//	for(j=0;j<3;j++)
//		p[j] = d[j];
//	printf("%5d %5d",*(*(p+2)+3),*(*(p+1)+1));
//	return 0;
//}

