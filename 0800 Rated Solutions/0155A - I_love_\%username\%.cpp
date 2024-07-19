#include <iostream>
using namespace std;
int main(){
    int n,min,max,x,t = 0;
    cin >> n >> min;
    max = min;
    
    while(n > 1){
        cin >> x;
        
        if(x > max){
            t++;
            max = x;
        }
        else if(x < min){
            t++;
            min = x;
        }
        n--;
        
    }
    cout << t;
    
}
