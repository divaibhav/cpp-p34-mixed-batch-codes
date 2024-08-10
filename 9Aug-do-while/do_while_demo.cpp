#include <iostream>
using namespace std;
int main(){
    /*
    WAP to add all the entered numbers, till user not entering 0 to stop
    */
    int user_input = 0;
     int sum = 0;
   do{
        cout << "Enter an integer number, or 0 to stop" << "\n";       
        cin >> user_input;       
        sum = sum + user_input;
   }// if loop repeats, then print sum
   while(user_input != 0);

   if(sum != 0 ){
   cout <<" Sum = " << sum <<"\n";
   }
}