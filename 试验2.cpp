// 试验2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	/*printf("hello world\n");*/

	int ch = 0;
	while((ch = getchar()) !=EOF)
	//while(ch = getchar() !=EOF)
	{
		putchar(ch);
	}
	//printf("%c\n",ch);
	return 0;
}

