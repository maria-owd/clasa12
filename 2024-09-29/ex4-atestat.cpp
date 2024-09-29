#include <iostream>
using namespace std;

int main() {
    int n, cifra, nrCif;
    float suma;

    cout << "alege un numar ";
    cin >> n;

    suma = 0;
    nrCif = 0;

    while (n > 0) {
        cifra = n % 10;
        nrCif++;
        suma = suma + cifra;
        n = n / 10;
    }

    cout << "media cifrelor este " << suma/nrCif << endl;

    return 0;
}