#include <iostream>
using namespace std;
int main()
{
    int balance = 5000;
    cout << "enter withdrawal amount" << "\n";
    int withdrawal_amt = 0;
    cin >> withdrawal_amt;

    bool is_withdrawal_done = false;

    if(withdrawal_amt <= balance){
        cout << "Withdrawal successful" << "\n";
        is_withdrawal_done = true;
    }

    if(!is_withdrawal_done){
        cout << "insufficient balance" << "\n";
    }
    return 0;

}