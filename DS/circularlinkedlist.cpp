#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertionHead(int n)
    {
        Node *temp = new Node;
        temp->data = n;
        if (head == NULL)
        {
            head = temp;
            head->next = head;
        }
        else
        {
            Node *loop = head;
            while (loop->next != head)
                loop = loop->next;
            temp->next = head;
            head = temp;
            loop->next = head;
        }
    }
    void insertionTail(int n)
    {
        Node *temp = new Node;
        temp->data = n;
        if (head == NULL)
        {
            head = temp;
            head->next = head;
        }
        else
        {
            Node *p = head;
            while (p->next != head)
                p = p->next;
            temp->next = head;
            p->next = temp;
        }
    }
    void deletionHead()
    {
        if (head != NULL)
        {
            if (head->next == head)
            {
                Node *delnode = head;
                cout << "element deleted " << head->data;
                head = NULL;
                delete delnode;
            }
            else
            {
                Node *delnode = head;
                cout << "element deleted " << head->data;
                Node *loop = head;
                while (loop->next != head)
                    loop = loop->next;
                head = head->next;
                loop->next = head;
                delnode->next = NULL;
                delete delnode;
            }
        }
        else
        {
            cout << "List empty";
        }
    }
    void deletionTail()
    {
        if (head != NULL)
        {
            if (head->next == head)
            {
                Node *delnode = head;
                cout << "element deleted " << head->data;
                head = NULL;
                delete delnode;
            }
            else
            {
                Node *temp = head;
                while (temp->next->next != head)
                    temp = temp->next;
                cout << "element deleted " << temp->next->data;
                Node *delnode = temp->next;
                delete delnode;
                temp->next = head;
            }
        }
        else
        {
            cout << "List empty";
        }
    }
    void search(int x)
    {
        if (head == NULL)
            cout << "\nList empty";
        else
        {
            Node *temp = head;
            bool found = false;
            while (true)
            {
                if (temp->data == x)
                {
                    found = true;
                    break;
                }
                if (temp->next == head)
                    break;
                temp = temp->next;
            }
            if (found)
                cout << "\nElement found in linked list";
            else
                cout << "\nElement not found in linked list";
        }
    }
    void reverse()
    {
        Node *prev = NULL;
        Node *next = NULL;
        if (head == NULL)
        {
            cout << "\nList is empty.";
            return;
        }
        else if (head->next == head)
        {
            cout << "\nList only has one element";
            return;
        }
        Node *temp = head;
        while (true)
        {
            if (head->next == temp)
                break;
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        head = prev;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            if (temp->next == head)
                break;
            temp = temp->next;
        }
        cout << "!!!";
    }
    void alt_display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            if (temp->next == head)
                break;
            temp = temp->next->next;
        }
        cout << "!!!";
    }
};

int main()
{
    LinkedList l;
    int ch;
    char cont;
    do
    {
        cout << "\nEnter your choice among following " << endl;
        cout << "1.Insert an element at beginning" << endl;
        cout << "2.Insert an element at end" << endl;
        cout << "3.Delete an element from beginning" << endl;
        cout << "4.Delete an element from end" << endl;
        cout << "5.Search the list" << endl;
        cout << "6.Reverse the list" << endl;
        cout << "7.Display alternate elements of Linked List" << endl;
        cout << "8.Display Linked List\n"
             << endl;
        cin >> ch;
        switch (ch)
        {
            int val;
        case 1:
            cout << "\nEnter the value to be inserted " << endl;
            cin >> val;
            l.insertionHead(val);
            break;
        case 2:
            cout << "\nEnter the value to be inserted " << endl;
            cin >> val;
            l.insertionTail(val);
            break;
        case 3:
            l.deletionHead();
            break;
        case 4:
            l.deletionTail();
            break;
        case 5:
            cout << "\nEnter the data to be searched : ";
            cin >> val;
            l.search(val);
            break;
        case 6:
            l.reverse();
            cout << "\nThe list has been reversed";
            break;
        case 7:
            l.alt_display();
            break;
        case 8:
            l.display();
            break;
        default:
            cout << "\nInvalid choice " << endl;
        }
        cout << "\n\nContinue?(y/n)" << endl;
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');
    return 0;
}