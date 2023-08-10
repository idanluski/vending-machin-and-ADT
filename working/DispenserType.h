
/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#include <iostream>
#ifndef TASK2_DISPENSERTYPE_H
#define TASK2_DISPENSERTYPE_H
class DispenserType{
private:
    int numberOfItems;
    int cost;

public:
    DispenserType(){};//deafault ctor
    DispenserType(int numberOfItems,int cost); //Constructor initiate numberofitems and cost
    const int getNoOfItems () const{return  numberOfItems;}//- Return the value of numberOfItems
    const int getCost()const{return cost;} //- Return the value of cost.
    void makeSale();
    ~DispenserType(){};



};

#endif //TASK2_DISPENSERTYPE_H
