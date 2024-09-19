#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/**
* Sa se scrie un program care interschimba intr-o matrice data doua linii date.
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

void schimbaLinie(int l1, int l2) {
    int aux;

    cout << "schimb linia " << l1 << " cu linia " << l2 << endl;
    for (int j = 0; j < m; j++) {
        //cout << a[l1][j] << " " << a[l2][j] << endl;
        aux = a[l1][j];
        a[l1][j] = a[l2][j];
        a[l2][j] = aux;
    }
}

int main() {
    citire();
    afisare();
    schimbaLinie(1,2);
    afisare();

    return 0;
}