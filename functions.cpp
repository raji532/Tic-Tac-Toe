#include "headers.h"

void who_wins(string player)
{
    cout << player << " Wins the game!" << endl;
    exit(0);
}

void decision_loop()
{
    char choice3 = matrix[0][0];
    bool flag3 = true;//for right diagonal
    for(int i=0; i<3 ; i++)
    {
        char choice1 = matrix[i][0];
        char choice2 = matrix[0][i];
        bool flag1 = true;//for row
        bool flag2 = true;//for column
        for(int j=2; j>=0 ; j--)
        {
            if(choice1 == matrix[i][j] && flag1 == true )
                flag1 = true;
            else
                flag1 = false;
            if(choice2 == matrix[j][i] && flag2 == true )
                flag2 = true;
            else
                flag2 = false;

            if(choice3 == matrix[i][i] && flag3 == true )
                flag3 = true;
            else
                flag3 = false;
        }
        if(flag1 == true && choice1 == c1)
            who_wins(p1);
        else if(flag1 == true && choice1 == c2)
            who_wins(p2);
        if(flag2 == true && choice2 == c1)
            who_wins(p1);
        else if(flag2 == true && choice2 == c2)
            who_wins(p2);
    }
    if(flag3 == true && choice3 == c1)
        who_wins(p1);
    else if(flag3 == true && choice3 == c2)
        who_wins(p2);
    if(matrix[0][2] == c1 && matrix[1][1] == c1 && matrix[2][0] == c1)
        who_wins(p1);
    else if(matrix[0][2] == c2 && matrix[1][1] == c2 && matrix[2][0] == c2)
        who_wins(p2);
}
//taking player1 input
void player1_input()
{
    int row,col;
    cout << "Player1:\nEnter row index: ";
    cin >> row;
    cout << "Enter col index: ";
    cin >> col;
    insert(row,col,c1);
}
//taking player2 input
void player2_input()
{
    int row,col;
    cout << "Player2:\nEnter row index: ";
    cin >> row;
    cout << "Enter column index: ";
    cin >> col;
    insert(row,col,c2);
}

//to validate and insert the user choice
void insert(int r, int c, char choice)
{
    if(matrix[r][c] == c1 || matrix[r][c] == c2)
    {
        cout<<"Invalid choice!" << endl;
        if(choice == c1)
            player1_input();
        else
            player2_input();
    }
    else
        matrix[r][c] = choice;
}

//to print the matrix
void print(char matrix[3][3])
{
    for(int i=0; i<3 ; i++)
    {
        for(int j=0; j<3 ; j++)
            cout << matrix[i][j] << " | ";
    cout << endl;
    }
}

bool is_full()
{
    for(int i=0; i<3 ; i++)
        for(int j=0; j<3 ; j++)
            if(matrix[i][j] == '#')
                return false;
    return true;
}