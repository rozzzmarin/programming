#include <iostream>
#include <cmath>
#include "fact.h"
#ifndef RAZLFUNCT_H
#define RAZLFUNCT_H

int razlfunct() {
    int x, fuf = 0, degs = 180;
    double sin, pi = 3.14159265358979323846264338327950288;
    for (x = 0; x <= (pi / 4); pi / degs)
        sin += (pow(-1, (fuf + 1)) * pow(x, (fuf + 3)));
    return fact();
}
#endif