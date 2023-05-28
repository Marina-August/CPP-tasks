#include <iostream>
#include <vector>
#include "Item.h"
#include "Inventory.h"
using namespace std;

int main() {

    Inventory* inventory = new Inventory();
    inventory->AddItem(new Item("Sword", "Green", 1500));
    inventory->AddItem(new Item("Shield", "Grey", 1000));
    inventory->AddItem(new Item("Spear", "Black", 700));

    for (auto i : inventory->GetAll()) {
        cout << i->GetId() << " -> " << i->GetTitle() << "  " << i->GetDescription() <<"  " << i->GetPrice() << endl;
    }

    auto item = inventory->FindByTitle("Spear");
    inventory->Delete(item);


    auto item_change_price = inventory->FindById(8468);
    item_change_price->SetPrice(2000);
    inventory->Update(item_change_price);

    cout <<"----------------------"<<endl;

    for (auto i : inventory->GetAll()) {
        cout << i->GetId() << " -> " << i->GetTitle() << "  " << i->GetDescription() <<"  " << i->GetPrice() << endl;
    }

    return 0;
}
