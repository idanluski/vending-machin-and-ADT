#include "DispenserType.h"
#include "CashRegister.h"
#include "StackNode.h"
#include <iostream>
#include <climits>

/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#ifndef TASK2_STACK_H
#define TASK2_STACK_H
class Stack{
private:
StackNode* top;
public:
    Stack(){top = NULL;} //default constructor
    void push(int elem);
    void pop();
    StackNode* GetTop() const{return top;}
    void SetTop(StackNode* adress){ this->top = adress;}
    bool isEmpty()const;
    int peek()const;
    ~Stack();



};
#endif //TASK2_STACK_H
