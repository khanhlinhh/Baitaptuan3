#include <iostream>

using namespace std;

int main () {
    char c[1000];
    gets(c);
    int length = 0;
    while (c[length] != '\0') {
        length++;
    }
    bool check = true;
    for (int i = 0; i < length/2; i++) {
        if (c[i] != c[length-i-1]) check = false;
        if (check == false) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
