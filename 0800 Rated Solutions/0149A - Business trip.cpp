#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> vec(12);
    
    int sum = 0;
    int c  = 0;
    
    for(int i = 0; i < 12; i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i = vec.size() - 1; i >= 0; i--){
        if(sum >= k){
            break;
        }
        else{
            sum += vec[i];
            c++;
        }
    }
    if(sum < k){
        cout << -1 << endl;
    }
    else{
        cout << c << endl;
    }
}
