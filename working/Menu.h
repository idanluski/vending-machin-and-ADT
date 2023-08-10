/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
using namespace std;
#include "Stack.h"
#include "VendingMachine.h"
#include "DispenserType.h"
#include "Stack.h"
#include "CashRegister.h"
#ifndef TASK2_MENU_H
#define TASK2_MENU_H
class Menu {
public:
    Menu(){};//ctor
    void mainMenu();
    void shopMenu(); //ctor of menu
    void stackMenu();
    ~Menu(){};

};

#endif //TASK2_MENU_H
