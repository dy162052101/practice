//#include <iostream>
//using namespace std;
//class ListNode{
//private:
//	struct Node
//	{
//		int data;
//		Node* next;
//		Node(int value, Node *p = NULL)
//		{
//             data = value;
//             next = p;
//		}
//		 Node(Node *p = NULL) 
//		 {
//             next = p;
//         } 
//	};
//	Node *head;
//	Node *tail;
//	int length;
//public :
//	void Init();
//	void creat_h();
//	void creat_m();
//	void creat_t();
//	void insert(int n,int m);
//	int find_1(int n);//������
//	int find_2(int n);//��λ��
//	void Delete_1(int n);//������
//	void Delete_2(int n);//��λ��
//	void show();
//	
//};
//void ListNode::Init()
//{
//	head = tail = new Node();
//	length=0;
//}
//void ListNode::creat_h()
//{
//	Node*p;
//	int a;
//	cin>>a;
//	for(int i=0;i<a;i++)
//	{
//		p=new Node(i,NULL);
//		tail->next=p;
//		tail=p;
//		length++;
//	}
//}
//void ListNode::insert(int n,int m)
//{
//	int flag=0;
//	Node *q;
//	Node *p=head;
//	if(n<0||n>length)
//		cout<<"error!"<<endl;
//	while(flag<n)
//	{
//		p=p->next;
//		flag++;
//	}
//	q=new Node(m,p->next);
//	if(p==tail)tail=q;
//	p -> next = q;//���ӣ�����
//	length++;
//
//}
//void ListNode::show()
//{
//	Node *p=head->next;
//	while(p!=NULL)
//	{
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//	cout<<endl;
//}
//int ListNode::find_1(int n)
//{
//	Node *p=head->next;
//	int flag=0;
//	if(n < -1 || n > length - 1)
//		return 0;
//	while(flag<n-1)
//	{
//		p=p->next;
//		flag++;
//	}
//	cout<<p->data<<endl;
//	return 1;
//}
//int ListNode::find_2(int n)
//{
//	Node *p=head->next;
//	while(1)
//	{
//		p=p->next;
//		if(p->data==n)
//		{
//			cout<<p->data<<endl;
//			break;
//		}
//	}
//	return 1;
//}
//void ListNode::Delete_1(int n)
//{
//	int flag=0;
//	Node *p=head->next;
//	Node*q;
//	while(flag<n-1)
//	{
//		q=p;
//		p=p->next;
//		flag++;
//	}
//	q->next=p->next;
//}
//void ListNode::Delete_2(int n)
//{
//	Node *p=head->next;
//	Node*q;
//	while(p->data!=n)
//	{
//		q=p;
//		p=p->next;
//	}
//	q->next=p->next;
//}
//
//
//int main(){
//	ListNode l;
//	l.Init();
//	cout<<"��ʼ��ͷβ�ڵ�ɹ���"<<endl;
//	l.creat_h();
//	cout<<"��������ɹ���"<<endl;
//	cout<<"��ӡ����"<<endl;
//	l.show();
//
//	int m,n;
//	cout<<"��������λ�κ����ݣ�"<<endl;
//	cin>>m>>n;
//	l.insert(m,n);
//	l.show();
//
//	int o;
//	cout<<"������Ҫ�������ݵ�λ�Σ�"<<endl;
//	cin>>o;
//	l.find_1(o);
//	int o_1;
//	cout<<"������Ҫ���ҵ����ݣ�"<<endl;
//	cin>>o_1;
//	l.find_2(o_1);
//
//	int a;
//	cout<<"����ɾ�����ݵ�λ��"<<endl;
//	cin>>a;
//	l.Delete_1(a);
//	l.show();
//
//	int a_1;
//	cout<<"������Ҫɾ��������"<<endl;
//	cin>>a_1;
//	l.Delete_2(a_1);
//	l.show();
//
//	system("pause");
//    return 0;
//}