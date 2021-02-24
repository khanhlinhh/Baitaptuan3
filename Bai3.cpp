#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

bool check (int n) {
    string num;
    ostringstream convert;
    convert << n;
    num = convert.str();
    string numcheck = num;
    reverse (num.begin(), num.end());
    if (numcheck == num) return true;
    return false;
}

int main () {
    int T;
    cin >> T;
    int A[T], B[T];
    for (int i = 0; i < T; i++) {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < T; i++) {
        int count = 0;
        for (int j = A[i]; j <= B[i]; j++) {
            if (check(j) == 1) count++;
        }
        cout << count << endl;
    }
}