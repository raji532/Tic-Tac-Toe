#include "functions.cpp"

int main()
{
    print(matrix);
    while(true)
    {
        player1_input();
        print(matrix);
        decision_loop();
        if(is_full())
            break;

        player2_input();
        print(matrix);
        decision_loop();
    }

    cout << "Game drawn!" << endl;
    return 0;
}