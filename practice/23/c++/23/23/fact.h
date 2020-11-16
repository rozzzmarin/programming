#include <iostream>
#pragma once

int64_t factorial(int64_t n) {
    if (n < 0)
        return -1;

    int64_t factres = 1;
    for (int64_t i = 1; i <= n; ++i) {
        factres = factres * i;
    }
    return factres;
}