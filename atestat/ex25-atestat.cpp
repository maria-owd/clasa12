#include <iostream>
using namespace std;

/**
 * Se citesc n numere. 
 * Sa se afiseze acele numere a caror 
 * suma a cifrelor este egala cu numarul de ordine la citire.
 */

int main() {
    int n, x;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "x = ";
        cin >> x;
        int s = 0, aux = x;
        while (aux) {
            s += aux % 10;
            aux /= 10;
        }
        if (s == i) {
            cout << x << " " << endl;
        }
    }
    cout << endl;
    return 0;
}