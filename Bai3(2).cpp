#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n];
    int mot = 0, hai = 0, ba = 0, bon = 0, nam = 0, sau = 0,
        bay = 0, tam = 0, chin = 0, khong = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        switch (arr[i]) {
            case (1): mot++; break;
            case (2): hai++; break;
            case (3): ba++; break;
            case (4): bon++; break;
            case (5): nam++; break;
            case (6): sau++; break;
            case (7): bay++; break;
            case (8): tam++; break;
            case (9): chin++; break;
            case (0): khong++; break;
        }
    }
    cout << "0: " << khong << endl
         << "1: " << mot << endl
         << "2: " << hai << endl
         << "3: " << ba << endl
         << "4: " << bon << endl
         << "5: " << nam << endl
         << "6: " << sau << endl
         << "7: " << bay << endl
         << "8: " << tam << endl
         << "9: " << chin << endl;
}