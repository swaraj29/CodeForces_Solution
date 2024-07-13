#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int count = 0;
    int m;
    
    for(int i = 1; i <= w; i++)
    {
        count += k * i;
    }
    m = count - n; 
    cout << max(0, m); 

    return 0;
}
