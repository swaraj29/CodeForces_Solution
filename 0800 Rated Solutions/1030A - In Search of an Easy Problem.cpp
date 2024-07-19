#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // Read the number of problems
    int p;
    int e = 0;
    int h = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> p; // Read the difficulty for each problem
        if(p == 0)
        {
            e++;
        }
        else
        {
            h++;
        }
    }
    
    if(h > 0) // If there is any hard problem
    {
        cout << "HARD";
    }
    else // If all problems are easy
    {
        cout << "EASY";
    }

    return 0;
}
