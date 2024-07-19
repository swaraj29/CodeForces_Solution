#include <iostream>
#include <vector>
using namespace std;

int main()
{
        int n;
        cin >> n;
        vector<int> h(n),g(n);
        for(int i = 0; i < n; i++)
        {
            cin >> h[i] >> g[i];
        }
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i != j)
                {
                    if(h[i] == g[j])
                    {
                        c++;
                    }
                }
            }
        }
        cout << c;
}
