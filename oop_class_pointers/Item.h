//
// Created by HP on 27.05.2023.
//

#ifndef TASK_2_ITEM_H
#define TASK_2_ITEM_H
#include <iostream>
#include <string>
using namespace std;

class Item{
    int _id;
    string _title;
    string _description;
    double _price;
public:
    Item (string title, string description, double price):
    _title(title),
    _description(description),
    _price(price),
    _id (1 + rand() % 10000) {};

    int GetId() {
        return _id;
    }

    string GetTitle() {
        return _title;
    }

    string GetDescription() {
        return _description;
    }

    double GetPrice() {
        return _price;
    }

    void SetPrice(double price){
        _price = price;
    }

};

#endif //TASK_2_ITEM_H
