#include <iostream>
#include <string.h>
using namespace std;
class Name;
class Address
{
private:
    char add[30];

public:
    void inputa()
    {
        cout << "Enter address"
             << "\n ";
        cin >> add;
    }
    void displaya()
    {
        cout << "Address :" << add << "\n ";
    }

    friend void add(Address A, Name B);
};
class Name
{
private:
    char name[30];
    Address A;

public:
    void input()
    {
        A.inputa();
        cout << "Enter name :"
             << "\n";
        cin >> name;
    }
    void display()
    {
        A.displaya();
        cout << "Name :" << name << "\n ";
    }
    friend void add(Address A, Name B);
};
void add(Address A, Name B)
{
    char temp[60];
    strcpy(temp, A.add);
    strcat(temp, B.name);

    cout << "NAme and add is :" << temp;
}
int main()
{
    Name N;
    Address A;
    N.input();
    N.display();
    add(, N);
    return 0;
}