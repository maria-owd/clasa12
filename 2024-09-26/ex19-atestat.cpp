#include <iostream>
using namespace std;

/**
 * Cititi un numar n diferit de 0.
 * Scrieti toate tripletele de numere naturale pitagoreice, mai mici ca n, nenule. 
 * 
 */

int main() {
    int n;
    n = 10;

    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
                if (a * a + b * b == c * c) {
                    cout << "a = " << a << "; b = " << b << "; c = " << c << endl;
                }
            }
        }
    }
}