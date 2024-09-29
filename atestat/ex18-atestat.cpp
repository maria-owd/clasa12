#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/**
*   Inserati intr-o matrice o coloana data cu elemente 0.
*/

int a[10][10], n, m;

void citire() {
    ifstream f("date18.in");
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
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
}

void inserezColoana(int c) {
    for (int i = 0; i < n; i++) {
        for (int j = m; j >= c; j--) {
            a[i][j+1] = a[i][j];
        }
        a[i][c] = 0;
    }
    m++;
}

int main() {
    citire();
    afisare();
    inserezColoana(2);
    cout << "Noua matrice: ";
    afisare();

    return 0;
}