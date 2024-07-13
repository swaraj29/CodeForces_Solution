#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = false;
    for(int i = 0; i < s.size(); i++){
        if( (s[i] == 'H' || s[i] == 'Q') || s[i] == 57){
            flag = true;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
