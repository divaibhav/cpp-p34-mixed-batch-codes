/*
WAP to accept 5 numbers from use and 
check if the input is in increasing order. 
*/
#include <iostream>
using namespace std;
int main()
{
    int last_input = 0;
    int input = 0;
    bool is_not_increasing = false;
    int i;
    for(i = 1; i <= 5; i++)
    {
        cout << "enter input in increasing order" << "\n";
        cin >> input;
        // considering first input is non zero and non negative
        if(last_input < input)
        {
            last_input = input;
            
        }
        else
        {
            is_not_increasing = true;
            break;
        }
    }
    if(is_not_increasing)
    {
        cout << "Input not in increasing order" << "\n";
        cout << "I = " << i << "\n";
    }
    else
    {
        cout << "Input is in increasing order" << "\n";
        cout << "I = " << i << "\n";
    }
}