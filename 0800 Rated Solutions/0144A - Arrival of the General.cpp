#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n] = {0};
    int k = n;
    int c = 0;
    int i = 0;
    while(n--)
    {
        int x;
        cin >> x;
        arr[i] = x;
        i++;
    }
        int p = 0;
        int q = 0;
    for(int i = 0; i < k; i++)
    {
        if(arr[i] > arr[p]){
            p = i;
        }
        if(arr[i] <= arr[q]){
            q = i;
        }
    }
    int t = p + k - q - 1;
    if(p > q)
    {
        t--;
    }
    cout << t;
    
}
