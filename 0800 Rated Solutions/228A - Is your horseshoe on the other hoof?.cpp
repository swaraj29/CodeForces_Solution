#include <iostream>
using namespace std;
int main()
{
    int unique = 0;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == b || a == c || a == d)
    {
        unique ++;
    }if(b == c || b == d)
    {
        unique ++;
    }if(c == d)
    {
        unique ++;
    }
    cout << unique;
}
