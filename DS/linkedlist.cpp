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
        Node* prev = NULL;
        Node* next = NULL;
        while(head!=NULL)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        head = prev;
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
    LinkedList operator +(LinkedList l2)
    {
        LinkedList x;
        Node* temp = head;
        Node* create = new Node;
        while(temp->next!=NULL)
        {
            create->data = temp->data;
            create->next = NULL;
            Node* xtemp = x.head;
            while(xtemp!=NULL)
                xtemp=xtemp->next;
            xtemp = create;
            create = create->next;
            temp=temp->next;
        }
        temp = l2.head;
        while(temp->next!=NULL)
        {
            create->data = temp->data;
            create->next = x.head;
            Node* xtemp = x.head;
            while(xtemp!=NULL)
                xtemp=xtemp->next;
            xtemp = create;
            create = create->next;
            temp=temp->next;
        }
        return x;
    }
};

int main()
{
    LinkedList l1,l2,l3;
    int lch,ch;
	char cont;
	do
	{
<<<<<<< HEAD
        cout<<"\n\nWhich list do you want to operate on\n1.l1\n2.l2\n";
        cin>>lch;
        if(lch==1||lch==2)
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
                    if(lch==1)
                        l1.insertionHead(val);
                    else if(lch==2)
                        l2.insertionHead(val);
                    break;
                case 2:
                    cout<<"\nenter the value to be inserted "<<endl;
                    cin>>val;
                    if(lch==1)
                        l1.insertionTail(val);
                    else if(lch==2)
                        l2.insertionTail(val);
                    break;
                case 3:
                   if(lch==1)
                        l1.deletionHead();
                    else if(lch==2)
                        l2.deletionHead();
                    break;
                case 4:
                    if(lch==1)
                        l1.deletionTail();
                    else if(lch==2)
                        l2.deletionTail();
                    break;
                case 5:
                    cout<<"\nEnter the data to be searched : ";
                    cin>>val;
                    if(lch==1)
                        l1.search(val);
                    else if(lch==2)
                        l2.search(val);
                    break;
                case 6:
                    if(lch==1)
                        l1.reverse();
                    else if(lch==2)
                        l2.reverse();
                    cout<<"\nThe list has been reversed";
                    break;
                case 7:
                    if(lch==1)
                        l3 = l1 + l2;
                    else if(lch==2)
                        l3 = l2 + l1;
                    l3.display();
                    break;
                case 8:
                    if(lch==1)
                        l1.display();
                    else if(lch==2)
                        l2.display();
                    break;
                default:
                    cout<<"\nInvalid choice "<<endl;
            }
            cout<<"\n\nContinue?(y/n)"<<endl;
            cin>>cont;
        }
        else
        {
            cout<<"\nInvalid List";
        }
=======
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
        LinkedList l3;
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
                cout<<"\nEnter the data to be searched : ";
                cin>>val;
                l.search(val);
                break;
            case 6:
                l.reverse();
                cout<<"\nThe list has been reversed";
                break;
            case 7:
                cout<<"\nInsert elements of second list (-1 to end list)\n";
                int x;
                while(true)
                {
                    cin>>x;
                    if(x==-1)
                        break;
                    l3.insertionTail(x);
                }
                l+l3;
                break;
            case 8:
				l.display();
				break;
			default:
				cout<<"\nInvalid choice "<<endl;
		}
		cout<<"\n\nContinue?(y/n)"<<endl;
		cin>>c;
>>>>>>> ee9676295086cd32efc280a76ef55baa196d1d16
	}
	while(cont=='y' || cont=='Y');
    return 0;
}