// ��ϰ8.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
void menu()
	{
		printf("######################################\n");
		printf("�Ƿ������Ϸ:> 1��������Ϸ 0���˳���Ϸ\n");
		printf("######################################\n");
	}
void game()
	{
		//���������
		/*rand();*/
	}
int _tmain(int argc, _TCHAR* argv[])
{
	int input = 0;
	do
	{
		menu();
		printf("������:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�������\n");
				break;
		}
	}while(input);
	return 0;
}

