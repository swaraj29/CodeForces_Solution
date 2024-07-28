#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    unordered_set<int> seen;
    vector<int> result;
    
    // Traverse from the end to keep the rightmost occurrences
    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(vec[i]) == seen.end()) {
            result.push_back(vec[i]);
            seen.insert(vec[i]);
        }
    }
    
    // Reverse to maintain the original order of the last occurrences
    reverse(result.begin(), result.end());
    
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}
