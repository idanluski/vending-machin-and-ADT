# vending-machin-and-ADT

A vending machine or vending machine is an automatic machine for selling food (usually food)
Quick or snacks (drinks or other objects), which was first developed in the twentieth century in England.
You are required to write a program for a drinks machine.
The program should do the following:
1. Show the user the various products that can be bought.
2. Let the user choose the requested product.
3. Show the user the price of the selected product.
4. To receive money from the user.
5. Release of the product.
The machine will sell natural drinks: oranges, carrots and pomegranates.
The machine has two main components:
Cash register and inventory management component in the machine.

**CashRegister**\
Private members:\
cashOnHands – integer\
Public members:\
CashRegister() - sets the cash in the register to 0.\
CashRegister(int) - sets the cash in the register to a specific amount.\
getCurrentBalance() - returns value of cashOnHand.\
acceptAmount(int) - receive the amount deposited by the customer and update the amount in\
the register.

**DispenserType**\
Private members:\
numberOfItems – Integer\
cost – Integer\
Public members:\
Default constructor().\
Constructor dispenserType (int numberOfItems, int cost).\
getNoOfItems() - Return the value of numberOfItems\
getCost() - Return the value of cost.\
makeSale() - Reduce the number of items by 1.\

**VendingMachine**\
Private members:\
orange– DispenserType\
carrot – DispenserType\
pomegranate - DispenserType\
counter - CashRegister\
Public members:\
Default constructor() – Initialize the dispensers with the next values: orange(10,45),
 carrot(5,50), pomegranate(4,75) .\
sellProduct(char) – Receive the first character of the wanted product (e.g. ‘o’ for orange).\
 Ask from the client to pay for the product unless the product is sold out.
 Take care of different cases of payment, such as if the client didn't pay
 enough 

<img width="197" alt="צילום מסך 2023-08-10 095950" src="https://github.com/idanluski/vending-machin-and-ADT/assets/129895992/a7db23c4-3ede-43e3-a181-640c7fc5ba53">


**ADT Abstract Data Type**
Abstract Data Type (ADT) is a mathematical model for a certain group
of data structures with similar behavior. An abstract data type is defined by the operations that can be performed
on him and by limitations that apply to the results of these actions (or their cost in terms of time complications).
and place (.
For example, a stack is an abstract data type that includes a Push operation that adds a member, an operation
(Pop) which removes the last element added to the stack, and the Peek operation which allows access to information
at the top of the cartridge without removing it. In the context of complexity analysis of algorithms that use
In the stack, you can add requirements that ease the complexity analysis: fixed time for each operation, independent
in the amount of data in the stack, and a fixed memory space for each member.


**StackNode**
Private members:\
data – int\
next – StackNode*\

**Stack**
Private members:\
top – StackNode*\
Public members:\
Default constructor() – Initialize top to be NULL.\
push(int) - Inserts a new element at the top of the stack.\
pop() - Removes the top element on the stack. If stack is empty, print “Stack is empty”.\
isEmpty() - Returns true if the stack is empty; otherwise, it returns false\
peek() - Returns the top element present in the stack without modifying the stack.
 In case where the stack is empty, return INT_MIN (need to include <climits)>).
 The return type is integer.

<img width="211" alt="image" src="https://github.com/idanluski/vending-machin-and-ADT/assets/129895992/edfd5796-eb4d-47be-ae9b-375ffd972819">\




 **Menu class**\


 
 This department will manage the system. This class must perform input/output operations from the user with the exception of methods
which have been explicitly defined for this purpose in other departments. The menu must be displayed in a loop until the user chooses
finish it.

**shopMenu**
Action Name Notes
1 orange juice This task will call the product sale method\
2 Carrot juice This key will call the product sale method\
3 Pomegranate juice This tap will call the product sale method\
4 Exit this menu and return to the main menu\


Creates a menu type object and runs the "main menu" method and that's it.
**mainkMenu**
The user taps the action name Notes\
1 Entering the drinking machine menu After tapping this, the system will activate a menu method
Drinking machine\
2 Entering the cartridge menu After tapping this, the system will activate a menu method
cartridge\
3 Exiting the program After tapping this, the system will print Goodbye! and exit
The user taps the action name Notes\

**stack menu**
1 Adding a member to the stack This key will add a member to the stack according to the input
received from the user\
2 Removing an organ from the hard cartridge is pulling an organ from the cartridge\
3 Display the first element This hard will display the first element in the stack\
4 Checking if the cartridge is empty pressing this will print an appropriate message depending on the contents
the cartridge\
5 Exiting the program Exiting this menu and returning to the main menu\

<img width="134" alt="mai" src="https://github.com/idanluski/vending-machin-and-ADT/assets/129895992/3cc1d974-c330-4575-bcee-fce81e376784">\

 
