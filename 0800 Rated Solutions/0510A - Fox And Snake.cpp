#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    string s = "";
    string t = "";
    int j = 0;
    
    for(int i = 0; i < n; i++)
    {
        s = string(m, '#');
        t = string(m - 1, '.');
        
        if(i % 2 == 0){
            cout << s << endl;
        }
        else if(i % 2 == 1){
            if(j % 2 == 0){
            t = s.replace(0, m - 1, t);
            cout << t << endl;
            j++;
            }
            else{
            t = s.replace(1, m- 1, t);
            cout << t << endl;
            j++;
            }
        }
    }
}
