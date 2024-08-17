/*
WAP to accept 5 numbers from user and find the minimum
value from the entered value.
*/
#include <iostream>
using namespace std;
int main()
{
    //cout << "Enter an integer value " << "\n";
    int minimum = 0;
    //cin >> minimum;
    int input = 0;
    for(int i = 1 ; i <= 5; i++)
    {
        cout << "Enter an integer value " << "\n";
        if(i == 1)
        {
            cin >> minimum;
        }
        else
        {
            cin >> input;
            if(minimum > input)
            {
                minimum = input;
            }
        }
    }
    cout << "Minimum among entered values = " << minimum << "\n";

}