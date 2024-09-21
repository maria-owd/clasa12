#include <iostream>
using namespace std;

/**
*   Se citeste un sir de n numere reale.
*   - afisati sirul initial
*   - sortati crescator sirul
*   - afisati sirul sortat
*   - afisati sirul initial
*/

int nr, v[20], vi[20];

void citire() {
    cout << "cate elemente are sirul: ";
    cin >> nr;

    for (int i = 0; i < nr; i++) {
        cout << "elementul " << i << ": ";
        cin >> v[i];
        vi[i] = v[i];
    }
}

void afisare(int a[]) {
    for (int i = 0; i < nr; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void ordonare() {
    int aux;
    bool ok;

    do {
        ok = true;
        for (int i = 0; i < nr-1; i++) {
            if (v[i] > v[i+1]) {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                ok = false;
            }
        }
    } while (!ok);
}

int main() {
    citire();
    cout << "sirul initial: ";
    afisare(v);
    ordonare();
    cout << "sirul ordonat: ";
    afisare(v);
    cout << "sirul initial: ";
    afisare(vi);
    return 0;
}