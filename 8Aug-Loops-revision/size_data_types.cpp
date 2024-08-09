#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Size of int - " << sizeof number << " bytes"<< "\n";
    char gender;
    cout << "Size of char - " << sizeof gender << " bytes" << "\n";

    for (int i = 2147100000; true ; i++){
        cout << i << "\n";
    }
}