#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int u = 0;
    int l = 0;
    string k;

    for (char i : s) {
        if (i >= 'a' && i <= 'z') {
            l++;
        } else if (i >= 'A' && i <= 'Z') {
            u++;
        }
    }
    if (u > l) {
        for (char m : s) {
            {
                if(m >= 'a' && m <= 'z')
                {
                    k += m - 32;
                }
                else
                {
                    k += m;
                }
                
            }
        }
        cout << k << endl;
    }
    if (l >= u) {
        for (char g : s) {
            {
                if(g >= 'A' && g <= 'Z')
                {
                    k += g + 32;
                }
                else
                {
                    k += g;
                }
                
            }
        }
        cout << k << endl;
    }    
}
