#include <iostream>
using namespace std;
int main(){
    int n, i = 1;
    cin >> n;
    int a[n+1];
    while(n--){
        int p;
        cin >> p;
        a[p]  = i;
        i++;
    }
    for(int j = 1; j < i; j++){
        cout << a[j] << " ";
    }

}
