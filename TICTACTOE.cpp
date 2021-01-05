#include <iostream>
using namespace std;

int S = 0;
char matrix[3][3] =  {'1', '2','3','4','5','6','7','8','9' };
char player = 'X';
bool win_condition = 0 ;

void board()
{
    system("cls");
    cout<<"Tic Tac Toe"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void toogleplayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';

}
void win()
{
    if (matrix[0][0] == matrix[1][1] and matrix[0][0] == matrix[2][2])
    {
        cout << "The winner is : " << matrix[0][0] << endl;
        win_condition = 1;

    }

    else if (matrix[0][0] == matrix[0][1] and matrix[0][0] == matrix[0][2])
    {
        cout << "The winner is : " << matrix[0][0] << endl;
        win_condition = 1;
    }
    else if (matrix[0][0] == matrix[1][0] and matrix[0][0] == matrix[2][0])
    {
        cout << "The winner is : " << matrix[0][0] << endl;
        win_condition = 1;
    }
    else if (matrix[2][0] == matrix[2][1] and matrix[2][0] == matrix[2][2])
    {
        cout << "The winner is : " << matrix[2][0] << endl;
        win_condition = 1;
    }
    else if (matrix[2][2] == matrix[1][2] and matrix[2][2] == matrix[0][2])
    {
        cout << "The winner is : " << matrix[2][2] << endl;
        win_condition = 1;
    }
    else if (matrix[0][2] == matrix[1][1] and matrix[0][2] == matrix[2][0])
    {
        cout << "The winner is : " << matrix[0][2] << endl;
        win_condition = 1;
    }
    else if (matrix[1][0] == matrix[1][1] and matrix[1][0] == matrix[1][2])
    {
        cout << "The winner is : " << matrix[1][0] << endl;
        win_condition = 1;
    }
    else if (matrix[0][1] == matrix[1][1] and matrix[0][1] == matrix[2][1])
    {
        cout << "The winner is : " << matrix[0][1] << endl;
        win_condition = 1;
    }
    else if (S == 9)
    {
        cout << "It's a draw!";
        win_condition = 1;
    }
    else
        win_condition = 0;
        
}
void input()
{
    
    int a;
    cout << "Please choose the number u wanna play between 1 and 9" << endl;
    cin >> a; 
    if (a == 1)
    {
        matrix[0][0] = player;
        S += 1;
    }
    else if (a == 2)
    {
        matrix[0][1] = player;
        S += 1;
    }
    else if (a == 3)
    {
        matrix[0][2] = player;
        S += 1;
    }
    else if (a == 4)
    {
        matrix[1][0] = player;
        S += 1;
    }
    else if (a == 5)
    {
        matrix[1][1] = player;
        S += 1;
    }
    else if (a == 6)
    {
        matrix[1][2] = player;
        S += 1;
    }
    else if (a == 7)
    {
        matrix[2][0] = player;
        S += 1;
    }
    else if (a == 8)
    {
        matrix[2][1] = player;
        S += 1;
    }
    else if (a == 9)
    {
        matrix[2][2] = player;
        S += 1;
    }
    else if (a < 1 or a>9)
        cout << "Please choose an appropriate number!" << endl;
    
}
int main()
{
    board(); 
    while (win_condition == 0)
    {
        input();
        board();
        toogleplayer();
        win();
    }
    
   

    
}
