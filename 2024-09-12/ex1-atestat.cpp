#include <iostream>
#include <fstream>
using namespace std;

/**
 * Se citesc n (maxim 30) elemente reale - din fisier.
 * Sa se retina elemntele o singura data folosind un vector ajutator.
*/

int n, unice;
float v[31];

ifstream f("date.in");

bool exista(int x) {
    for (int i = 0; i < unice; i++) {
        if (x == v[i]) {
            return true;
        }
    }
    return false;
}

void citire() {
    int x;

    cout << "Elementele sunt: ";
    for (int i = 0; i < n; i++) {
        f >> x;
        cout << x << " ";

        if (!exista(x)) {
            v[unice] = x;
            unice++;
        }
    }
    cout << endl;
}

void afisare() {
    cout << "Avem " << unice << " elemente unice: ";
    for (int i = 0; i < unice; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    unice = 0;
    f >> n;

    citire();
    afisare();

    return 0;
}