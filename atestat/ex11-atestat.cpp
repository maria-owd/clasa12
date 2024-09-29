#include <iostream>
using namespace std;

/**
*   Se citesc pe rand cifrele unui numar natural.
*   Reconstituiti numarul intr-o varibila de tip long.
*/

int main() {
    int nr, cif;
    long x;

    x = 0;

    cout << "Cate cifre citim (maxim 9): ";
    cin >> nr;

    for (int i = 0; i < nr; i++) {
        cout << "cifra " << i+1 << ": ";
        cin >> cif;

        x = x * 10 + cif; 
    }
    cout << "numarul este: " << x << endl;

    return 0;
}