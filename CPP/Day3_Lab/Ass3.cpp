// Q3. Stack is a Last-In-First-Out data structure. Write a Stack class that stores int type of data. It
// implements stack using Dynamically allocated array. Stack size should be passed in parameterized
// constructor. If size is not given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include <iostream>
using namespace std;
class Stack
{
private:
    int *ptr;
    int top;
    int size;

public:
    Stack()
    {
        this->size = 5;
        ptr = new int[5];
        top = -1;
    }
    Stack(int size)
    {
        this->size = size;
        ptr = new int[size];
        top = -1;
    }
    ~Stack()
    {
        delete[] ptr;
        ptr = NULL;
    }
    void push(int element)
    {
        if (isFull())
        {
            cout << "Stack is Overflowed, Can't Push!!" << endl;
            return;
        }
        ptr[++top] = element;
        cout << "Element Pushed into stack!!" << endl;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is underflowed, Can't Pop!!" << endl;
            return;
        }
        ptr[top] = -1;
        top--;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is underflowed, Can't get Peek!!" << endl;
            return -1;
        }
        return ptr[top];
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (top == size - 1)
            return true;
        else
            return false;
    }
    void printStack()
    {
        cout << "Stack ELements Are :" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << ptr[i] << endl;
        }
    }
    const int menu()
    {
        cout << "Stack Implementation" << endl;
        cout << "--------------------------------" << endl;
        cout << "1.Push a Element" << endl;
        cout << "2.Pop a Element" << endl;
        cout << "3.Get a Peek Element" << endl;
        cout << "4.Check is Stack Empty" << endl;
        cout << "5.Check is Stack Full" << endl;
        cout << "6.Print Stack" << endl;
        cout << "0.Exit" << endl;
        int choice;
        cout << "Enter your choice : ";
        cin >> choice;
        return choice;
    }
};

int main()
{
    Stack s(10);
    int choice;
    do
    {
        choice = s.menu();
        switch (choice)
        {
        case 1:
            int val;
            cout << "Enter Element to push : ";
            cin >> val;
            s.push(val);
            break;

        case 2:
            s.pop();
            cout << "Element Popped!" << endl;
            break;

        case 3:
        {
            int ans = s.peek();
            if (ans != -1)
            {
                cout << "Peek ELement of Stack : " << ans << endl;
            }
            break;
        }
        case 4:
            if (s.isEmpty())
                cout << "Stack is Empty!!" << endl;

            else
                cout << "Stack is not Empty!!" << endl;
            break;

        case 5:
            if (s.isFull())
                cout << "Stack is Full!!" << endl;

            else
                cout << "Stack is not Full!!" << endl;
            break;

        case 6:
            s.printStack();
            break;

        case 0:
            cout << "Exited!!" << endl;
            break;
        default:
            cout << "Enter Valid choice!" << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}