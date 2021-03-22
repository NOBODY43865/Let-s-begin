#define _CRT_SECURE_NO_WARNINGS 1

////说第一句话
//#include<stdio.h>
//int main()
//{
//	printf("你好世界\n");
//	printf("hello world");
//	return 0;
//}
//修改连接器子系统为控制台后，仍然需要使用CTRL+F5运行程序，单F5依旧闪退

//写一个带有全局变量的程序
//#include <stdio.h>
//int global = 2021;
//int main()
//{
//	int local = 2022;
//	int global = 2022;
//	printf("global = %d\n",global);
//	return 0;
//}
//优先打印2022

////计算机加法1
//#include<stdio.h>
//int main ()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个和:>");
//	scanf("%d %d", &num1,&num2);
//	sum = num1 + num2;
//	printf ("sum = %d\n",sum);
//	int i = 0;
//	scanf("%d",&i);
//	if (i == 0)
//		return 0;
//	else if(i !=0)
//		printf("请输入两个和:>");
//		scanf("%d %d", &num1,&num2);
//	sum = num1 + num2;
//		printf ("sum = %d\n",sum);
//		return 0;
//}

////计算机加法2
//#include<stdio.h>
//int main ()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个和:>");
//	scanf("%d\n%d\n", &num1,&num2);
//	sum = num1 + num2;
//	printf ("sum = %d\n",sum);
//	int i = 0;
//	scanf("%d",&i);
//	if (i == 0)
//		return 0;
//	else if(i !=0)
//		printf("请输入两个和:>");
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
//scanf("%c %c",&a,&b);/*注意两个%c之间的空格*/
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
//	char arr2[] = {'b', 'i', 't'};//缺少结束符号出现乱码
//	char arr3[] = {'b', 'i', 't', '\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0; 
//}

//加法函数
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
//	printf("你回去敲代码吗？（选择1 or 0）:>");
//	scanf("%d",&coding);
//	if(coding == 1)
//	{
//		printf("坚持，你会有回报\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while(line<=20000)
//	{
//		line++;
//		printf("我要继续努力敲代码 %d\n",line);
//	}
//	if(line>20000)
//		printf("未来的机会\n");
//	return 0;
//}

////求两个数的较大值
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

