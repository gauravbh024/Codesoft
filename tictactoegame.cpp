#include <iostream>
using namespace std;

// Function to display the Tic-Tac-Toe board
void displayBoard(char board[3][3]) {
    cout << "  0 1 2\n";
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << (j < 2 ? "|" : "");
        }
        cout << "\n";
        if (i < 2) cout << "  -+-+-\n"; // Separates rows visually
    }
}

// Function to check if there's a winner
char checkWinner(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0]; // Check rows
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i]; // Check columns
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0]; // Check main diagonal
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2]; // Check opposite diagonal
    return ' ';
}

// Function to check if the board is full
bool isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ') return false; // If any cell is empty, board is not full
    return true;
}

int main() {
    char playAgain;
    do {
        char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
        char player = 'X';
        int row, col;

        cout << "Welcome To Tic-Tac-Toe Game!\n";
    
        while (true) {
            displayBoard(board);
            cout << "Player " << player << " (row col): ";
            cin >> row >> col;
            
            // Validate move
            if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
                cout << "Wrong Input.\n";
                continue;
            }
            
            board[row][col] = player; // Place the player's mark
            
            char winner = checkWinner(board);
            if (winner != ' ') { // If there's a winner
                displayBoard(board);
                cout << "Player " << winner << " wins! Congratulations! you Are  the best\n";
                cout << "Player " << (winner == 'X' ? 'O' : 'X') << " you tried so well, you will win next time!\n";
                break;
            }
            
            if (isBoardFull(board)) { // If board is full and no winner, it's a draw
                displayBoard(board);
                cout << "Oops! You Both Are Too Good. It's A Draw!\n";
                break;
            }
            
            player = (player == 'X') ? 'O' : 'X'; // Switch player
        }
        
        cout << "Thanks for playing Game.\n\tGame end here!\n";
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    
    cout << "Thanks for playing!\n";
    return 0;
}
