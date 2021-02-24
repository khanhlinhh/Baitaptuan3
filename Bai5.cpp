#include <iostream>

using namespace std;

int main () {
    int x, y, num = 1, temp = 0;
    cin >> x >> y;
    int col = y - 1, row = x - 1;
    int matr[x][y];
    while (num != x*y+1) {
        for (int i = temp; i <= col; i++) {
            matr[temp][i] = num;
            num++;
        }
        if (num >= x*y) break;
        for (int i = temp+1; i <= row; i++) {
            matr[i][col] = num;
            num++;
        }
        if (num >= x*y) break;
        for (int i = col-1; i >= temp; i--) {
            matr[row][i] = num;
            num++;
        }
        if (num >= x*y) break;
        for (int i = row-1; i > temp; i--) {
            matr[i][temp] = num;
            num++;
        }
        if (num >= x*y) break;
        col--;
        row--;
        temp++;
    }

    for (int l = 0; l < x; l++) {
        for (int k = 0; k < y; k++) {
            cout << matr[l][k] << ' ';
        }
        cout << endl;
    }
    return 0;
}
