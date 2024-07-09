#include <iostream>
#include <string.h>
using namespace std;

class person
{
protected:
    char name[40];
    int age;

public:
    person()
    {
        strcpy(name, "");
        age = 0;
    }
    person(char *a, int b)
    {
        strcpy(name, a);
        age = b;
    }

    void display()
    {
        cout << "  name :" << name;
        cout << "  age :" << age;
    }
};

class Student : public person
{
private:
    //
public:
    Student()
    {
    }
    Student(char *a, int b) : person(a, b)
    {
    }
    void displays()
    {
        cout << "hdfvsjd";
    }
};
class Employee : public person
{
private:
    //
public:
    Employee()
    {
    }
    Employee(char *a, int b) : person(a, b)
    {
    }
    void displaye()
    {
        cout << "hdfvjhdcvjssjd";
    }
    //
};
int main()
{
    Student S("adarsha", 20);
    Employee E("Tiger ", 3);
    S.display();
    S.displays();
    E.display();
    E.displaye();
    // S.display();
    // E.display();
    return 0;
}