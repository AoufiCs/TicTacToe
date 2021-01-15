#include <iostream>
using namespace std;

int Draw_condition = 0;
char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char Player = 'X';
int win_condition = 0;

void Board()
{
    system("cls");
    cout << " \n\n             Tic Tac Toe           \n\n ";
    cout << " Player 1 [X] ***** Player 2 [O]" << endl;
    cout << "           "   << "    |     |     " << endl;
    for (int i = 0; i < 3; i++)
    {
      cout << "           " << " " << matrix[i][0]<< "  |  "<< matrix[i][1]<< "  |  " << matrix[i][2]<<  endl;
      cout << "           " << "____|_____|_____" << endl;
      cout << "           " << "    |     |     " << endl;
    }
    cout << " Please Choose a number in the field ! " << endl;
    cout << " It's " << Player<< " turn !"<<  endl;
} 
void TooglePlayer()
{
    if (Player == 'X')
        Player = 'O';
    else
        Player = 'X';
}
void Input()
{
    int a;
    cin >> a;
    if (a == 1 && matrix[0][0] == '1')
    {
        matrix[0][0] = Player;
        Draw_condition += 1;

    }
    else if (a == 2 && matrix[0][1] == '2')
    {
        matrix[0][1] = Player;
        Draw_condition += 1;

    }
    else if ((a == 3) && matrix[0][2] == '3')
    {
        matrix[0][2] = Player;
        Draw_condition += 1;

    }
    else if ((a == 4) && matrix[1][0] == '4')
    {
        matrix[1][0] = Player;
        Draw_condition += 1;

    }
    else if ((a == 5) && matrix[1][1] == '5')
    {
        matrix[1][1] = Player;
        Draw_condition += 1;

    }
    else if ((a == 6) && matrix[1][2] == '6')
    {
        matrix[1][2] = Player;
        Draw_condition += 1;

    }
    else if (a == 7 && matrix[2][0] == '7')
    {
        matrix[2][0] = Player;
        Draw_condition += 1;
    }
    else if (a == 8 && matrix[2][1] == '8')
    {
        matrix[2][1] = Player;
        Draw_condition += 1;

    }
    else if (a == 9 && matrix[2][2] == '9')
    {
        matrix[2][2] = Player;
        Draw_condition += 1;

    }
    else if (a < 1 || a > 9)
    {
        cout << "Choose an appropriate number!!";
        system("pause");
    }
    else
    {
        
        cout << "Choose an available number from the field!";
        system("pause");
        TooglePlayer();

    }


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
    else if (Draw_condition == 9)
    {
        cout << "This is a draw!"<<endl;
        win_condition = 1;
    }
    else
        win_condition = 0;
}

int main()
{
    while (win_condition == 0)
    {
        Board();
        Input();
        Board();
        TooglePlayer();
        win();
    }
    system("pause");
    
}

