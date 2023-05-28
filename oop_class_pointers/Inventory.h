//
// Created by HP on 27.05.2023.
//

#ifndef TASK_2_INVENTORY_H
#define TASK_2_INVENTORY_H
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
using namespace std;

class Inventory {
    vector<Item*>*_list;
public:
    Inventory(){
        _list = new vector<Item *>;
    }
    void AddItem(Item* item){
        for (auto i : *_list) {
            if (i->GetId() == item->GetId()) return;
        }
        _list->push_back(item);
    }
    void Delete(Item* item) {
        for (auto i = _list->begin(); i < _list->end(); ++i) {
            if ((*i)->GetId() == item->GetId()) {
                _list->erase(i);
                return;
            }
        }
    }

    Item* FindById(int id) {
        for (auto i : *_list) {
            if (i->GetId() == id) {
                return i;
            }
        }

        return nullptr;
    }

    Item* FindByTitle(string title) {
        for (auto i : *_list) {
            if (i->GetTitle() == title) {
                return i;
            }
        }

        return nullptr;
    }

    vector<Item*> GetAll() {
        return *_list;
    }

    void Update(Item* item) {
        for (auto l : *_list) {
            if (l->GetId() == item->GetId()) {
                l = item;
            }
        }
    }
};

#endif //TASK_2_INVENTORY_H
