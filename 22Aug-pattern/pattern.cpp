/*
WAP program to print the below pattern, using the symbol given by user.

*********
 *******
  *****
   ***
    *
aaaaaaaaa //0, 9
 aaaaaaa  //1+1=2, 7
  aaaaa   //2+2=4, 5
   aaa    //3+3=6, 3  
    a     //4+4=8, 1
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any character" << "\n";
    char symbol = 0;
    cin >> symbol;
    

    for(int i = 0; i < 5; i++)
    {
        //space
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        //symbol
        for(int k = 9; k > (2*i); k--){
            cout << symbol;
        }
        //space
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << "\n";
    }
}