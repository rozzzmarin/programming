#include <iostream>

void create(int *what, int le, int f_e = 0, int st = 0) {
    int* array = new int[le];
    int steppy = 0;
    for (int i = 0; i < le; i++) {

        array[i] = f_e + steppy;
        steppy += st;
    }
}


int main()
{
    int length, first_elt = 0, step = 0;
    create()
}
