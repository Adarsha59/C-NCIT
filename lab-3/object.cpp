#include <iostream>
using namespace std;

class sample
{
private:
    int a;

public:
    sample()
    {
        a = 0;
    }
    sample(int x)
    {
        a = x;
    }

    void display()
    {
        cout << "a=" << a << endl;
    }
};

int main()
{
    sample S(5);
    sample *P;
    P = &S;
    P->display();
    return 0;
}