#include <iostream>
using namespace std;
int main(){
    int k,r;
    cin >> k >> r;
    int s = 1;
    int p = 0;
    
    for(int i = 1; i <= 10; i++){
        p = k * i;
        if(p % 10 != r && p % 10 != 0){
            s++;
        }
        else if(p % 10 == r || p % 10 == 0){
            break;
        } 
    }
    cout << s << endl;
}
