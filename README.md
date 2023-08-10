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


![alt text]([http://url/to/img.png](https://github.com/idanluski/vending-machin-and-ADT/blob/main/mai.png)https://github.com/idanluski/vending-machin-and-ADT/blob/main/mai.png)

 
