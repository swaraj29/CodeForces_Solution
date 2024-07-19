#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int l = 0;
    string s = to_string(n);  // Convert n to a string
    for (char c : s)
    {
        if (c == '4' || c == '7')
        {
            l++;
        }
    }
    if(l == 7 || l == 4 )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
