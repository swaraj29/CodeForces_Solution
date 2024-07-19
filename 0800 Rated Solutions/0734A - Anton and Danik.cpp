#include <iostream>
using namespace std;
int main()
{
    int g;
    cin >> g;
    string w;
    cin >> w;
    int a = 0;
    int d = 0;
    for(int i = 0; i < g; i++)
    {
        if(w[i] == 'A')
        {
            a++;  
        }
        else if(w[i] == 'D')
        {
            d++;
        }
    }
    if(a > d)
    {
        cout << "Anton";
    }
    else if(a < d)
    {
        cout << "Danik";
    }
    else if(a == d)
    {
        cout << "Friendship";
    }
}
