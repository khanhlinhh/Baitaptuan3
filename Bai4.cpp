#include <iostream>

using namespace std;

int main () {
    unsigned int m, n;
    cin >> m >> n;
    char bom[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> bom[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int count = 0;
            if (bom[i][j] == '.') {
                if (i > 0 and j > 0 and bom[i-1][j-1] == '*') count++;
                if (i < m-1 and j < n-1 and bom[i+1][j+1] == '*') count++;
                if (i > 0 and j < n-1 and bom[i-1][j+1] == '*') count++;
                if (i < m-1 and j > 0 and bom[i+1][j-1] == '*') count++;
                if (i > 0 and bom[i-1][j] == '*') count++;
                if (i < m-1 and bom[i+1][j] == '*') count++;
                if (j > 0 and bom[i][j-1] == '*') count++;
                if (j < n-1 and bom[i][j+1] == '*') count++;
                bom[i][j] = (count + '/0');
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << bom[i][j];
        }
        cout << endl;
    }
}