//#include<iostream>
//#include <graphics.h>      // 引用图形库头文件
//#include <conio.h>
//using namespace std;
//void map()
//{
//	int x=800,y=600,z=20;
//	initgraph(x, y);   // 创建绘图窗口
//	MOUSEMSG m;     //鼠标结构体的定义
//	m=GetMouseMsg();   //获取鼠标信息
//	setbkcolor(LIGHTGRAY);  //设置背景为蓝色
//	cleardevice();     //清除原来背景色才能看见蓝色
//	
//	//输出格子地图
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
//	//定义棋盘的数组，没有棋子为0；
//	int chess[40][30];
//	for(int i=0;i<x/z;i++)
//	{
//		for(int j=0;j<y/z;j++)
//		{
//			chess[i][j]=0;
//		}
//	}
//	
//	//打印棋子
//	while(true)
//	{
//		// 获取一条鼠标消息
//		m = GetMouseMsg();
//		switch(m.uMsg)
//		{
//			case WM_LBUTTONDOWN:
//				{
//					if(m.x%z<z/2&&m.y%z<z/2)
//					{
//						fillcircle(m.x-(m.x%z),m.y-(m.y%z),z/2);//画填充圆
//					}
//
//					else if(m.x%z>z/2&&m.y%z>z/2)
//					{
//						fillcircle(m.x+(z-(m.x%z)),m.y+(z-(m.y%z)),z/2);//画填充圆
//					}
//
//					else if(m.x%z>z/2&&m.y%z<z/2)
//					{
//						fillcircle(m.x+(z-(m.x%z)),m.y-(m.y%z),z/2);//画填充圆
//					}
//
//					else if(m.x%z<z/2&&m.y%z>z/2)
//					{
//						fillcircle(m.x-(m.x%z),m.y+(z-(m.y%z)),z/2);//画填充圆
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
//    _getch();              // 按任意键继续
//    closegraph();          // 关闭绘图窗口
//}
//
//int main()
//{
//	map();
//}