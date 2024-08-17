// prime number -  those numbers which are completely divisible by 
// 1 and itself
// WAp to check whether the given number is prime number
/*
input = 17, 15
starting with 1, and check for divisiblity, if divisible count
repeat this process till number itself

if number is prime, then count value is = 2
otherwise count value can be anything
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an integer value" << "\n";
    int input = 0;
    cin >> input;

    int count = 0;

    for(int i = 1; i <= input; i++)
    {
        if( input % i == 0){
            count++;
        }
    }

    if(count == 2)
    {
        cout << "Number is a Prime Number" << "\n";
        
    }
    else
    {
        cout << "NUmber is not a prime number" << "\n";
    }

}