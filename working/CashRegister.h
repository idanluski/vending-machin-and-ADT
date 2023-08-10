/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
using namespace std;
#include <iostream>
#ifndef TASK2_CASHREGISTER_H
#define TASK2_CASHREGISTER_H
class CashRegister {
private:
    int cashOnHands; // Money on the mashon
public:

    CashRegister();
    CashRegister(int cash);  //dif ctor or set constructor;
    const int getCurrentBalance() const { return cashOnHands;}//returns value of cashOnHand.
    void acceptAmount(int set);     //- receive the amount deposited by
                                                        // the customer and update the amount in the register.
    ~CashRegister(){ }//defoult destructor

};

#endif //TASK2_CASHREGISTER_H
