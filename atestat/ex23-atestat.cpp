#include <iostream>
using namespace std;

/**
 * Se citesc doua multimi de numere intregi
 * cu cel mult 20 de elemente
 * sa se afiseze diferenta lor.
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

    cout << "diferenta este: " << endl;
    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}