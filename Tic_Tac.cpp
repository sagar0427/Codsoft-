#include <iostream>
#include <thread>

using namespace std;
template <class T>
void Display(int size, T a[][3])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << "\t";
        }

        cout << endl;
    }
}
void winner(char symbol, string s1, string s2)
{

    switch (symbol)
    {
    case 'X':
        cout << "The winner is " << s1 << "\n Enter 1 to restart the game & 0 to exit\n";
        break;

    case 'O':
        cout << "The winner is " << s2 << "\n Enter 1 to restart the game & 0 to exit\n";
        break;

    default:
        cout << "Drawn\n press 1 to restart the game & 0 to exit\n";
        break;
    }
}
bool checkWin(char board[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}
template <class T>
void Position(T b[][3], int a, char c)
{
    switch (a)
    {
    case 1:
    {
        b[0][0] = c;
    }
    break;

    case 2:
    {
        b[0][1] = c;
    }
    break;

    case 3:
    {
        b[0][2] = c;
    }
    break;

    case 4:
    {
        b[1][0] = c;
    }
    break;

    case 5:
    {
        b[1][1] = c;
    }
    break;

    case 6:
    {
        b[1][2] = c;
    }
    break;

    case 7:
    {
        b[2][0] = c;
    }
    break;

    case 8:
    {
        b[2][1] = c;
    }
    break;

    case 9:
    {
        b[2][2] = c;
    }
    break;
    }
}
template <class T>
void Input(T a[3][3], int size)
{
    cout << "Enter the elements in the array\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> a[i][j];
        }
    }
}
int main()
{
    int decision, size = 3, a;
    string s1, s2;
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    char symbol, arr2[3][3] = {'_', '_', '_',
                               '_', '_', '_',
                               '_', '_', '_'};

    cout << "Welcome to the Tic Tac Toe game here's How you will Play it" << endl
         << "Enter Player 1 Name Having Symbol 'X'\n";
    getline(cin, s1);

    cout << "Enter Player 2 Name Having Symbol 'O'\n";
    getline(cin, s2);
    cout << "You will enter the number to Choose the position of your symbol in the Game" << endl;

    Display(size, arr);
restart:
    cout << "Lets Start the Game, Enter the position of Your Symbol\n";
    for (int i = 0; i <= 3; i++)
    {
        cout << "Player 1\n";
        symbol = (symbol == 'X' ? 'O' : 'X');
        cin >> a;
        Position(arr2, a, symbol);
        Display(size, arr2);
        if (checkWin(arr2, symbol) == 1)
        {
            goto next;
        }
        cout << "Player 2\n";
        symbol = (symbol == 'X' ? 'O' : 'X');
        cin >> a;
        Position(arr2, a, symbol);
        Display(size, arr2);
        if (checkWin(arr2, symbol) == 1)
        {
            goto next;
        }
    }
    cout << "Player 1\n";
    symbol = (symbol == 'X' ? 'O' : 'X');
    cin >> a;
    Position(arr2, a, symbol);
    Display(size, arr2);
    if (checkWin(arr2, symbol) == 1)
    {
        goto next;
    }
next:
    winner(symbol, s1, s2);
    cin >> decision;
    if (decision == 1)
    {
        goto restart;
    }

    return 0;
}