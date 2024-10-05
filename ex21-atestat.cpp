#include <iostream>
#include <fstream>
using namespace std;

/**
 * Se citeste un vector cu n componente numere naturale. 
 * Sa se afiseze cmmdc al celor n numere.
 * Ex : pentru n=5 si numerele 36, 42, 120, 54, 66 , se afiseaza cmmdc = 6.
*/

void citire(int v[10], int &n) {
    ifstream f("date21.in");
    f >> n;

    for (int i = 0; i < n; i++) {
        f >> v[i];
    }
}

void afisare(int v[10], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int cmmdc(int a, int b) {
    while (b != 0) {
        int r;

        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int v[10], n, c;

    citire(v, n);
    afisare(v, n);

    c = v[0];
    for (int i = 1; i < n; i++) {
        c = cmmdc(v[i], c);
    }
    cout << "cmmdc este: " << c << endl;

    return 0;
}
