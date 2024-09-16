#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/**
* Sa se scrie un program care interschimba intr-o matrice data doua coloane date.
*/

int n, m;
int a[30][30];

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
    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void schimbaColoana(int c1, int c2) {
    int aux;

    cout << "schimb coloana " << c1 << " cu coloana " << c2 << endl;
    for (int i = 0; i < n; i++) {
       // cout << a[i][c1] << " " << a[i][c2] << endl;
        aux = a[i][c1];
        a[i][c1] = a[i][c2];
        a[i][c2] = aux;
    }
}

int main() {
    citire();
    afisare();
    schimbaColoana(1,2);
    afisare();

    return 0;
}