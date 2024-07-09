#include <iostream>
#include <string.h>
using namespace std;

class country
{
private:
    char name[40];
    float airdist;

public:
    country()
    {
        strcpy(name, "");
        airdist = 0.0;
    }
    country(char *a, float b)
    {
        strcpy(name, a);
        airdist = b;
    }
    void display()
    {
        cout << "Name of country: " << name << "\n";
        cout << "Air distance from nepal: " << airdist << "\n";
    }
    float adddistance(country A, country B);
};
float country ::adddistance(country A, country B)
{
    float C;
    C = A.airdist + B.airdist;
    return (C);
}

int main()
{
    country C1("Japan", 1800.1);
    country C2("Italy", 2000.3);
    country C3;
    float sum;
    C1.display();
    C2.display();
    sum = C3.adddistance(C1, C2);
    cout << "sum of distance: " << sum;
    return 0;
}
