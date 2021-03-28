#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
//Variables
char Player = 'X';
char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char matrixcopie[3][3] = { '1','2','3','4','5','6','7','8','9' };
int Mark = 1, Win_condition = 0, Pc_Move = 0, Cond = 1,index=1, Draw_condition = 0;
//Function deciding Computer moves
void Pc()
{
    srand(time(NULL));
    while (Cond == 1) {
        Pc_Move = (rand() % 9) + 1;
        if (Pc_Move == 1 && matrix[0][0] == '1')
        {
            matrix[0][0] ='O';
            Draw_condition += 1;
            Cond = 0;
        }
        else if (Pc_Move == 2 && matrix[0][1] == '2')
        {
            matrix[0][1] = 'O';
            Draw_condition += 1;
            Cond = 0;

        }
        else if ((Pc_Move == 3) && matrix[0][2] == '3')
        {
            matrix[0][2] = 'O';
            Draw_condition += 1;
            Cond = 0;

        }
        else if ((Pc_Move == 4) && matrix[1][0] == '4')
        {
            matrix[1][0] = 'O';
            Draw_condition += 1;
            Cond = 0;

        }
        else if ((Pc_Move == 5) && matrix[1][1] == '5')
        {
            matrix[1][1] = 'O';
            Draw_condition += 1;
            Cond = 0;

        }
        else if ((Pc_Move == 6) && matrix[1][2] == '6')
        {
            matrix[1][2] = 'O';
            Draw_condition += 1;
            Cond = 0;

        }
        else if (Pc_Move == 7 && matrix[2][0] == '7')
        {
            matrix[2][0] = 'O';
            Draw_condition += 1;
            Cond = 0;
        }
        else if (Pc_Move == 8 && matrix[2][1] == '8')
        {
            matrix[2][1] = 'O';
            Draw_condition += 1;
            Cond = 0;

        }
        else if (Pc_Move == 9 && matrix[2][2] == '9')
        {
            matrix[2][2] = 'O';
            Draw_condition += 1;
            Cond = 0;

        }

    }

}
//Function deciding Player/User moves
void Input()
{
    cout << " Please Choose a number in the field ! " << endl;
    int a;
    cin >> a;
    if (a == 1 && matrix[0][0] == '1')
    {
        matrix[0][0] = 'X';
        Draw_condition += 1;
        Cond = 1;

    }
    else if (a == 2 && matrix[0][1] == '2')
    {
        matrix[0][1] = 'X';
        Draw_condition += 1;
        Cond = 1;

    }
    else if ((a == 3) && matrix[0][2] == '3')
    {
        matrix[0][2] = 'X';
        Draw_condition += 1;
        Cond = 1;

    }
    else if ((a == 4) && matrix[1][0] == '4')
    {
        matrix[1][0] = 'X';
        Draw_condition += 1;
        Cond = 1;

    }
    else if ((a == 5) && matrix[1][1] == '5')
    {
        matrix[1][1] = 'X';
        Draw_condition += 1;
        Cond = 1;

    }
    else if ((a == 6) && matrix[1][2] == '6')
    {
        matrix[1][2] = 'X';
        Draw_condition += 1;
        Cond = 1;

    }
    else if (a == 7 && matrix[2][0] == '7')
    {
        matrix[2][0] = 'X';
        Draw_condition += 1;
        Cond = 1;
    }
    else if (a == 8 && matrix[2][1] == '8')
    {
        matrix[2][1] = 'X';
        Draw_condition += 1;
        Cond = 1;

    }
    else if (a == 9 && matrix[2][2] == '9')
    {
        matrix[2][2] = 'X';
        Draw_condition += 1;
        Cond = 1;

    }
    else if (a < 1 || a > 9)
    {
        cout << "Choose an appropriate number!!" << endl;
        system("pause");
    }
    else
    {

        cout << "Choose an available number from the field!" << endl;
        system("pause");

    }
}
//Checking winning conditions 
void win()
{
    if (matrix[0][0] == matrix[1][1] and matrix[0][0] == matrix[2][2])
    {
        cout << "The winner is : " << matrix[0][0] << endl;
        Win_condition = 1;
    }

    else if (matrix[0][0] == matrix[0][1] and matrix[0][0] == matrix[0][2])
    {
        cout << "The winner is : " << matrix[0][0] << endl;
        Win_condition = 1;
    }
    else if (matrix[0][0] == matrix[1][0] and matrix[0][0] == matrix[2][0])
    {
        cout << "The winner is : " << matrix[0][0] << endl;
        Win_condition = 1;
    }
    else if (matrix[2][0] == matrix[2][1] and matrix[2][0] == matrix[2][2])
    {
        cout << "The winner is : " << matrix[2][0] << endl;
        Win_condition = 1;
    }
    else if (matrix[2][2] == matrix[1][2] and matrix[2][2] == matrix[0][2])
    {
        cout << "The winner is : " << matrix[2][2] << endl;
        Win_condition = 1;
    }
    else if (matrix[0][2] == matrix[1][1] and matrix[0][2] == matrix[2][0])
    {
        cout << "The winner is : " << matrix[0][2] << endl;
        Win_condition = 1;
    }
    else if (matrix[1][0] == matrix[1][1] and matrix[1][0] == matrix[1][2])
    {
        cout << "The winner is : " << matrix[1][0] << endl;
        Win_condition = 1;
    }
    else if (matrix[0][1] == matrix[1][1] and matrix[0][1] == matrix[2][1])
    {
        cout << "The winner is : " << matrix[0][1] << endl;
        Win_condition = 1;
    }
    else if (Draw_condition == 9)
        cout << "Oops! Seems like a draw!!" << endl;
    else
        Win_condition = 0;
}
//Clearing all data incase of a restart
void ClearAll() {
    Win_condition = 0;
    Draw_condition = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix[i][j] = matrixcopie[i][j];
}
//Board of the game
void Board()
{
    system("cls");
    cout << " \n\n             Tic Tac Toe           \n\n ";
    cout << " You are  [X] *** The Computer is [O]" << endl;
    cout << "           " << "    |     |     " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "           " << " " << matrix[i][0] << "  |  " << matrix[i][1] << "  |  " << matrix[i][2] << endl;
        cout << "           " << "____|_____|_____" << endl;
        cout << "           " << "    |     |     " << endl;

    }
}
void Game()
{
    while (Win_condition == 0)
    {
        Board();
        Input();
        if (Draw_condition != 9)
            Pc();
        else
        {
            win();
            break;
        }
        Board();
        win();
    }
    cout << " If u want to play again, click [R] " << endl;
    char R;
    cin >> R;
    if (R == 'R' || R == 'r')
    {
        ClearAll();
    }
    else
        index = 0;

}
/***************************************************************************************************************************************************
*****************************************************************Game's Main Program******************************************************************
****************************************************************************************************************************************************/
int main()
{
    while (index == 1)
    {
        Game();
    }
    cout << "Thanks for playing!";
    
}

