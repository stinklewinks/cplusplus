#include <iostream>

using namespace std;

// A simple addition function that takes two parameters.
int total(int a, int b){
    return a + b;
};


char row_one[3] = {'*', '*', '*'};
char row_two[3] = {'*', '*', '*'};
char row_three[3] = {'*', '*', '*'};

char game_board(){
    // Row One
    cout << row_one[0] << "        ";
    cout << row_one[1] << "        ";
    cout << row_one[2] << "        ";
    cout << "\n\n\n";

    // Row Two
    cout << row_two[0] << "        ";
    cout << row_two[1] << "        ";
    cout << row_two[2] << "        ";
    cout << "\n\n\n";
    // Row Three
    cout << row_three[0] << "        ";
    cout << row_three[1] << "        ";
    cout << row_three[2] << "        ";
    cout << "\n";
}

char game_switch = 'y';
char answer;
int row_select;
int col_select;

// A simple program to test a conditional statement
int main() {
    while(game_switch == 'y') {
        cout << "Welcome to Tic-Tac-Toe. You will be playing a CPU! \n";
        cout << "Let's display the board\n";
        game_board();
        // Player selects X's or O's
        cout << "Which would you like X's or O's?: ";
        cin >> answer;
        cout << "\nGreat! Now let's play. Select the row of your first move: ";
        cin >> row_select;
        cout << "\nNow select the column to place your move.:  ";
        cin >> col_select;

        if (row_select == 1) {
            row_one[col_select] = answer;
        } else if (row_select == 2) {
            row_two[col_select] = answer;
        } else {
            row_three[col_select] = answer;
        }

        game_board();
        cout << "Would you like to play again? y or n: ";
        cin >> game_switch;
    }
    return 0;
}
