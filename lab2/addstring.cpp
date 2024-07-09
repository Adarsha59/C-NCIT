#include <iostream>
using namespace std;
#include <string.h>

class String
{
private:
    char name[20];

public:
    String()
    {
        strcpy(name, " ");
    }

    String(char *a)
    {
        strcpy(name, a);
    }
    void display()
    {
        cout << "\n"
             << " Name : " << name;
    }
    friend String operator+(String A, String B);
};
String operator+(String A, String B)
{
    String C;
    strcpy(C.name, A.name);
    strcat(C.name, " ");
    strcat(C.name, B.name);
}

int main()
{
    String S1("Adarsha");
    String S2("paudyal");
    String S3;
    S1.display();
    S2.display();
    S3 = S1 + S2;
    S3.display();
}
