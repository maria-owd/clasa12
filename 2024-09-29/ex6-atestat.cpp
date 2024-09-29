#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date6.in");

void citire(int v[], int &n) {
    f >> n;
    for (int i = 0; i < n; i++) {
        f >> v[i];
    }
}

void afisare(int v[], int n, const char *nume) {
    cout << nume << ": ";

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool exista(int elem, int v[], int n) {
    for (int i = 0; i < n; i++) {
        if (elem == v[i]) {
            return true;
        }
    }
    return false;
}

void reuniune(int s[], int ns, int d[], int &nd) {
    for (int i = 0; i < ns; i++) {
        if (!exista(s[i], d, nd)) {
            d[nd] = s[i];
            nd++;
        } 
    }
}

int main() {
    int a[21], b[21], c[21];
    int n1, n2, n3;

    citire(a, n1);
    citire(b, n2);
    afisare(a, n1, "sirul 1");
    afisare(b, n2, "sirul 2");

    n3 = 0;

    reuniune(a, n1, c, n3);
    reuniune(b, n2, c, n3);
    afisare(c, n3, "reuniunea");

    return 0;
}