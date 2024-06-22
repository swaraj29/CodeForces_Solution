#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        if (n % 2 == 1) {
            cout << "YES" << endl;
        } else {
            bool flag = false;
            long long x = 2;
            
            while (n >= x) {
                if (n == x) {
                    flag = true;
                    break;
                }
                x *= 2;
            }
            
            if (flag) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}
