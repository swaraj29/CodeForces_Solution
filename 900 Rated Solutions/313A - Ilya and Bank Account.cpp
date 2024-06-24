#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    if (n < 0) {
        int a = n / 10; // Remove the last digit
        // Remove the second last digit and keep the last digit
        int b = (n / 100) * 10 + (n % 10);
        // Find the maximum between a and b
        int c = max(a, b);
        cout << c << endl;
    } else {
        cout << n << endl; // If n is positive, print n
    }
}
