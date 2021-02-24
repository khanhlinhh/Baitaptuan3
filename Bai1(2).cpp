#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int n; 
    cin >> n;
    double numbs[n];
    double ave = 0, ans = 0;;
    for (int i = 0; i < n; i++) {
        cin >> numbs[i];
        ave += numbs[i];
    }
    ave = ave/n;
    for (int i = 0; i < n; i++) {
        ans += (numbs[i] - ave)*(numbs[i] - ave);
    }
    ans = (ans/(n-1));
    cout << ans << endl;
    return 0;
}