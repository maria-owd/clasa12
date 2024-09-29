#include <iostream>
using namespace std;

int main() {
    int n, rest, v[100], cifre;

    cout << "alege un numar ";
    cin >> n;

    cifre = 0;
    while (n > 0) {
        rest = n % 2;
        v[cifre] = rest;
        cifre++;
        n = n / 2;
    }

    for (int i = cifre-1; i >= 0; i--) {
        cout << v[i];
    }
    cout << endl;

    return 0;
}