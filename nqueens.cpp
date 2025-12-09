#include <bits/stdc++.h>
using namespace std;

// Check if placing a queen at (row, col) is safe
bool isSafe(vector<string> &board, int row, int col, int n) {
    // Check column
    for (int i = 0; i < row; i++)
        if (board[i][col] == 'Q')
            return false;

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q')
            return false;

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 'Q')
            return false;

    return true;
}

// Main solver function using backtracking
void solve(int row, vector<string> &board, int n, vector<vector<string>> &solutions) {
    if (row == n) {
        solutions.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';
            solve(row + 1, board, n, solutions);
            board[row][col] = '.';  // backtrack
        }
    }
}

int main() {
    int n;
    cout << "Enter value of N: ";
    cin >> n;

    vector<string> board(n, string(n, '.'));
    vector<vector<string>> solutions;

    solve(0, board, n, solutions);

    cout << "\nTotal Solutions = " << solutions.size() << "\n";

    // Print solutions
    for (int i = 0; i < solutions.size(); i++) {
        cout << "\nSolution " << i + 1 << ":\n";
        for (string row : solutions[i])
            cout << row << "\n";
    }

    return 0;
}
