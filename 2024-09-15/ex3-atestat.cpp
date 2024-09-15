#include <iostream>
#include <fstream>
using namespace std;

/**
* Sa se scrie un program care elimina dintr-o matrice data o linie data.
*/

int n, m, a[10][10];
int l;

ifstream f("date.in");

void citire() {
    f >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            f >> a[i][j];
        }
    }
}

void afisare() {
    cout << "Matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << endl;
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
    }
    cout << endl;
}

void sterge() {
    for (int i = l; i < n-1; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i+1][j];
        }
    }
    n--;
}

int main() {
    citire();
    afisare();

    cout << endl << "Ce linie vreti sa stergeti: ";
    cin >> l;

    sterge();
    afisare();

    return 0;
}
