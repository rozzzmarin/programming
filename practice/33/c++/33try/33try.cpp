#include <iostream>

int* create(int le, int f_e = 0, int st = 0) {
    int* array = new int[le];
    int steppy = 0;
    for (int i = 0; i < le; i++) {

        array[i] = f_e + steppy;
        steppy += st;
    }
    /*for (int i = 0; i < le; i++) {

        array[i] = f_e + st*i;
       // steppy += st;
    }

    array[0] = f_e;
    for (int i = 1; i < le; i++) {

        array[i] = array[i-1] + st;

    }*/
    return array;
}
void print(int* array, int le){
    for (int i = 0; i < le; i++) {
        std::cout << array[i] << ' ';
    }
}

int* sort(int* array, int le) {
    for (int i = 1; i < le; i++) {
        for (int j = i; j > 0 && array[j - 1] > array[j]; j--) {
            int temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
        }
    }
    return array;
}

int main() {
    int length, first_elt = 0, step = 0;
    std::cout << "plz input array length, the first element and the step!\n";
    std::cin >> length >> first_elt >> step; 
    
    int* a = create(length, first_elt, step);
    print(sort(a, length), length);
    delete[] a;
}