#include <iostream>
using namespace std;
class Two;
class One
{
private:
    int a;

public:
    One()
    {
        a = 0;
    }
    One(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "A:" << a << "\n";
    }
    friend void swap(One A, Two B);
};
class Two
{
private:
    int b;

public:
    Two()
    {
        b = 0;
    }
    Two(int y)
    {
        b = y;
    }
    void display()
    {
        cout << "B:" << b << "\n";
    }
    friend void swap(One A, Two B);
};

void swap(One A, Two B)
{
    int C;
    cout << A.a << "\t" << B.b << "\n";
    C = A.a;
    A.a = B.b;
    B.b = C;
    cout << A.a << "\t" << B.b << "\n";
}
int main()
{
    One o(5);
    Two t(3);
    o.display();
    t.display();
    swap(o, t);
}
