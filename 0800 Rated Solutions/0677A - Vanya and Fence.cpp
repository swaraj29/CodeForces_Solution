#include <iostream>
using namespace std;
int main()
{
    int f,h,w  = 0;
    cin >> f >> h;
    while(f--)
    {
        int c;
        cin >> c;
        if(c > h)
        {
            w +=2;
        }
        else
        {
            w++;
        }
    }
    cout << w;
}
