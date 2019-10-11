//#include<iostream>
//#include<conio.h>
//#include<math.h>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
////void question_1()
////{
////	int i;
////	while(1)
////	{
////		cin>>i;
////		if(i<1000&&i>0)
////		{
////			int a=i/100;
////			int b=(i-((i/100)*100))/10;
////			int c=i%10;
////			cout<<a<<":"<<b<<":"<<c<<endl;
////			if(a*a*a+b*b*b+c*c*c==i)
////			{cout<<i<<"是水仙花数"<<endl;}
////		}
////		else
////		{
////			cout<<"error!"<<endl;
////		}
////		cin.clear();
////		cin.get();
////		char ch;
////		cin.get(ch);
////		if(ch=='k')
////		{
////			system("cls");
////			for(int j=100;j<1000;j++)
////			{
////				int a1=j/100;
////				int b1=(j-((j/100)*100))/10;
////				int c1=j%10;
////				if(a1*a1*a1+b1*b1*b1+c1*c1*c1==j)
////				{cout<<j<<"是水仙花数"<<endl;}
////			}
////		}
////	}
////}
////void question_2()
////{
////	int i;
////	int j=1;
////	cin>>i;
////	for(;j<=i;)
////	{
////		if(i%j==0&&j!=1)
////		{
////			i=i/j;
////			cout<<j<<endl;
////			j=1;
////		}
////		else
////		{
////			j++;
////		}
////		if(i==j)
////		{
////			cout<<j<<endl;
////			break;
////		}
////	}
////}
////void question_3()
////{
////	char ch;
////	double grade;
////	cin>>grade;
////	if(grade>-1&&grade<101)
////	{
////		ch=(grade>90||grade==90)?'a':((grade>59&&grade<90)?'b':'c');
////		cout<<ch<<endl;
////	}
////	else
////		cout<<"error"<<endl;
////}
////void question_4()
////{
////	int a,b;
////	while((cin>>a>>b)!=NULL)
////	{
////		
////		if(a<b)
////		{
////			int temp=a;
////			a=b;
////			b=temp;
////		}
////
////		int a1=0;
////		int b1=a*b;
////
////		int t=0;
////		while(b!=0)
////		{
////			t=a%b;
////			a=b;
////			b=t;
////		}
////		a1=a;
////		b1=b1/a1;
////		cout<<"最大公约数："<<a1<<" ||  最小公倍数："<<b1<<endl;
////	}
////	
////}
////void question_5()
////{
////	char ch;
////	int a=0;
////	int b=0;
////	cin.get(ch);
////	while(ch!='\n')
////	{
////		if(ch==' ')
////			a++;
////		else
////			b++;
////		cin.get(ch);
////	}
////	cout<<"空格的个数"<<a<<" 字符的个数"<<b<<endl;
////}
////void question_6()
////{
////	int a=2;
////	int b=0;
////	int n;
////	cin>>n;
////	for(double i=0;i<n;i++)
////	{
////		b=b+a*pow(10,i);
////		cout<<b<<endl;
////	}
////	cout<<b<<endl;
////}
////void question_7()
////{
////	
////	for(int a=1;a<1000;a++)
////	{
////		int b=0;
////		for(int i=1;i<a;i++)
////		{
////			if(a%i==0)
////			{
////				b=b+i;
////			}
////		}
////		if(b==a)
////		{
////			cout<<"完数："<<b<<endl;
////		}
////	}
////}
////void question_8()
////{
////	double a=10;
////	double b=0;
////	int c=0;
////	while(c<10)
////	{
////		a=a/2;
////		b=b+a;
////		c++;
////	}
////	cout<<"第十次弹起高度: "<<a<<endl;
////	cout<<"十次经过的路程："<<b<<endl;
////}
////void question_9()
////{
////	int d=0;
////	int a=0;
////	int b=0;
////	int c=0;
////	for(int i=1;i<=4;i++)
////	{
////		a=i*100;
////		for(int j=1;j<=4;j++)
////		{
////			if(i!=j)
////			{
////				b=j*10;
////				for(int k=1;k<=4;k++)
////				{
////					if(k!=j)
////					{
////						c=a+b+k;
////						cout<<c<<endl;
////						d++;
////					}
////				}
////			}
////		}
////	}
////	cout<<d<<endl;
////}
////void question_10()
////{
////	long int I;
////	int a;
////	int b;
////	int c;
////	int d;
////	int e;
////	int f;
////	double bonus;
////	cin>>I;
////	if(I<=10)
////	{
////		bonus=I*0.1;
////	}
////	if(I>10&&I<=20)
////	{
////		bonus=(I-10)*0.075+10*0.1;	
////	}
////	if(I>20&&I<=40)
////	{
////		bonus=(I-20)*0.05+10*0.1+10*0.075;
////	}
////	if(I>40&&I<=60)
////	{
////		bonus=(I-40)*0.03+10*0.1+10*0.075+20*0.05;
////	}
////	if(I>60&&I<=100)
////	{
////		bonus=(I-60)*0.015+10*0.1+10*0.075+20*0.05+20*0.03;
////	}
////	if(I>100)
////	{
////		bonus=(I-100)*0.01+10*0.1+10*0.075+20*0.05+20*0.03+40*0.015;
////	}
////	cout<<"bonus（单位:万元）："<<bonus<<endl;
////
////}
////void question_11()
////{
////	int a;
////	int b;
////	for(double i=0;i<100000;i++)
////	{
////		a=sqrt(i+100);
////		b=sqrt(i+268);
////		if(a*a==i+100&&b*b==i+268)
////		{
////			cout<<a*a<<endl;
////		}
////	}
////}
////void question_12()
////{
////	int year;
////	int month;
////	int day;
////	int day1;
////	int a=0;
////	cin>>year>>month>>day1;
////	for(int i=1;i<=month;i++)
////	{
////		if((year%4==0&&year%100!=0)||year%400==0)
////		{
////			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
////				{day=31;}
////			if(i==2)
////				{day=29;}
////			if(i==4||i==6||i==9||i==11)
////				{day=30;}
////		}
////		else
////		{
////			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
////				{day=31;}
////			if(i==2)
////				{day=28;}
////			if(i==4||i==6||i==9||i==11)
////				{day=30;}
////		}
////		if(month>i)
////		{
////			a=a+day;
////		}
////		cout<<i<<"month "<<day<<"day"<<endl;
////	}
////	cout<<a+day1<<"day"<<endl;
////}
////void question_13()
////{
////	double x[3];
////	double temp;
////	for(int i=0;i<3;i++)
////	{
////		cin>>x[i];
////	}
////	for(int i=0;i<3;i++)
////	{
////		if(x[i]>x[i+1])
////		{
////			temp=x[i];
////			x[i]=x[i+1];
////			x[i+1]=temp;
////		}
////	}
////	for(int i=0;i<3;i++)
////	{
////		cout<<x[i]<<" ";
////	}
////
////
////	
////}
////void question_14()
////{
////	for(int i=1;i<10;i++)
////	{
////		for(int j=1;j<=i;j++)
////		{
////			cout<<i<<"X"<<j<<"="<<i*j<<"\t";
////		}
////		cout<<endl;
////	}
////}
////void question_15()
////{
////	int a=1;
////	for(int i=0;i<9;i++)
////	{
////		a=(a+1)*2;
////		cout<<a<<endl;
////	}
////}
////void question_16()
////{
////	int i,j,k;
////	int a=1,b=2,c=3;
////	for(i=1;i<=3;i++)
////	{
////		for(j=1;j<=3;j++)
////		{
////			if(i!=j)
////			{
////				for(k=1;k<=3;k++)
////				{
////					if(i!=k&&j!=k)
////					{
////						if(i!=1&&i!=3&&k!=3)
////						{
////							cout<<"a->"<<"x"<<endl;
////							cout<<"b->"<<"y"<<endl;
////							cout<<"c->"<<"z"<<endl;
////						}
////					}
////				}
////			}
////		}
////	}
////
////}
////void question_17()
////{
////	int tag=0;
////	for(int i=-6;i<=6;i++)
////	{
////		for(int j=-6;j<=6;j++)
////		{
////			if(i<=0)
////			{
////				if(tag>=j&&-tag<=j)
////					cout<<"* ";
////				else
////					cout<<"  ";
////			}
////			else
////			{
////				if(tag==j||-tag==j)
////					cout<<"* ";
////				else
////					cout<<"  ";
////			}
////		}
////		if(i<0)
////		{
////			tag++;
////		}
////		else
////		{
////			tag--;
////		}
////		cout<<endl;
////	}
////}
////void question_18()
////{
////	int x=2,y=1;
////	int t=0,n=0;
////	double a=0;
////	for(int i=0;i<20;i++)
////	{
////		a=a+x/y;
////		n=x;
////		x=x+y;
////		y=n;
////	}
////	cout<<a<<endl;
////}
////void question_19()
////{
////	long long int s=0,n,a=1;
////	for(n=1;n<=20;n++)
////	{
////		a=n*a;
////		s=a+s;
////		cout<<a<<endl;
////	}
////	cout<<s<<endl;
////}
////int jie(int n)
////{
////	if(n==0)
////		return 1;
////	else
////		return jie(n-1)*n;
////}
////void question_20()
////{
////	int n=5;
////	jie(n);
////	cout<<jie(n);
////}
////int age(int m,int n)
////{
////	if(m==1)
////		return 10;
////	else
////		return age(m-1,n)+n;
////
////}
////void question_21()
////{
////	int n=2,m=5;
////	cout<<age(m,n);
////}
////void question_22()
////{
////	int a;
////	int b=10;
////	int c=1;
////	int d[100];
////	cin>>a;
////	while(1)
////	{
////		if(a/b!=0)
////		{
////			c++;
////		}
////		if(a/b<=0)
////		{
////			break;
////		}
////		b=b*10;
////	}
////	for(int i=0;i<c;i++)
////	{
////		d[i]=a%10;
////		a=a/10;
////		cout<<d[i]<<" ";
////	}
////	for(int i=0;i<c-1;i++)
////	{
////		for(int j=0;j<c-1-i;j++)
////		{
////			if(d[j]<d[j+1])
////			{
////				int temp=d[j];
////				d[j]=d[j+1];
////				d[j+1]=temp;
////			}
////		}
////	}
////	cout<<endl;
////	for(int i=0;i<c;i++)
////	{
////		cout<<d[i]<<" ";
////	}
////	cout<<endl;
////	cout<<c<<endl;
////
////}
////void question_23()
////{
////	string a;
////	const char *p=a.c_str();
////	int c=0;
////	cin>>a;
////	for(int i=0;i<a.length();i++)
////		cout<<p[i]<<endl;
////	for(int i=0;i<a.length()/2;i++)
////	{
////		if(p[i]!=p[a.length()-i-1])
////		{
////			c++;
////		}
////		cout<<p[i]<<endl;
////	}
////	if(c==0)
////	{cout<<"loop!"<<endl;}
////	else
////	{cout<<"no loop!"<<endl;}
////	
////}
////void question_24()
////{
////	char a;
////	while((cin>>a)!=NULL)
////	{
////		switch(a)
////		{
////			case 'M':cout<<"Monday";break;
////			case 'T':
////				{
////					cin>>a;
////					if(a=='u'||a=='U')
////						cout<<"Tuesday";
////					if(a=='h'||a=='H')
////						cout<<"Thurday";
////				}break;
////			case 'W':cout<<"Wedenday";break;
////			case 'F':cout<<"Friday";break;
////			case 'S':
////				{
////					cin>>a;
////					if(a=='t'||a=='T')
////						cout<<"Staurday";
////					if(a=='U'||a=='u')
////						cout<<"Sunday";
////				}
////
////
////				case 'm':cout<<"Monday";break;
////			case 't':
////				{
////					cin>>a;
////					if(a=='u'||a=='U')
////						cout<<"Tuesday";
////					if(a=='h'||a=='H')
////						cout<<"Thurday";
////				}break;
////			case 'w':cout<<"Wedenday";break;
////			case 'f':cout<<"Friday";break;
////			case 's':
////				{
////					cin>>a;
////					if(a=='t'||a=='T')
////						cout<<"Staurday";
////					if(a=='U'||a=='u')
////						cout<<"Sunday";
////				}
////
////			default:
////				cout<<"error"<<endl;
////		}
////	}
////}
////void question_25()
////{
////	for(int i=1;i<100;i++)
////	{
////		int c=0;
////		for(int j=1;j<=i;j++)
////		{
////			if(i%j==0)
////			{
////				c++;
////			}
////		}
////		if(c==2)
////		{
////			cout<<i<<endl;
////		}
////	}
////}
//void question_26()
//{
//	int a[10];
//	int min;
//	for(int i=0;i<10;i++)
//		cin>>a[i];
//	for(int i=0;i<10;i++)
//	{
//		min=i;
//		for(int j=i;j<10;j++)
//		{
//			if(a[min]>a[j])
//			{
//				min=j;
//			}
//		}
//		int temp=a[i];
//		a[i]=a[min];
//		a[min]=temp;
//		cout<<a[i]<<" ";
//	}
//}
//void question_27()
//{
//	int a[3][3];
//	int b=0;
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			if(i==j)
//			{
//				b=b+a[i][j];
//			}
//		}
//	}
//	cout<<b;
//}
//void question_28()
//{/*
//	int x=10;
//	int a[x]={1,2,3,4,55,66,77,88,99,100};
//	int b;
//	cin>>b;
//	for(int i=9;i>0;i--)
//	{ 
//		if(b>a[i])
//		{
//			a[i+1]=b;
//		}
//	}
//	for(int i=0;i<x;i++)
//		cout<<a[i]<<" ";*/
//}
//void question_29()
//{
//	int a[10]={1,2,3,4,5,6,7,8,9,0};
//	for(int i=9;i>=0;i--)
//		cout<<a[i]<<" ";
//}
//void question_30()
//{
//	int n;
//	int a[20][20];
//	while(1)
//	{
//		cin>>n;
//		if(n>20||n<0)
//			cout<<"error!"<<endl;
//		else
//			break;
//	}
//	for(int i=1;i<=n;i++)
//		a[i][1]=a[i][i]=1;
//	for(int i=3;i<=n;i++)
//	{
//		for(int j=2;j<=i-1;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n-i;j++)
//			cout<<"\t";
//		for(int k=1;k<=i;k++)
//			cout<<a[i][k]<<"\t";
//		cout<<endl;
//	}
//
//}
//void question_31()
//{
//	int a[3];
//	int min;
//	for(int i=0;i<3;i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=0;i<3;i++)
//	{
//		min=i;
//		for(int j=i;j<3;j++)
//		{
//			if(a[min]>a[j])
//			{
//				min=j;
//
//			}
//		}
//		int temp=a[i];
//		a[i]=a[min];
//		a[min]=temp;
//		cout<<a[i]<<" ";
//	}
//}
//void question_32()
//{
//	int a[6];
//	int min=0,max=0;
//	for(int i=0;i<6;i++)
//	{
//		cin>>a[i];
//	}
//	for(int j=0;j<6;j++)
//	{
//		if(a[min]>a[j])
//		{
//			min=j;
//		}
//	}
//	for(int j=0;j<6;j++)
//	{
//		if(a[max]<a[j])
//		{
//			max=j;
//		}
//	}
//	cout<<a[min]<<" "<<a[max]<<endl;
//	int temp=a[max];
//	a[max]=a[0];
//	a[0]=temp;
//	int temp_1=a[min];
//	a[min]=a[5];
//	a[5]=temp_1;
//	for(int i=0;i<6;i++)
//		cout<<a[i]<<" ";
//}
//void question_33()
//{
//	
//	int a[10];
//	int b[10];
//	int n;
//	int m;
//	int k;
//	cout<<"数字个数"<<endl;
//	cin>>n;
//	cout<<"移动几位"<<endl;
//	cin>>m;
//	for(int i=0;i<n;i++)
//		cin>>a[i];
//	for(int i=0;i<n;i++)
//	{
//		k=i-m;
//		if(k<0)
//		{
//			k=k+n;
//		}
//		b[k]=a[i];
//	}
//	for(int i=0;i<n;i++)
//		cout<<b[i]<<" ";
//}
//void question_34()
//{
//	int  a[100];
//	int n=0;
//	int m=0;
//	int l=1;
//	int k=0;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		a[i]=i;
//	}
//	while(m<n-1)
//	{
//		if(a[l]!=0)
//			k++;
//		if(k==3)
//		{
//			a[l]=0;
//			k=0;
//			m++;
//		}
//		l++;
//		if(l==n+1)
//		{
//			l=1;
//		}
//	}
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//}
//void question_35()
//{
//	string a;
//	cin>>a;
//	cout<<a.length();
//}
//double *ji(double n)
//{
//	double *data=NULL;
//	double a=0;
//	data=&a;
//	for(int i=1;i<=n;i++)
//	{
//		if(i%2==0)
//		{
//			*data=*data+i;
//		}
//	}
//	return data;
//
//}
//double *ou(double n)
//{
//	double *data=NULL;
//	double a=0;
//	data=&a;
//	for(int i=1;i<=n;i++)
//	{
//		if(i%2!=0)
//		{
//			*data=*data+i;
//		}
//	}
//	return data;
//
//}
//void question_36()
//{
//	int n;
//	cin>>n;
//	if(n%2!=0)
//	{
//		double *f=ji(n);
//		cout<<*f<<endl;
//	}
//	else
//	{
//		double *f1=ou(n);
//		cout<<*f1<<endl;
//	}
//}
//void question_37()
//{
//	string a;
//	cin>>a;
//	sort(a.begin(),a.end());
//	cout<<a;
//}
//
//int main()
//{
//	//question_1();
//	//question_2();
//	//question_3();
//	//question_4();
//	//question_5();
//	//question_6();
//	//question_7();
//	//question_8();
//	//question_9();
//	//question_10();
//	//question_11();
//	//question_12();
//	//question_13();
//	//question_14();
//	//question_15();
//	//question_16();
//	//question_17();
//	//question_18();
//	//question_19();
//	//question_20();
//	//question_21();
//	//question_22();
//	//question_23();
//	//question_24();
//	//question_25();
//	//question_26();
//	//question_27();
//	//question_28();
//	//question_29();
//	//question_30();
//	//question_31();
//	//question_32();
//	//question_33();
//	//question_34();
//	//question_35();
//	//question_36();
//	//question_37();
//	question_38();
//	return 0;
//	system("pause");
//}