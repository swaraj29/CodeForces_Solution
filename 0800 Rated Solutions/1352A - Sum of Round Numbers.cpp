#include <iostream>
using namespace std;
int main() {
    int n, x, a, b, c, d, e, z = 0;
    cin >> n;
    while(n--) {
        cin >> x;
        a = x % 10;
        b = ((x / 10) % 10) * 10;
        c = ((x / 100) % 10) * 100;
        d = ((x / 1000) % 10) * 1000;
        e = (x / 10000) * 10000;
        if(a != 0) z++;
        if(b != 0) z++;
        if(c != 0) z++;
        if(d != 0) z++;
        if(e != 0) z++;
        cout << z << endl;
        if(a != 0) cout << a << " ";
        if(b != 0) cout << b << " ";
        if(c != 0) cout << c << " ";
        if(d != 0) cout << d << " ";
        if(e != 0) cout << e << " ";
        cout << endl;
        z = 0;
    }
}
