/* Assignment C++: 1
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
using namespace std;
#include <iostream>
#include "Menu.h"

void Menu::mainMenu() {
    int choose;
    while (choose!=3){
        //    Menu build(int choose;)
        std::cout<<"(1) Fresh juice Shop\n"
                   "(2) Integer Stack\n"
                   "(3) Exit\n";

        cin>>choose;
        switch (choose)
        {
            case 1:
            {
                shopMenu();
                cout<<"thank you!\n";
                break;
            }
            case 2:
            {
                Stack s;
                stackMenu();
                cout<<"thank you!\n";
                break;
            }
            case 3:
            {
                cout<<"Goodbye!";
                break;

            }
            default:
                cout<<"Invalid selection."<<endl;
        }
    }



}

void Menu::shopMenu()
{
    int choose;
    VendingMachine machine; //make vending machin object;

    while(choose!=4) {
        cout << "*** Welcome to juice Shop ***\n"
                "To select an item, enter\n"
                "1 For Orange juice\n"
                "2 For Carrot juice\n"
                "3 For Pomegranate\n"
                "4 To exit" << endl;
        cin >> choose;
        switch (choose)
        {
            case 1:
            {
               machine.sellProduct('o'); //operate sell func
                break;
            }
            case 2:
            {
                machine.sellProduct('c'); //opertae sell func.
                break;
            }
            case 3:
            {
                machine.sellProduct('p');//opertae sell func.
                break;
            }
            case 4:
                break;
            default:
            {
                cout<<"Invalid selection."<<endl;
            }

        }

    }


}

void Menu::stackMenu()
{   int choose;
    Stack s;
    while(choose!=5) {
      cout<<"*** Manage your integer stack ***\n"
            "1 Push new element\n"
            "2 Pop element\n"
            "3 Show the first element\n"
            "4 Check if empty\n"
            "5 to exit"<<endl;
        cin >> choose;
        switch (choose)
        {
            case 1:
            {
                int elment;
                cout<<"Please insert the new element:";
                cin>>elment;
                s.push(elment); //opertae push func.
                break;
            }
            case 2:
            {
                s.pop(); //opertae pop func.
                break;
            }
            case 3:
            {
                s.peek(); //opertae peek func.
                break;
            }
            case 4:
            {
                s.isEmpty();
                break;
            }
            case 5:
                break;
            default:
            {
                cout<<"Invalid selection."<<endl;
            }
        }
    }

}
