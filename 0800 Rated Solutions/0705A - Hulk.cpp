#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(i > 1)
        {
            cout << "that ";
        }
        if(i % 2 == 1)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
    }
    cout << "it";
}
