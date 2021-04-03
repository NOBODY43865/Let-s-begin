// 练习9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("########################\n");
	printf("### 1.PLAY    0.EXIT ###\n");
	printf("########################\n");
}

void game()
{
	int answer = rand()%100;
	int input = 0;
	while(1)
	{
		printf("请输入数字:>\n");
		scanf("%d",&input);
		if(input > answer)
		{
			printf("猜大了");
		}
		else if(input < answer)
		{
			printf("猜小了");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	//写一个猜数字游戏
	int i = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		void test();
		printf("请选择:>");
		scanf("%d",&i);
		if(i==1)
			game();
		else if(i==0)
			break;
		else
			printf("输入错误，请重新输入\n");
	}
		while(i!=0);
	return 0;
}

