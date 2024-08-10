/*
WAP to accept only even numbers from user, till user enters 0 to stop,
 and print the even entered numbers


WAP to accept alternate even and odd numbers from user and perform sun and print the sum,
Stop when user entered 0

Sample

*/
#include <iostream>
using namespace std;
int main(){
    
    int user_input = 0;
    
   do{
        cout << "Enter an integer number, or 0 to stop" << "\n";       
        cin >> user_input;       
        if(user_input != 0 && user_input % 2 == 0)
            cout << "user input = " << user_input << " is EVEN" << "\n";//next line 
            cout <<"will print always" << "\n";
   }// if loop repeats, then print sum
   while(user_input != 0);

}