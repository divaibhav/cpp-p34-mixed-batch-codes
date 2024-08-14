/*
WAP to accept alternate even and odd numbers from user,
first number will always be even and
perform sum and print the sum,
Stop when user entered 0
*/
#include <iostream>
using namespace std;
int main()
{
    int user_input = 0;
    int sum = 0;
    bool isEven = false;
    do
    {
        cout << "Enter an integer number, or 0 to stop" << "\n";
        cin >> user_input;
        if (!isEven && user_input % 2 == 0)
        {
            sum = sum + user_input;
            isEven = true;
        }
        else if (isEven && user_input % 2 != 0)
        {
            sum = sum + user_input;
            isEven = false;
        }
    } 
    while (user_input != 0);

    cout << "Sum = " << sum << "\n";
}