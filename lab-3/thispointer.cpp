#include <iostream>
using namespace std;

class sample
{

private:
    int a;

public:
    sample(int a)
    {
        this->a = a;
    }

    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    sample S(5);

    S.display();
    return 0;
}