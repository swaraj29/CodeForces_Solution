#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ones = 0;
        int zero = 0;
        for(auto i : s){
            if(i == '1'){
                ones++;
            }
            else{
                zero++;
            }
        }
        int t = min(ones,zero);
        if(t % 2 == 1){
            cout << "DA" << endl;
        }
        else{
            cout << "NET" << endl;
        }
    }
}
