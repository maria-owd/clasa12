#include <iostream>
using namespace std;

/**
* Se citeste un sir de numere reale. Sa se inverseze elementele de valoare minima si de
* valoare maxima, presupunand ca sunt unice.
* Ex: n=4; si elementele (2,-5,7,4) => (2,7,-5,4) 
*/

int v[10] = {2,-5,7,4};
int n = 4;

int main() {
    int min, max, pMin, pMax;

    cout << "Vectorul este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    min = v[0];
    max = v[0];
    pMin = 0;
    pMax = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
            pMin = i;
        }
        if (v[i] > max) {
            max = v[i];
            pMax = i;
        }
    }

    int aux;
    aux = v[pMin];
    v[pMin] = v[pMax];
    v[pMax] = aux;

    cout << "Vectorul nou este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}