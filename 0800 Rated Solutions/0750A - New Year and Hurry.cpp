#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int a = 240 - k;
    int p = 0;
    
    for(int i = 1; i <= n; i++)
    {
        int t = 5*i;
        
        if( t <= a)
        {
            p++;
        }
        a -= t;
    }
    
    cout << p << endl;
}
