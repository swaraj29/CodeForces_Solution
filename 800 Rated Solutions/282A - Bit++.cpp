#include <iostream>
using namespace std;
int main()
{
    int n;
    string op;
    cin >> n;
    int r = 0;
    while(n)
    {
        cin >> op;
        if (op == "++X" || op == "X++") {
            r++;
        } else if (op == "--X" || op == "X--") {
            r--;
        } 
        n--;
    }
    cout << r;
}
