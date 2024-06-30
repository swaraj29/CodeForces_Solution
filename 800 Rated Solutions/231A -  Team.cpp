#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;  
    
    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;
        int c = 0;  
        
        if (p == 1) {
            c++;
        }
        if (v == 1) {
            c++;
        }
        if (t == 1) {
            c++;
        }
        
        if (c >= 2) {
            ans++;
        }
    }
    cout << ans << endl;
}
