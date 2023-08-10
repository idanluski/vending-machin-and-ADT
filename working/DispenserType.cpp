/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#include "DispenserType.h"

#include <iostream>
using namespace std;

DispenserType::DispenserType(int numberOfItems, int cost) {//make constructor with two arguments
    this->numberOfItems = numberOfItems;
    this->cost = cost;
}

void DispenserType::makeSale() {numberOfItems = numberOfItems -1;}//- Reduce the number of items by 1.
