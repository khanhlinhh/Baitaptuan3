#include <iostream>

using namespace std;

int main () {
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                sum++;
                break;
            }
        }
        if (sum) break;
    }
    if (sum > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}