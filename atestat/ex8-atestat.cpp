#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void citire(int a[10][10], int &n) {
    ifstream f("date8.in");
    f >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
}

void afisare(int a[10][10], int n) {
    cout << "Matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
}

int diagPrincip(int a[10][10], int n) {
    int maxim;
    maxim = a[0][0];
    for (int i = 0; i < n; i++) {
        if (a[i][i] > maxim) {
            maxim = a[i][i];
        }
        
    }
    return maxim;
}

int main() {
    int a[10][10], n;
    citire(a, n);
    afisare(a, n);
    cout << "Maximul de pe diagonala principala este: " << diagPrincip(a, n) << endl;

    return 0;
}