#include <iostream>
using namespace std;

/**
 * Verificati daca numarul n este palindrom
*/

int invers(int n) {
    int m;

    m = 0;
    while (n > 0) {
        m = m * 10 + n % 10;
        n = n / 10;
    }
    return m;
}

int main() {
    int n;

    cout << "alege un numar: ";
    cin >> n;

    if (n == invers(n)) {
        cout << "palindrom" << endl;
    } else {
        cout << "nu e palindrom" << endl;
    }

    return 0;
}