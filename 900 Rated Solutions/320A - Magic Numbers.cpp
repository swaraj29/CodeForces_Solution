#include <iostream>
#include <regex>
using namespace std;

bool magic(string &n){
    regex p("^(1|14|144)*$");
    return regex_match(n, p);
}

int main()
{
    string n;
    cin >> n;
    
    if (magic(n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

