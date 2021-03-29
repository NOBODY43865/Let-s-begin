// 练习8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
void menu()
	{
		printf("######################################\n");
		printf("是否继续游戏:> 1、继续游戏 0、退出游戏\n");
		printf("######################################\n");
	}
void game()
	{
		//生成随机数
		/*rand();*/
	}
int _tmain(int argc, _TCHAR* argv[])
{
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误\n");
				break;
		}
	}while(input);
	return 0;
}

