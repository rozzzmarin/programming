#include <iostream>
using namespace std;

int main()
{
    int i, i1;
    double d, d1;
    cout <<"int(1), int(2), double(1), double(2): "; cin >> i >> i1 >> d >> d1;

    cout << i + i1 << ", " << i - i1 << ", " << i * i1 << ", " << i / i1 << endl;
    cout << d + d1 << ", " << d - d1 << ", " << d * d1 << ", " << d / d1 << endl;
    cout << i + d << ", " << i - d << ", " << i * d << ", " << i / d << endl;
    cout << d + i << ", " << d - i << ", " << d * i << ", " << d / i;
}