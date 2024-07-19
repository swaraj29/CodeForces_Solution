#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n] = {0};
    int a,m=n;
    cin >> a;
    int x = 0;
    while(a--){
        int p;
        cin >> p;
        arr[p - 1] = p;
    }
    int b;
    cin >> b;
    while(b--){
        int q;
        cin >> q;
        arr[q - 1] = q;
    }  
    for(int i = 0; i < m; i++){
        if(arr[i] == 0){
            x++;
            cout << "Oh, my keyboard!";            
            break;
        }
    }
    if(x == 0){
        cout << "I become the guy.";
    }
}
