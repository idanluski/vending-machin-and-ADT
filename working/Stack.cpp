/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#include "Stack.h"
#include "Menu.h"
#include <iostream>
using namespace std;

void Stack::push(const int data)
{
    StackNode* s = new StackNode(data); //make dynamic allocate of StackNode object with data


    if(top==NULL) //check if th stack is empty
        top = s; //indicate top to s
    else
    {
        s->SetNext(top); //s next indicate to top and top indicate to s StackNode object
        top = s;

    }

}

void Stack::pop()
{
    if(top!=NULL) //check if the stack not empty
    {
       StackNode* s; //make an StackNode indicate to top
       s = top;
       top = top->GetNext(); //top indicate to next obgect Node
       cout<<"Removing "<<s->GetData()<<endl; //removing s which in top of stack
       delete s;
    }
    else
        cout<<"The stack is empty";

}

bool Stack::isEmpty()const
{ //check if empty.
    if(top == NULL)
    {
        cout<<"the stack is empty"<<endl;
        return true;
    }
    cout<<"The stack is not empty"<<endl;
    return false;


}

int Stack::peek() const
{
    if(top==NULL)//check if the stack not empty
    {
        cout<<"The first element is: "<<INT_MIN<<endl;;
        return INT_MIN;
    }

    cout<<"The first element is: "<<top->GetData()<<endl;//return the first element of the stack
    return top->GetData();
}

Stack::~Stack() {
    while ((this->top) != NULL)
    {
        StackNode* s; //make an StackNode indicate to top
        s = top;
        top = top->GetNext(); //top indicate to next obgect Node
        delete s;
    }

}