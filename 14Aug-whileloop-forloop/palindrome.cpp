/*
WAp to check whether the given number is palindrome or not
a number which is equal to reversal of that number
121 is equal to reversal of it -> 121

123456 -> not a palindrome
123321 -> is a palindrome
// digit extraction 
// number formation
// compare with original number
 digit nikalenge -> number banana chalu karenge
 new number = 0
 
 1234   -> 4 * 1000         new number = new number * 10 + digit = 4
        -> 3 * 100          new number = new number * 10 + digit = 43
        -> 2 * 10           new number = new number * 10 + digit = 432
        -> 1 * 1            new number = new number * 10 + digit = 4321
*/

#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number" << "\n";
    cin >> number;
    int temp = number;

    int new_number = 0;

    while(number != 0)//1234
    {
        int digit = number % 10;// 4,3,2,1
        number = number / 10;//123,12,1,0
        new_number = new_number * 10 + digit;//4, 43, 432,4321
    }
    if(temp == new_number)
    {
        cout << "Number is palindrome" << "\n";
    }
    else
    {
         cout << "Number is not a  palindrome" << "\n";
    }
}