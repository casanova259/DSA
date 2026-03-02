#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isSafe(int row, int col, vector<vector<char>> &board, int n)
    {
        // check all the cols to the left in the same row
        for (int j = 0; j < col; j++)
        {
            if (board[row][j] == 'Q')
                return false;
        }

        // check for the upper left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j] == 'Q')
                return false;
        }

        // check for the lower left diagonal
        for (int i = row, j = col; i < n && j >= 0; i++, j--)
        {
            if (board[i][j] == 'Q')
                return false;
        }

        // return true if no attack is possible
        return true;
    }

    void solve(int col, vector<vector<char>> &board,
               vector<vector<string>> &ans, int n)
    {
        // if All cols are filled add curr board to the ans
        if (col == n)
        {
            vector<string> temp;
            // temp vecctor to store the solution
            for (int i = 0; i < n; i++)
            {
                // this converts all the rows of the vector into strigns and
                // push them to the temp after that temp can be pushed in ans
                string row(board[i].begin(), board[i].end());
                temp.push_back(row);
            }

            ans.push_back(temp);
            return;
        }

        // Try Placing queen in all rows of the cols
        for (int row = 0; row < n; row++)
        {
            // place the queen to the postn if it is safe
            if (isSafe(row, col, board, n))
            {
                // now place the queen to the board
                board[row][col] = 'Q';
                // recursive call for the next column
                solve(col + 1, board, ans, n);
                // Backtrrack to explore all possible situations
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;

        vector<vector<char>> board(n, vector<char>(n, '.'));

        // start backtracking from col 0
        solve(0, board, ans, n);

        return ans;
    }
};

// N QUEENS II
class Solution
{
public:
    bool isSafe(int row, int col, vector<vector<char>> &board, int n)
    {
        // check all the cols to the left in the same row
        for (int j = 0; j < col; j++)
        {
            if (board[row][j] == 'Q')
                return false;
        }

        // check for the upper left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j] == 'Q')
                return false;
        }

        // check for the lower left diagonal
        for (int i = row, j = col; i < n && j >= 0; i++, j--)
        {
            if (board[i][j] == 'Q')
                return false;
        }

        // return true if no attack is possible
        return true;
    }

    void solve(int col, vector<vector<char>> &board,
               vector<vector<string>> &ans, int n)
    {
        // if All cols are filled add curr board to the ans
        if (col == n)
        {
            vector<string> temp;
            // temp vecctor to store the solution
            for (int i = 0; i < n; i++)
            {
                // this converts all the rows of the vector into strigns and
                // push them to the temp after that temp can be pushed in ans
                string row(board[i].begin(), board[i].end());
                temp.push_back(row);
            }

            ans.push_back(temp);
            return;
        }

        // Try Placing queen in all rows of the cols
        for (int row = 0; row < n; row++)
        {
            // place the queen to the postn if it is safe
            if (isSafe(row, col, board, n))
            {
                // now place the queen to the board
                board[row][col] = 'Q';
                // recursive call for the next column
                solve(col + 1, board, ans, n);
                // Backtrrack to explore all possible situations
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n)
    {
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        int col = 0;
        solve(col, board, ans, n);

        return ans.size();
    }
};

int main()
{
    // created by manik sharma

    return 0;
}