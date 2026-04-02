#include "LibraryItem.h"


int LibraryItem::totalItems = 0;


LibraryItem::LibraryItem(int id, string title, double price) {
    this->id = id;
    this->title = title;
    this->price = price;
    this->isBorrowed = false; 
    totalItems++;             
}


int LibraryItem::getTotalItems() {
    return totalItems;
}



void comparePrice(LibraryItem& a, LibraryItem& b) {
    if (a.price > b.price) {
        cout << "Item: " << a.title << " is more expensive than " << b.title << endl;
    }
    else if (a.price < b.price) {
        cout << "Item: " << b.title << " is more expensive than " << a.title << endl;
    }
    else {
        cout << "Both items have the same price." << endl;
    }
}


void LibraryItem::borrowItem() {
    isBorrowed = true;
    cout << "Item '" << title << "' has been marked as borrowed." << endl;
}

void LibraryItem::borrowItem(string borrowerName) {
    isBorrowed = true;
    cout << "Item '" << title << "' has been borrowed by: " << borrowerName << endl;
}