// O(1)

#include <iostream>
using namespace std;

#define MAX 10

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[MAX];
        top = -1;
    }

public:
    void push(int x)
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return 0;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.Top() << endl;

    s.pop();
    cout << s.Top() << endl;

    s.pop();
    cout << s.Top() << endl;

    s.pop();
    cout << s.Top() << endl;

    cout << s.empty() << endl;

    return 0;
}