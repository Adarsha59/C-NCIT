#include <iostream>
using namespace std;

template <class T>

class stack
{
private:
    T a[10];
    int top;

public:
    stack()
    {
        top = -1;
    }

    void push(T data)
    {
        if (top == 9)
        {
            cout << "stack is full ";
        }
        else
        {
            top++;
            a[top] = data;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
        }
        else
        {
            cout << "POP is " << a[top];
            top--;
        }
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] << endl;
        }
    }
};

int main()
{
    stack<int> S;
    S.push(5);
    S.push(10);
    S.push(15);
    S.push(20);

    S.display();
    S.pop();
    S.pop();

    S.display();
    return 0;
}