/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#include "DispenserType.h"
#include "CashRegister.h"
#include <iostream>

#ifndef TASK2_STACKNODE_H
#define TASK2_STACKNODE_H
class StackNode{
private:
    int data;
    StackNode* next;
public:
    StackNode(int n=0);
    void SetNext(StackNode* adress){ this->next = adress;}
    StackNode* GetNext()const { return next;}
    int GetData()const{return data;}



    ~StackNode(){};
};

#endif //TASK2_STACKNODE_H
