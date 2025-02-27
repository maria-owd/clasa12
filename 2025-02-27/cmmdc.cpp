#include <iostream>
using namespace std;

/**
 * Se citeste un vector cu n componente numere naturale. 
 * Sa se afiseze cmmdc al celor n numere.
 * Ex : pentru n=5 si numerele 36, 42, 120, 54, 66 
 * se afiseaza cmmdc=6. 
 */

int cmmdc(int a, int b) {
    int r;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, v[100], c;

    cout << "n = ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    c = v[0];
    for (int i = 1; i < n; i++) {
        c = cmmdc(c, v[i]);
    }

    cout << "cmmdc = " << c << endl;

    return 0;

}