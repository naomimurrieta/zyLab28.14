#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H


#include <string>
using namespace std;

class ItemToPurchase {
   
   public:
      ItemToPurchase(string name, string description, 
                  int price, int quantity = 0);
      
      void SetName(string n);
      void SetDescription(string d);
      void SetPrice(double p);
      void SetQuantity(int q);
      
      string GetName() const;
      string GetDescription() const;
      double GetPrice() const;
      int GetQuantity() const;
      
      void PrintItemCost() const;
      void PrintItemDescription() const;
   
   private:
      string name;
      string itemDescription;
      double price;
      int quantity;
};


#endif
