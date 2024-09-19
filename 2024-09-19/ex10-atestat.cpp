#include <iostream>
using namespace std;

/**
* Sa se afiseze toate numerele prime cuprinse in intervalul [a,b], unde a,b sunt numere
*   naturale, a < b
*  Ex: Pentru a=2, b=11 se afiseaza 2, 3, 5, 7, 11.
*/

bool prim(int x) {
    if (x == 0 || x ==1) {
        return false;
    }
    for (int i = 2; i <= x/2; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    a = 2;
    b = 11;

    for (int i = a; i < b; i++) {
        if (prim(i)) {
            cout << i << " ";
        }  
    }
    cout << endl;

    return 0;
}