#include <iostream>
using namespace std;

class base
{

public:
    virtual void showdata()
    {
        cout << "Base class ";
    }
};

class Derive : public base
{
public:
    void showdata()
    {
        cout << "Derive class";
    }
};

int main()
{
    base *b;
    Derive d;
    b = &d;
    b->showdata();
}
