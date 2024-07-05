#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int a = 0;
    int b = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            a++;
        }
        else{
            b++;
        }
    }
    cout << abs(b - a) << endl;
}
