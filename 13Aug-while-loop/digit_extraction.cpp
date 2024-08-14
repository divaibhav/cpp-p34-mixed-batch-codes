//digit extraction
// 1234
#include <iostream>
using namespace std;
int main(){
    int number = 1234;

    while (number != 0){
        int digit = number % 10;
        number  = number / 10;
        cout << digit << "\n";
    }
}