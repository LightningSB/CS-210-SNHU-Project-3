/*
 * Simon Byelkin
 * CS 210
 * 2/19/2023
 * Grocery.cpp
 */
#include "Grocery.h"

using namespace std;

// Constructor
Grocery::Grocery(string itemName, int itemQuantity) {
    name = itemName;
    quantity = itemQuantity;
}

// Accessors
std::string Grocery::getItemName() {
    return name;
}

int Grocery::getItemQuantity() {
    return quantity;
}

// Mutators
void Grocery::setItemName(std::string itemName) {
    name = itemName;
}

void Grocery::setItemQuantity(int itemQuantity) {
    quantity = itemQuantity;
}

