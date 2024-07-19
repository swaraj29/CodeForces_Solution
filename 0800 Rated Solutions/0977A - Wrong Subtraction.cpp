#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    
    while (k)
    {
        if(n % 10 != 0)
        {
             n = n - 1;
        }
        else
        {
            n = n / 10;
        }
        k--;
    }
    cout << n;
}
