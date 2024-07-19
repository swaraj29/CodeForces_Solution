#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    set<char> u(s.begin(), s.end());
    if (u.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
