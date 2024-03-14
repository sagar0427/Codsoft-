#include <iostream>

using namespace std;

int main()
{
    int a, b, r, con1, con2;
    char c;
    cout << "Welcome to the Simple calculator in C++\n";
    cout << "Enter the no's you want to do operation with\n";
next1:
    cout << "First no: ";

    cin >> a;
next2:
    cout << "Second no: ";
    cin >> b;
    cout << "Select the operation to be performed (*,+,-,/) \n";
    cin >> c;
    switch (c)
    {
    case '/':

        cout << "The result is " << (double)a / b << endl;
        r = a / b;

        break;

    case '*':

        cout << "The result is " << a * b << endl;
        r = a * b;

        break;

    case '-':

        cout << "The result is " << a - b << endl;
        r = a - b;
        break;

    case '+':

        cout << "The result is " << a + b << endl;
        r = a + b;

        break;

    default:
        cout << "Enter a Valid operator\n";
        break;
    }

    cout << "Press 1 to continue  and 0 to exit\n";
    cin >> con1;
    if (con1 == 1)
    {
        cout << "Do you want to use result of the above operation as first no in further calculation" << endl
             << "Press 1 to yes and 0 to no." << endl;
        cin >> con2;
        if (con2 == 1)
        {
            a = r;
            goto next2;
        }
        else if (con2 == 0)
        {
            goto next1;
        }
        else
        {
            cout << "Enter a valid input";
        }

        goto exit;
    }
    else if (con1 == 0)
    {
        goto exit;
    }
    else
    {
        cout << "Enter a valid Input\n";
    }

exit:
    return 0;
}
