#include <iostream>
using namespace std;

/**
 * Se citesc doua multimi de numere intregi
 * cu cel mult 20 de elemente
 * sa se afiseze produsul cartezian al lor.
 */

int main() {
    int a[20], b[20], n, m;

    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }

    cout << "produsul cartezian este: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "(" << a[i] << ", " << b[j] << ") ";
        }
        cout << endl;
    }

    return 0;
}