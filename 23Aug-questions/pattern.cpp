/*
Print the follwoing patterns
1.  *
    **
    ***
    ****

2.  ****
    ***
    **
    *

3.     *
      **
     ***
    ****

4.  ****
     ***
      **
       *

5.     *
      * *
     * * *
    * * * *
       *
      * *
     * * *
    * * * *
       ||
       || 
       ||

6.   * * * *
     * * *
      * *
       *


7.     *
      * *
     * * *
    * * * *
    * * * *
     * * *
      * *
       *
*/
#include <iostream>
using namespace std;
int main()
{
    int rows = 10;
    cout << "Pattern 1" << "\n";
    for(int i = 1; i <= rows; i++ )
    {
       for(int j = 1; j <= i; j++)
       {
        cout << "*";
       }
       cout << "\n";
        
    }
    cout << "Pattern 2" << "\n";

    for(int i = 1; i <= rows; i++)
    {
        for(int j = rows; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "Pattern 3" << "\n";
    for (int i = 1; i <= rows; i++){
        // space
        for(int k = rows; k > i; k--){
            cout << " ";
        }
        //symbol
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // linechange
        cout << "\n";
    }

    cout << "Pattern 4" << "\n";
    for (int i = 1; i <= rows; i++)
    {
        // space
         for(int j = 1; j < i; j++)
        {
            cout << " ";
        }
        //symbol
       
        for(int k = rows; k >= i; k--){
            cout << "*";
        }
        // linechange
        cout << "\n";
    }

    cout << "Pattern 5" << "\n";

    for(int i = 1; i <= rows; i++){
        //space
        for(int k = rows; k > i; k--){
            cout << " ";
        }
        //symbol
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }

        //line change
        cout << "\n";
    }
    

}