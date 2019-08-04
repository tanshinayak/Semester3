#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
    public:
    Node* head = new Node();
    Node* tail = new Node();
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void insertionHead(int n)
    {   
        Node* temp = new Node;
        temp->data=n;
        temp->next=NULL;
        if(head==NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        
    }
    void insertionTail(int n)
    {   
        Node* temp = new Node;
        temp->data=n;
        temp->next=NULL;
        if(tail==NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void deletionHead()
    {
        if(head!=NULL)
        {
            cout<<"element deleted "<<head->data;
            head=head->next;
        }
        else
        {
            cout<<"List empty";
        }
        
    }
    void deletionTail()
    {
        if(head!=NULL)
        {
            Node* temp = head;
            cout<<"element deleted "<<tail->data;
            tail->next=NULL;
        }
        else
        {
            cout<<"List empty";
        }
        
    }
    void display()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"!!!";
    }
};

int main()
{
    LinkedList l;
    int ch;
	char c;
	do
	{
		cout<<"\nEnter your choice among following "<<endl;
		cout<<"1.Insert an element at beginning"<<endl;
		cout<<"2.Insert an element at end"<<endl;
		cout<<"3.Delete an element from beginning"<<endl;
		cout<<"4.Delete an element from end"<<endl;
		cout<<"5.Display Linked List"<<endl;
		cin>>ch;
		switch(ch)
		{
            int val;
			case 1:
				cout<<"\nenter the value to be inserted "<<endl;
				cin>>val;
				l.insertionHead(val);
				break;
            case 2:
				cout<<"\nenter the value to be inserted "<<endl;
				cin>>val;
				l.insertionTail(val);
				break;
			case 3:
				l.deletionHead();
				break;
			case 4:
				l.deletionTail();
				break;
			case 5:
				l.display();
				break;
			default:
				cout<<"\nInvalid choice "<<endl;
		}
		cout<<"\n\nContinue?(y/n)"<<endl;
		cin>>c;
	}
	while(c=='y' || c=='Y');
    return 0;
}