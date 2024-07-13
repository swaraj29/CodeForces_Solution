#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0;
    unordered_map<char, int> mp;

    for (char &c : s) {
        mp[c]++;
    }
    for (auto &i : mp) {
        if (i.second % 2 != 0) {
            count++;
        }
    }
    if (count == 0 || count % 2 == 1) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
}

