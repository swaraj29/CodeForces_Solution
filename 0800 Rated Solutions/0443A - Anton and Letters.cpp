#include <iostream>
using namespace std;
int main() {
    char n;
    cin >> n;
    int a[26] = {0};
    while(n != '}') {
        cin >> n;
        if(n > 96 && n < 123)
            a[n - 97] = 1;
    }
    int x = 0;
    for(int y : a)
        if(y == 1)
            x++;
    cout << x;
}
