#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> vec(n);

    // Reading input into the vector
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Sorting the vector
    sort(vec.begin(), vec.end());

    // Calculating the maximum sum of money Bob can earn
    int sum = 0;
    for (int i = 0; i < m; i++) {
        if (vec[i] < 0) {
            sum += abs(vec[i]);
        } else {
            break;
        }
    }

    // Output the sum
    cout << sum << endl;
}
