#pragma once
#include "LibraryItem.h"

class Book : public LibraryItem {
private:
    string author;
    int pages;

public:
    
    Book(int id, string title, double price, string auth, int pg);

    
    void displayInfo() override;
    double calculateLateFee(int days) override;
};