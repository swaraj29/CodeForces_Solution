#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int candies(int n) {
    for (int k = 2; ; k++) { // k starts from 2 because k > 1
        int p = (1 << k) - 1; // 2^k - 1
        if (n % p == 0) {
            return n / p; // x
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << candies(n) << endl;
    }
    return 0;
}
