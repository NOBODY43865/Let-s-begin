// ��ϰ9.cpp : �������̨Ӧ�ó������ڵ㡣
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
		printf("����������:>\n");
		scanf("%d",&input);
		if(input > answer)
		{
			printf("�´���");
		}
		else if(input < answer)
		{
			printf("��С��");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	//дһ����������Ϸ
	int i = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		void test();
		printf("��ѡ��:>");
		scanf("%d",&i);
		if(i==1)
			game();
		else if(i==0)
			break;
		else
			printf("�����������������\n");
	}
		while(i!=0);
	return 0;
}

