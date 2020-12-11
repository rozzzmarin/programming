#pragma once
#include <iostream>
using namespace std;
int fact() {
    long long int f = 1, n;
    for (n = 1; n <= 10; n++) {
        f *= n;
    }
    cout << n << '\t' << f << endl;
}