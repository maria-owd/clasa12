/**
 * Sa se scrie un program care insereaza 
 * intr-o matrice data o coloana data cu elemente 0.
 */

#include <iostream>
using namespace std;

int main() {
    int m, n, indexColoana;
    
    cout << "Introduceti numarul de randuri: ";
    cin >> m;
    cout << "Introduceti numarul de coloane: ";
    cin >> n;
    
    int matrice[m][n];
    cout << "Introduceti elementele matricei:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrice[i][j];
        }
    }
    
    cout << "Introduceti indexul coloanei unde se insereaza zerouri: ";
    cin >> indexColoana;
    
    int matriceNoua[m][n + 1];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n + 1; j++) {
            if (j < indexColoana) {
                matriceNoua[i][j] = matrice[i][j];
            } else if (j == indexColoana) {
                matriceNoua[i][j] = 0;
            } else {
                matriceNoua[i][j] = matrice[i][j - 1];
            }
        }
    }
    
    cout << "Noua matrice este:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n + 1; j++) {
            cout << matriceNoua[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}