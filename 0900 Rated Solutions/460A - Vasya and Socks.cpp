#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int days = 0;
    
    for(int i = 1; i <= n; i++){
        if(i % m == 0){
            n ++;
        }
        days ++;
    }
    cout << days << endl;
}
