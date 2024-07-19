#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c;
    while(n){
        cin >> c;
        if(c % 2 == 0)
        {
            int k = c / 2;
            cout << k - 1 << endl;
        }
        else if(c % 2 == 1){
            int p = c / 2;
            cout << p << endl;
        }
        n--;
        
    }
}
