#include <iostream>
using namespace std;
class Dynamic
{
private:
    char *name;
    int len;

public:
    Dynamic()
    {
        len = 0;
        name = new char[len + 1];
        strcpy(name, " ");
    }
    Dynamic(char *a)
    {
        len = strlen(a);
        name = new char[len + 1];
        strcpy(name, a);
    }

    void display()
    {
        cout << "NAme is" << name;
    }
};

int main()
{
    Dynamic A("ADarsha");
    Dynamic B("Paudyal");

    A.display();
    B.display();

    return 0;
}