#include <iostream>
using namespace std;

#define c1 'X'          //player1 choice
#define c2 'O'          //player2 choice
#define p1 "Player1"
#define p2 "Player2"

void player1_input();
void player2_input();
void insert(int r, int c, char choice);
void print(char matrix[3][3]);
void decision();
void decision_loop();
bool is_full();
void who_wins(string player);


char matrix[3][3] = {
                        {'#','#','#'},
                        {'#','#','#'},
                        {'#','#','#'}};