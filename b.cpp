//#include<iostream>
//#include <graphics.h>      // ����ͼ�ο�ͷ�ļ�
//#include <conio.h>
//using namespace std;
//void map()
//{
//	int x=800,y=600,z=20;
//	initgraph(x, y);   // ������ͼ����
//	MOUSEMSG m;     //���ṹ��Ķ���
//	m=GetMouseMsg();   //��ȡ�����Ϣ
//	setbkcolor(LIGHTGRAY);  //���ñ���Ϊ��ɫ
//	cleardevice();     //���ԭ������ɫ���ܿ�����ɫ
//	
//	//������ӵ�ͼ
//	for(int i=0;i<x/z;i++)
//	{
//		setcolor(WHITE);
//		line(i*z,0,i*z,y);
//	}
//	for(int i=0;i<y/z;i++)
//	{
//		setcolor(WHITE);
//		line(0,i*z,x,i*z);
//	}
//
//	//�������̵����飬û������Ϊ0��
//	int chess[40][30];
//	for(int i=0;i<x/z;i++)
//	{
//		for(int j=0;j<y/z;j++)
//		{
//			chess[i][j]=0;
//		}
//	}
//	
//	//��ӡ����
//	while(true)
//	{
//		// ��ȡһ�������Ϣ
//		m = GetMouseMsg();
//		switch(m.uMsg)
//		{
//			case WM_LBUTTONDOWN:
//				{
//					if(m.x%z<z/2&&m.y%z<z/2)
//					{
//						fillcircle(m.x-(m.x%z),m.y-(m.y%z),z/2);//�����Բ
//					}
//
//					else if(m.x%z>z/2&&m.y%z>z/2)
//					{
//						fillcircle(m.x+(z-(m.x%z)),m.y+(z-(m.y%z)),z/2);//�����Բ
//					}
//
//					else if(m.x%z>z/2&&m.y%z<z/2)
//					{
//						fillcircle(m.x+(z-(m.x%z)),m.y-(m.y%z),z/2);//�����Բ
//					}
//
//					else if(m.x%z<z/2&&m.y%z>z/2)
//					{
//						fillcircle(m.x-(m.x%z),m.y+(z-(m.y%z)),z/2);//�����Բ
//					}
//
//				}
//				break;
//		}
//	}
//
//
//
//
//    _getch();              // �����������
//    closegraph();          // �رջ�ͼ����
//}
//
//int main()
//{
//	map();
//}