#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
// team members: Jocelin Macias and Naomi Murrieta
void PrintMenu() {
cout << "MENU" << endl;
cout << "a - Add item to cart" << endl;
cout << "d - Remove item from cart" << endl;
cout << "c -  Change item quantity" << endl;
cout << "i - Output items' descriptions" << endl;
cout << "o - Output shopping cart" << endl;
cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */





















































   
   
}

int main() {
   string customerName;
   string todayDate;

   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);

   cout << "Enter today's date:" << endl;
   getLine(cin, todayDate);

   cout << endl << "Customer name: " << customerName << endl;
   cout << "Today's date: " << todayDate << endl;

   ShoppingCart theCart(customerName, todayDate);

   char choices = 0;
   while (choices != 'q'){
      if(choices == 0 || choices == 'a' || choices == 'd' || choices == 'c' || choices == 'i' ||  choices == 'o' || choices == 'q') }
         cout << endl;
         PrintMenu();
      cout << endl;
   }
cout << "Choose an option:" << endl;
cin >> choices;
ExecuteMenu(choices, theCart);
}
   return 0;
}
