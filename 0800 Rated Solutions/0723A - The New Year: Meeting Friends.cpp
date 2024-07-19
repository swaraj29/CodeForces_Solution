#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    
    // Correctly sort the array using pointers
    sort(arr, arr + 3);
    
    // Compute the minimum total distance by focusing on the median element, arr[1]
    int d = abs(arr[1] - arr[0]) + abs(arr[2] - arr[1]);
    
    // Output the calculated distance
    cout << d << endl;
}
