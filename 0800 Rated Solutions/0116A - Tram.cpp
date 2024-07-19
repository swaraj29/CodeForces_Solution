#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cp = 0;  // current passenger 
    int mc = 0;  // maximum capacity
    for(int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        cp = cp - a;
        cp = cp + b;
        mc = max(mc,cp);
    }
    cout << mc;
}
