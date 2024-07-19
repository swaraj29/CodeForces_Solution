#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string p;
    cin >> p;
    int g = 1;
    for(int i = 1; i < n; i++){
        string c;
        cin >> c;
        if(p != c){
            g++;
            p = c;
        }
    }
  cout << g;      
        
}
