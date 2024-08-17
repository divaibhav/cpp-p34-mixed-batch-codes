/*
WAP to accept 5 numbers from user, and find the maximum number among
the entered numbers.
*/
#include <iostream>
using namespace std;
int main()
{
    int maximum = 0;
    int input = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter an integer number" << "\n";
        cin >> input;

        if (maximum < input) // 0, 5 | 5 , 10 | 10 , 5
        {
            maximum = input;
        }
    }

    cout << "The maximum number among the entered numbers = "
         << maximum << "\n";
}