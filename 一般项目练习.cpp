#include <stdio.h>

#include <conio.h>

#include <Windows.h>



#define WIDTH		15		//游戏窗口的宽度

#define HEIGHT		15		//游戏窗口的高度



//蛇身结构体

typedef struct snakeBody

{

	int x;	//X坐标

	int y;	//Y坐标

	struct snakeBody *prev;	//指向上一个节点

	struct snakeBody *next;	//指向下一个节点

}BODY, *PBODY;



PBODY pHead = NULL;	//蛇头

PBODY pTail = NULL;	//蛇尾



//增长蛇的身体,返回1表示成功，返回0表示失败

int AddBody(int x, int y)

{

	PBODY p = (PBODY)malloc(sizeof(BODY));

	if(NULL == p)

	{

		printf("申请内存空间失败！\n");

		return 0;

	}

	p->x = x;

	p->y = y;

	p->next = pHead;

	p->prev = NULL;

	if(!pHead)//之前没有蛇头

	{

		//添加的是第一个节点

		pHead = pTail = p;//把新创建的节点作为蛇头和蛇尾

	}

	else	//之前已经有蛇头

	{

		pHead -> prev = p; //让之前的蛇头的上一节点为当前创建的新蛇身

		pHead = p;	//让当前创建的蛇身成为新的蛇头

	}		

	return 1;	

}



//删除蛇的身体（删除蛇尾）

void DelBody()

{

	if(!pTail)

	{

		printf("当前没有蛇身可删除！\n");

		return;

	}

	PBODY p = pTail;

	pTail = pTail->prev;//让倒数第二个蛇身成为新的蛇尾

	pTail->next = NULL;//切断和之前蛇尾的链接

	free(p); //释放之前尾节点的内存	

}



//销毁蛇身

void DestroySnake()

{

	PBODY p;

	int count = 0;

	while(pHead)

	{

		p = pHead;				//保存头节点的地址

		pHead = pHead->next;	//让头节点指针指向下一个节点

		free(p);				//释放之前的头节点内存

		++count;

	}

	printf("共删除节点数：%d\n", count);

}



int main()

{

	int i, j;

	for(i = 0; i < HEIGHT; ++i)

	{

		for(j = 0; j < WIDTH; ++j)

		{

			//如果是第一行或最后一行或第一列或最后一列，打印边框

			if(i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1)

				printf("※");

			else

				printf("  ");//其他情况，打印两个空格

		}

		printf("\n");//打印完一行之后进行换行

	}

	

	//添加10个蛇身

	for(i = 0; i < 10; ++i)

		AddBody(i, i);

	

	//删除3个蛇身

	for(i = 0; i < 3; ++i)

		DelBody();

	

	//销毁整条蛇

	//DestroySnake();

	

	

	

	

	return 0;

}