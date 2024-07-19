#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;

    string r;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (i == j && abs(a[i] - b[j]) == 1) { 
                r += '1';
            } else if (i == j && abs(a[i] - b[j]) != 1) {
                r += '0';
            }
        }
    }
    cout << r;
}
