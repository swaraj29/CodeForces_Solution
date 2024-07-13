#include <iostream>
using namespace std;

int main() {
    int m[5][5];
    int one_row, one_col; // Position of the one

    // Read matrix values from input
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                one_row = i;
                one_col = j;
            }
        }
    }
    
    // Calculate the minimum moves to center the one
    int moves = abs(one_row - 2) + abs(one_col - 2); // 2,2 is the center of a 5x5 matrix in zero-indexed

    // Output the number of moves required
    cout << moves;
    
    return 0;
}
