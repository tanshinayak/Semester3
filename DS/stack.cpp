//roll no 94057 - 94051
//objective :- implementation of stacks using array
#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
	int *arr;
	int top,size;
	public : 
		stack(int n)	
		{
			arr=new int[n];
			size = n;
			top=-1;
		}
		
		void push(int val);
		void pop();
		bool isfull();
		bool isempty();
		void display();
};
bool stack::isempty()
{
	return top == -1;
}

bool stack::isfull()
{
	return top == size-1;
}
void stack::push(int val)
{
	if(isfull())
	{
		cout<<"Stack Overflow"<<endl;
	}
	else
	{
		top++;
		arr[top]=val;
	}
}
void stack::pop()
{
	if(isempty())
	{
		cout<<"Stack Underflow "<<endl;
	}
	else
	{
		cout<<"Element popped "<<arr[top]<<endl;
		top--;
	}
}
void stack::display()
{
	if(top>-1)
	{
		for(int i=top;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
	}
	else
	{
		cout<<"stack is empty "<<endl;
	}
}
int main()
{
	int s,val;
	cout<<"enter the size of a stack"<<endl;
	cin>>s;
	stack s1(s);
	int ch;
	char c;
	do
	{
		cout<<"Enter your choice among following "<<endl;
		cout<<"1. Insert an element"<<endl;
		cout<<"2.Delete an element "<<endl;
		cout<<"3.Display stack"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter the value to be inserted "<<endl;
				cin>>val;
				s1.push(val);
				break;
			case 2:
				s1.pop();
				break;
			case 3:
				s1.display();
				break;
			default:
				cout<<"Invalid choice "<<endl;
		}
		cout<<"Do you want to continue If yes then press Y "<<endl;
		cin>>c;
	}
	while(c=='y' || c=='Y');

	getch();
	return 0;
}
