#include <iostream>
using namespace std;
int main()
{
    int magic_number = 55;
    int user_input = 0;

    int count = 0;

    while(user_input != magic_number){
        cout << "Enter a number, try to enter magic number" << "\n";
        cin >> user_input;
        count ++;
        if(count % 5 == 0){
            cout << "Magic number is a double digit number like 11" << "\n";
            
        }
        //cin.clear();
    }
    return 0;
}