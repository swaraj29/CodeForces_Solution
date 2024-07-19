#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    
    int b = 0;
    
    while(m > 0) 
    {
        if(m >= 100)
        {
            b += 1;
            m -= 100;
        }
        else if(m >= 20)
        {
            b += 1;
            m -= 20;
        }
        else if(m >= 10)
        {
            b += 1;
            m -= 10;
        }
        else if(m >= 5)
        {
            b += 1;
            m -= 5;
        }
        else // m < 5
        {
            b += m;
            m = 0;
        }
    }
    cout << b << endl;
}
