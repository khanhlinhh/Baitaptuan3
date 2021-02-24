#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n];
    int chan = 0, sumle = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) chan += arr[i];
        else sumle++;
    }
    int ma = arr[0], mi = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > ma) ma = arr[i];
        if (arr[i] < mi) mi = arr[i];
    }
    cout << mi << ' ' << ma << ' ' << chan << ' ' << sumle << endl;
    return 0;
}