#include <iostream>
#include <fstream>
using namespace std;

/**
* Se citesc doua multimi de numere intregi, cu cel mult 20 de elemente, sa se afiseze
*   intersectia lor.
*/

ifstream f("date.in");

void citire(int v[], int &n) {
    f >> n;
    for (int i = 0; i < n; i++) {
        f >> v[i];
    }
}

void afisare(int v[], int n, const char *nume) {
    cout << nume << ": ";

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool exista(int elem, int v[], int n) {
    for (int i = 0; i < n; i++) {
        if (elem == v[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int a[21], b[21], c[21];
    int n1, n2, n3;

    citire(a, n1);
    citire(b, n2);
    afisare(a, n1, "sirul 1");
    afisare(b, n2, "sirul 2");

    n3 = 0;
    for(int i = 0; i < n1; i++) {
        if (exista(a[i], b, n2) && !exista(a[i], c, n3)) {
            c[n3] = a[i];
            n3++;
        } 
    }

    afisare(c, n3, "intersectia");

    return 0;
}