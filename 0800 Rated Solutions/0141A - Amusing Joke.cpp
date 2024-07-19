#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string g;
    cin >> g;
    string h;
    cin >> h;
    string l;
    cin >> l;
    sort(l.begin(),l.end());
    string p = "";
    p = g + h;
    sort(p.begin(),p.end());
    
    if(p == l){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
