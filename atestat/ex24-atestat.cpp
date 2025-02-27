#include <iostream>
using namespace std;

/**
 * Se citeste un numar natural n. 
 * Sa se verifice daca este un numar perfect
 * adica daca este egal cu suma divizorilor sai, in afara lui insusi 
 * (ex : 6=1+2+3)
 */

int main () {
    int n;
    cout << "n = ";
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            s += i;
        }
    }
    if (s == n) {
        cout << n << " este perfect" << endl;
    } else {
        cout << n << " nu este perfect" << endl;
    }
    return 0;
}