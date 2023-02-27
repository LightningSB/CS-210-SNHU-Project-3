/*
 * Simon Byelkin
 * CS 210
 * 2/19/2023
 * Grocery.h
 */
#ifndef GROCERY_H
#define GROCERY_H

#include <string>

class Grocery {
public:
    // Constructor
    Grocery(std::string name, int quantity);
    // Accessors
    std::string getItemName();

    int getItemQuantity();

    // Mutators
    void setItemName(std::string itemName);
    void setItemQuantity(int itemQuantity);

private:
    std::string name;
    int quantity;
};

#endif
