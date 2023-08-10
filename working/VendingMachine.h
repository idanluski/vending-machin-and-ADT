/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#include "DispenserType.h"
#include "CashRegister.h"
#include <iostream>
#ifndef TASK2_VENDINGMACHINE_H
#define TASK2_VENDINGMACHINE_H
class VendingMachine{
private:
    DispenserType orange; //make DispenserType objects
    DispenserType pomegranate;
    DispenserType carrot;
    CashRegister  counter; // make Cashregister object
    void pay(DispenserType &drink,CashRegister &cash);
public:
    VendingMachine();
    void sellProduct(char product);
    ~VendingMachine(){};


};

#endif //TASK2_VENDINGMACHINE_H
