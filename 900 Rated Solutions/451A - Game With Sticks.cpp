#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    // Find the minimum of n and m
    int min_dimension = min(n, m);

    // Determine the winner based on the parity of min_dimension
    if (min_dimension % 2 == 1) {
        cout << "Akshat" << endl;
    } else {
        cout << "Malvika" << endl;
    }
}
