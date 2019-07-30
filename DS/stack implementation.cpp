#include<iostream>
#include<conio.h>
using namespace std;
class stack{
	int *arr;
	int size;
	int top;
	public:
		stack(int size)
		{
			arr=new int[size];
			top=0;
			
		}
		bool isfull()
		{
		    return(top==(size));
		}
		bool isempty()
		{
			return(top==0);
		}
		void push(int ele)
		{
			if(isfull()==true)
			{
				cout<<"stack overflow";
			}
			else
			{
				arr[top++]=ele;
			}
		}
		int pop()
		{
			if(isempty()==true)
			{
				cout<<"stack underflow";
			}
			else
			{
				top--;
				return arr[top];
			}
		}
		void display()
		{
			int index=top;
			for(int i=index-1;i>=0;i--)
		    {
		    	cout<<arr[i];
		    }
		}
};
int main()
{
	//roll no-59
	//objective-implementation of stack using array
	char ch;
	int n;
	cout<<"enter the size of stack"<<endl;
	cin>>n;
	 stack s(n);
	int choice;
	do{
		cout<<"menu for stack"<<endl;
		cout<<"1.push"<<endl;
		cout<<"2.pop"<<endl;
		cout<<"3.display"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:{int e;
			    cout<<"enter the number you want to push"<<endl;
			    cin>>e;
				s.push(e);
				break;
			}
			case 2:{
				int t=s.pop();
				break;
			}
			case 3:{
				s.display();
				break;
			}
			default:cout<<"invalid choice"<<endl;
		}
	
		cout<<"\n do you want to continue"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	
	
}
