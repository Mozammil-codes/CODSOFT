#include <iostream>
using namespace std;

/*
 * Function to display the game board
 * @param board The 3x3 game board
 */
void displayBoard(char board[3][3]) {
    cout << " 1 | 2 | 3" << endl;
    cout << " ---------" << endl;
    cout << " 4 | 5 | 6" << endl;
    cout << " ---------" << endl;
    cout << " 7 | 8 | 9" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) {
                cout << "|";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << " ---------" << endl;
        }
    }
}

/*
 * Function to check for a win
 * @param board The 3x3 game board
 * @param player The current player ('X' or 'O')
 * @return True if the player has won, false otherwise
 */
bool checkForWin(char board[3][3], char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

/*
 * Function to check for a draw
 * @param board The 3x3 game board
 * @return True if the game is a draw, false otherwise
 */
bool checkForDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';

    while (true) {
        displayBoard(board);
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        int move;
        cin >> move;

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if (board[row][col] != ' ') {
            cout << "Invalid move, try again." << endl;
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkForWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        if (checkForDraw(board)) {
            displayBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "Play again? (y/n): ";
    char response;
    cin >> response;

    if (response == 'y') {
        main();
    }

    return 0;
}
