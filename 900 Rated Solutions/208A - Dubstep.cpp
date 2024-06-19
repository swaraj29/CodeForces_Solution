#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    string o = "";
    bool isfound = true;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            i += 2;
            if(!isfound){
                o += " ";
            }
            continue;
        }
        else{
            isfound = false;
            o += s[i];
        }
    }
    
    cout << o << endl;
}
