#include <iostream>

int main() {
    using namespace std;

    double a = 9.8;
    double x, x0, v0, t;
    cin >> x0 >> v0 >> t;
    x = x0 + (v0 * t) + (a * t * t / 2);
    cout << x;
}
