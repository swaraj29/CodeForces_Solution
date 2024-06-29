#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int c = 0;
        
        while (n % 6 == 0) {
            n /= 6;
            c++;
        }
        
        while (n % 3 == 0) {
            n /= 3;
            c += 2;
        }
        
        if (n == 1) {
            cout << c << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
