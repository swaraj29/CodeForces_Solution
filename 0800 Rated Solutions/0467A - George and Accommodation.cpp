#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m =0;
    while(n--){
        int l,c;
        cin >> l >> c;
        if(c - l >= 2){
            m++;
        }
    }
    cout << m;
}
