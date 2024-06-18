#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max_length = 1; // At least one element in the sequence
    int current_length = 1;
    
    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i-1]) {
            current_length++;
        } else {
            if(current_length > max_length) {
                max_length = current_length;
            }
            current_length = 1;
        }
    }
    
    if(current_length > max_length) {
        max_length = current_length;
    }
    cout << max_length << endl;
}
