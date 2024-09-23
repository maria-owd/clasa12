#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/**
*   Inserati intr-o matrice o linie data cu elemte 0.
*/

int a[10][10], n, m;

void citire() {
    ifstream f("date2.in");
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

void inserezLinie(int l) {
    for (int j = 0; j < m; j++) {
        for (int i = n; i >= l-1; i--) {
            a[i+1][j] = a[i][j];
        }
        a[l-1][j] = 0;
    }
    n++;
}

int main() {
    citire();
    afisare();
    inserezLinie(2);
    cout << "Noua matrice: ";
    afisare();

    return 0;
}