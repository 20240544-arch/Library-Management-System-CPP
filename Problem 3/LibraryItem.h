#pragma once
#include <iostream>
#include <string>
using namespace std;

class LibraryItem {
private:
    int id;
    string title;
    bool isBorrowed;

protected:
    double price;

public:
    
    static int totalItems;

   
    LibraryItem(int id, string title, double price);

    
    static int getTotalItems();

    
   
    friend void comparePrice(LibraryItem& a, LibraryItem& b);

    
    void borrowItem();               
    void borrowItem(string name);   

    
    virtual void displayInfo() = 0;
    virtual double calculateLateFee(int days) = 0;

    
    string getTitle() { return title; }

    
    virtual ~LibraryItem() {}
};