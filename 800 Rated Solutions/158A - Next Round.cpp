#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i]; 
    }
    
    int kth = s[k-1]; 
    int count = 0;  

    for (auto i : s) {
        if (i >= kth && i > 0) { 
            count++;
        }
    }

    cout << count;
}
