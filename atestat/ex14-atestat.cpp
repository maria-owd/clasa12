#include <iostream>
#include <fstream>
using namespace std;

/**
* Eliminati o coloana data dintr-o matrcie.
*/

int a[10][10], n, m;

void citire() {
    ifstream f("date14.in");
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
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void eliminCol(int c) {
    for (int j = c; j < m - 1; j++) {
        for (int i = 0; i < n; i++) {
            a[i][j] = a[i][j+1];
        }
    }
    m--;
}

int main() {
    citire();
    afisare();
    eliminCol(1);
    cout << "Matricea dupa eliminare: ";
    afisare();

    return 0;
}