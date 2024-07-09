#include <iostream>
#include <string.h>
using namespace std;

template <class T>

void swap(T a, T b)
{
    cout << "Before swap  a=" << a << "b=" << b;
    T c;
    c = a;
    a = b;
    b = c;
    cout << "After swap  a=" << a << "b=" << b;
}

int main()
{
    int x, y;
    cout << "Enter x and y";
    cin >> x >> y;
    swap(x, y);

    float p, q;
    cout << "Enter p and q";
    cin >> p >> q;
    swap(p, q);

    char f, g;
    cout << "Enter two character ";
    cin >> f >> g;
    swap(f, g);
    return 0;
}