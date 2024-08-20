/*
1. Write a program to print integer values from the starting point to end point.
Accept statring and end piont from user.

2. Write a program to print the table of integers from the starting point to end point.
Accept statring and end piont from user.

3. Write a program to print N prime numbers, accept the value of N from user.

4. Write a program to print Nth prime number, accept the value of N from user.

5. Write a program to print sum of prime digits of a given number, accept the number
from user.
*/
// question3
#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter the value of N" << "\n";
    cin >> number;// 10

    cout << "Printitng primes" << "\n";

    int count_prime = 0;
    int number_to_be_check_for_prime = 1;

   while(count_prime != number){
    // find the nextPrime number
    int count_divisible = 0;
    for(int i = 1; i <= number_to_be_check_for_prime; i++){
        if( number_to_be_check_for_prime % i == 0 ){
            count_divisible ++; //1,2
        }
    }
    if(count_divisible == 0){
       cout << number_to_be_check_for_prime << "\n";//2,3,5
       count_prime++;//1,2,3
    }
    number_to_be_check_for_prime ++;//3,4,5
    // fromthe last prime number
   }

}