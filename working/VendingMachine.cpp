/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#include "VendingMachine.h"
#include "DispenserType.h"
#include "CashRegister.h"
#include "Menu.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine()
:orange(10,45), carrot(5,50), pomegranate(4,75)//init line
{}


void VendingMachine::pay(DispenserType &drink, CashRegister &cash)
{/*return True if the client success in pay. false else*/
    if(drink.getNoOfItems()==0)
    { //check if sold out. if yes end the func return false
        cout<<"Sorry, this item is sold out."<<endl;
        return;
    }

    int money_in;
    cout<<"Please deposit "<<drink.getCost()<<" cent"<<endl;
    cin>>money_in;                             // user enter money
    if(money_in<drink.getCost())
    { /*check if the user insert enugh money.
       if not ask for compliting the missing amount.*/

        cout<<"Please deposit another "<<drink.getCost()-money_in<<" cent"<<endl;
        int addition;
        cin>> addition;
        money_in+=addition;

    }
    if(money_in>=drink.getCost())
    {   /* check if the money insert after up to two asks
        if True: -set the amount in the register
                 -reduce the number of items by 1
                 - print to user success*/
        cash.acceptAmount(money_in);
        drink.makeSale();
        cout<<"Collect your item at the bottom and enjoy.\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n"<<endl;
    }
    else
        cout<<"The amount is not enough. Collect what you deposited.\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n"<<endl;
        

        



}



void VendingMachine::sellProduct(char product )
{
    switch (product) {
        case 'o':
        {
            pay(orange,counter); //opertae pay func.
            break;
        }
        case 'c':
        {
            pay(carrot,counter); //opertae pay func.
            break;
        }
        case 'p':
            {
                pay(pomegranate,counter); //opertae pay func.
                break;
            }
        
    }






}
