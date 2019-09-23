#include <iostream>
using namespace std;

class Queue
{
public:
    int q[50];
    int size;
    int rear, front;
    Queue(int n = 3)
    {
        rear = -1;
        front = -1;
        size = n;
        for (int i = 0; i < size; i++)
            q[i] = -1;
    }
    bool isFull()
    {
        for (int i = 0; i < size; i++)
            if (q[i] == -1)
                return false;
        return true;
    }
    bool isEmpty()
    {
        for (int i = 0; i < size; i++)
            if (q[i] != -1)
                return false;
        return true;
    }
    void Enqueue(int n)
    {
        if (isFull())
        {
            cout << "\nNo space to Enqueue";
        }
        else if (rear == 0)
        {
            front = 0;
        }
        else
        {
            q[rear] = n;
            cout << "\nEnqueued " << q[rear];
            rear = (rear + 1) % size;
        }
    }
    void Dequeue()
    {
        if (isEmpty())
        {
            cout << "\nNothing to Dequeue" << endl;
        }
        else
        {
            cout << "\nDequeued " << q[front];
            q[front] = -1;
            front = (front + 1) % size;
        }
    }
    void display()
    {
        cout << endl;
        if (isEmpty())
            cout << "\nNothing to display...";
        else if (front <= rear)
        {
            cout << "\nThe current Queue is \n";
            for (int i = front; i <= rear; i++)
                cout << q[i] << "\t";
        }
        else
        {
            cout << "\nThe current Queue is \n";
            for (int i = front; i < size; i++)
                cout << q[i] << "\t";
            for (int i = 0; i < rear; i++)
                cout << q[i] << "\t";
        }

        cout << endl;
    }
};

int main()
{
    Queue b;
    char cont;
    do
    {
        cout << "\nChoose the operation :\n";
        cout << "1.Enqueue\n";
        cout << "2.Dequeue\n";
        cout << "3.Display\n\n";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int num;
            cout << "\nTell me what to Enqueue...";
            cin >> num;
            b.Enqueue(num);
            break;
        case 2:
            b.Dequeue();
            break;
        case 3:
            b.display();
            break;
        default:
            cout << "\nInvalid Input";
        }
        cout << "\nContinue? (y/n)" << endl;
        cin >> cont;
    } while (cont == 'y');
    return 0;
}