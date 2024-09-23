#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/**
*   Matrice patratica. Determinati elementul maxim de pe diagonala secundara.
*/

int a[10][10], n;
int maxim;

void citire() {
    ifstream f("date1.in");
    f >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
}

void afisare() {
    cout << "Matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
}

int diagSec() {
    maxim = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                if (a[i][j] > maxim) {
                    maxim = a[i][j];
                }
            }
        }
    }
    return maxim;
}

int main() {
    citire();
    afisare();
    cout << "Maximul de pe diagonala secundara este: " << diagSec() << endl;
}