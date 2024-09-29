#include <iostream>
#include <fstream>
using namespace std;

/**
*   Se citeste un sir de numere, crescatoare.
*   Se citeste si un numar intreg.
*   Aflati daca numarul se afla in sir, fara a parcurge tot sirul.
*/

void citire(int v[], int &n, int &nr) {
    ifstream f("date17.in");
    f >> n;

    for (int i = 0; i < n; i++) {
        f >> v[i];
    }

    f >> nr;
}

void afisare(int v[], int n, int nr) {
    cout << "vectorul este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "numarul este: " << nr << endl;
}

bool exista(int a, int b, int v[], int nr) {
    if (nr < v[a] || nr > v[b]) {
        return false;       // numarul nu se afla deloc in sir
    }
    if (v[a] == nr || v[b] == nr) {
        return true;        // verificam capetele sirului
    }
    if (b - a <= 1) {
        return false;       // au ramas doar doua elemente sau unul de verificat (restrangem sirul)
    }

    int j;
    j = (a + b) / 2;

    // numarul se afla in prima jumatate 
    if (nr > v[a] && nr <= v[j]) {
        return exista(a, j, v, nr);                 
    } else {
        // numarul se afla in a doua jumatate
        return exista(j, b, v, nr);
    }
}

int main() {
    int v[10], n, nr;

    citire(v, n, nr);
    afisare(v, n, nr);
    if (exista(0, n-1, v, nr)) {
        cout << "am gasit numarul in sir" << endl;
    } else {
        cout << "nu am gasit numarul in sir" << endl;
    }

    return 0;
}