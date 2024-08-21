// Hello friedns, I am sorry you guys were absent from today's class
/*
*****
*****
*****
*****
*****

*
**
***
****
*****

*****
****
***
**
*


*/
#include <iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";
    cout << "\n";
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";

    /*
    *****
    ****
    ***
    **
    *
    */
   for(int i = 1 ; i <= 5 ; i++){
        for(int j = 5; j >= i; j--){
            cout << "*";
        }
        cout << "\n";
   }
   cout << "\n";
    cout << "\n";

    /*
        *****
         ****
          ***
           **
            *
    */
   for(int i = 1; i <= 5; i++){
    for(int j = 1; j < i; j++){
        cout << " ";
    }
    for(int k = 5; k >= i; k--){
        cout << "*";
    }
    cout << "\n";
   }
    cout << "\n";
    cout << "\n";

   /*
        *
       **
      ***
     ****
    ***** 
   
   */
  for(int i = 1; i <= 5; i++){
    for(int j = 5; j > i; j--){
        cout << " ";
    }
    for(int k = 1; k <= i; k++){
        cout << "*";
    }
    cout << "\n";
   }
    cout << "\n";
    cout << "\n";

    //WAP to print the below pattern, but accept the symbol from user.
    /*
    0000*0000
    000***000
    00*****00
    0*******0
    *********

    0 -> representing space
    
    */
   


}