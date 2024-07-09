#include <iostream>
#include <string.h>
using namespace std;

class media
{
protected:
    char title[30];
    float price;

public:
    media()
    {
        strcpy(title, "");
        price = 0.0;
    }
    media(char *a, float b)
    {
        strcpy(title, a);
        price = b;
    }
    virtual void display() = 0;
};
class book : public media
{
private:
    int P_count;

public:
    book()
    {
        P_count = 0;
    }
    book(char *a, float b, int c) : media(a, b)
    {
        P_count = c;
    }
    void display()
    {
        cout << "page count:" << P_count << "\n";
        cout << "Title:" << title << "\n";
        cout << "Price:" << price << "\n";
    }
};
class CD : public media
{
private:
    float time;

public:
    CD()
    {
        time = 0.0;
    }
    CD(char *a, float b, float c) : media(a, b)
    {
        time = c;
    }
    void display()
    {
        cout << "Title:" << title << "\n";
        cout << "Price:" << price << "\n";
        cout << "Time" << time << "\n";
    }
};
int main()
{

    cout << "Book info"
         << "\n";
    book B("C", 1000, 500);
    B.display();
    cout << "Video info"
         << "\n";
    CD cd("C++", 100, 25);
    cd.display();
    return 0;
}