#include <iostream>
using namespace std;
int main(){
    int n, z = 1;
    cin >> n;
    while(z){
        n++;
        int a = n % 10;
        int b= (n % 100) / 10;
        int c = (n / 100) % 10;
        int d = n/1000;
        if(a != b && a != c  && b != c && b != d && c != d && d != a){
            z = 0;
        }
    }
    cout << n;
}
