#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));
    int a, c, b = rand() % 100;
    string s;
start:
    cout << "Welcome to the Game of Guessing Number\nGuess the number we generated for you\n";
    for (int i = 10; i >= 0; i--)
    {

        cin >> a;
        s = (a > b) ? "Try a lower number\n" : "Try a Higher Number\n";
        if (a == b)
        {
            cout << "Congratulations you have guessed the number " << b << endl
                 << "Enter 1 to restart the game & 0 to exit\n";
            cin >> c;
            if (c == 1)
            {
                goto start;
            }
            else if (c == 0)
            {
                goto end;
            }
            else
            {
                cout << "Enter a valid Input\n";
            }
        }
        cout << "Tries Left " << i << endl;
        cout << s;
    }

end:
    return 0;
}