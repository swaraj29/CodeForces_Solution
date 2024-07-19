#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    // We perform the swap t times.
    while (t--) {
        // Process swaps from left to right in a single round
        for (int i = 0; i < n - 1; i++) { // Ensure i+1 is valid
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++; // Move i forward to skip the next position since it was just swapped
            }
        }
    }
    // Output the final string
    cout << s << endl;
}
