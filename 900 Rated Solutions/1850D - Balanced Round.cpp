#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int maxLen = 1, currentLen = 1;
        for (int i = 1; i < n; i++) {
            if (vec[i] - vec[i - 1] <= k) {
                currentLen++;
            } else {
                maxLen = max(maxLen, currentLen);
                currentLen = 1;
            }
        }
        maxLen = max(maxLen, currentLen);

        int minRemovals = n - maxLen;
        cout << minRemovals << endl;
    }
}
