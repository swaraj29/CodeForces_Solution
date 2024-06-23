#include <iostream>
using namespace std;
int main() {
    long long sum = 0;
    long long n;
    cin >> n;
    sum = (n + 1)/2;
    if(n % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        cout << -sum;
    }
}
