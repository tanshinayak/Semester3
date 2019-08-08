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
    Node* head;
    LinkedList()
    {
        head = NULL;
    }
    void insertionHead(int n)
    {   
        Node* temp = new Node;
        temp->data=n;
        temp->next = head;
        head = temp;
    }
    void insertionTail(int n)
    {   
        Node* temp = new Node;
        temp->data=n;
        temp->next = NULL;
        if(head==NULL)
        {
            head = temp;
        }
        else
        {
            Node* p = head;
            while(p->next!=NULL)
                p=p->next;
            p->next = temp;;
        }
    }
    void deletionHead()
    {
        if(head!=NULL)
        {
            Node* delnode = head;
            cout<<"element deleted "<<head->data;
            head=head->next;
            delnode->next = NULL;
            delete delnode;
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
            if(head->next==NULL)
            {  
                Node* delnode = head;
                cout<<"element deleted "<<head->data;
                head = NULL;
                delete delnode;
            }
            else
            {
                Node* temp = head;
                while(temp->next->next!=NULL)
                temp=temp->next;
                cout<<"element deleted "<<temp->next->data;
                Node* delnode = temp->next;
                delete delnode;
                temp->next=NULL;
            }
        }
        else
        {
            cout<<"List empty";
        }
    }
    void search(int x)
    {
        if(head == NULL)
            cout<<"\nList empty";
        else
        {
            Node* temp = head;
            bool found = false;
            while(temp!=NULL)
            {
                if(temp->data == x)
                    found = true;
                temp = temp->next;       
            }
            if(found)
                cout<<"\nElement found in linked list";
            else
                cout<<"\nElement not found in linked list";
        }
    }
    void reverse()
    {
        Node* prev = head;
        Node* temp = head->next;
        Node* x = head;
        while(head!=NULL)
        {
            if(x==head)
            {
                x = head->next;
                prev = head;
                prev->next = NULL;
                head = x;
            }
            else
            {
                temp = x;
                x = temp->next;
                temp->next = prev;
                prev = temp;
            }
        }
    }
    void concat(Node* b)
    {
        Node* temp = head;
        while(temp!=NULL)
            temp=temp->next;
        temp->next = b;
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
    LinkedList l1;
    int ch;
	char c;
	do
	{
		cout<<"\nEnter your choice among following "<<endl;
		cout<<"1.Insert an element at beginning"<<endl;
		cout<<"2.Insert an element at end"<<endl;
		cout<<"3.Delete an element from beginning"<<endl;
		cout<<"4.Delete an element from end"<<endl;
        cout<<"5.Search the list"<<endl;
        cout<<"6.Reverse the list"<<endl;
        cout<<"7.Concatenate 2 lists"<<endl;
		cout<<"8.Display Linked List\n"<<endl;
		cin>>ch;
		switch(ch)
		{
            int val;
			case 1:
				cout<<"\nenter the value to be inserted "<<endl;
				cin>>val;
				l1.insertionHead(val);
				break;
            case 2:
				cout<<"\nenter the value to be inserted "<<endl;
				cin>>val;
				l1.insertionTail(val);
				break;
			case 3:
				l1.deletionHead();
				break;
			case 4:
				l1.deletionTail();
				break;
            case 5:
                cout<<"\nEnter the data to be searched : ";
                int x;
                cin>>x;
                l1.search(x);
                break;
            case 6:
                l1.reverse();
                cout<<"\nThe list has been reversed";
                break;
            case 7:
                cout<<"\nWork in progress";
                break;
			case 8:
				l1.display();
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