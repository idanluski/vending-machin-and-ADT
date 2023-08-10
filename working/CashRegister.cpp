/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#include "CashRegister.h"
#include "Menu.h"
#include <iostream>
using namespace std;

CashRegister ::CashRegister(int cash) //sets the cash in the register to a specific amount.
{
 cashOnHands = cash;

}

CashRegister ::CashRegister() //sets the cash in the register to 0
{
   cashOnHands = 0;
}

void CashRegister::acceptAmount(int set){cashOnHands += set;}