#include <iostream>
using namespace std;

int main() {
    int a[100][100], m, n, x, y;

    cout << "linii: ";
    cin >> m;
    cout << "coloane: ";
    cin >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << endl << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    do {
        cout << "x = ";
        cin >> x;
    } while (!(x >= 0 && x <= n-1));

    do {
        cout << "y = ";
        cin >> y;
    } while (!(x >= 0 && x <= n-1));

    int aux;
    for (int i = 0; i < m; i++){
        aux = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] =aux;
        
    }

    cout << endl << "matricea noua este: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}