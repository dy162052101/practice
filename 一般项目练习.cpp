#include <stdio.h>

#include <conio.h>

#include <Windows.h>



#define WIDTH		15		//��Ϸ���ڵĿ��

#define HEIGHT		15		//��Ϸ���ڵĸ߶�



//����ṹ��

typedef struct snakeBody

{

	int x;	//X����

	int y;	//Y����

	struct snakeBody *prev;	//ָ����һ���ڵ�

	struct snakeBody *next;	//ָ����һ���ڵ�

}BODY, *PBODY;



PBODY pHead = NULL;	//��ͷ

PBODY pTail = NULL;	//��β



//�����ߵ�����,����1��ʾ�ɹ�������0��ʾʧ��

int AddBody(int x, int y)

{

	PBODY p = (PBODY)malloc(sizeof(BODY));

	if(NULL == p)

	{

		printf("�����ڴ�ռ�ʧ�ܣ�\n");

		return 0;

	}

	p->x = x;

	p->y = y;

	p->next = pHead;

	p->prev = NULL;

	if(!pHead)//֮ǰû����ͷ

	{

		//��ӵ��ǵ�һ���ڵ�

		pHead = pTail = p;//���´����Ľڵ���Ϊ��ͷ����β

	}

	else	//֮ǰ�Ѿ�����ͷ

	{

		pHead -> prev = p; //��֮ǰ����ͷ����һ�ڵ�Ϊ��ǰ������������

		pHead = p;	//�õ�ǰ�����������Ϊ�µ���ͷ

	}		

	return 1;	

}



//ɾ���ߵ����壨ɾ����β��

void DelBody()

{

	if(!pTail)

	{

		printf("��ǰû�������ɾ����\n");

		return;

	}

	PBODY p = pTail;

	pTail = pTail->prev;//�õ����ڶ��������Ϊ�µ���β

	pTail->next = NULL;//�жϺ�֮ǰ��β������

	free(p); //�ͷ�֮ǰβ�ڵ���ڴ�	

}



//��������

void DestroySnake()

{

	PBODY p;

	int count = 0;

	while(pHead)

	{

		p = pHead;				//����ͷ�ڵ�ĵ�ַ

		pHead = pHead->next;	//��ͷ�ڵ�ָ��ָ����һ���ڵ�

		free(p);				//�ͷ�֮ǰ��ͷ�ڵ��ڴ�

		++count;

	}

	printf("��ɾ���ڵ�����%d\n", count);

}



int main()

{

	int i, j;

	for(i = 0; i < HEIGHT; ++i)

	{

		for(j = 0; j < WIDTH; ++j)

		{

			//����ǵ�һ�л����һ�л��һ�л����һ�У���ӡ�߿�

			if(i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1)

				printf("��");

			else

				printf("  ");//�����������ӡ�����ո�

		}

		printf("\n");//��ӡ��һ��֮����л���

	}

	

	//���10������

	for(i = 0; i < 10; ++i)

		AddBody(i, i);

	

	//ɾ��3������

	for(i = 0; i < 3; ++i)

		DelBody();

	

	//����������

	//DestroySnake();

	

	

	

	

	return 0;

}