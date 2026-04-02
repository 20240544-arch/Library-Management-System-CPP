#pragma once
#include "LibraryItem.h"

class Magazine : public LibraryItem {
private:
    int issueNumber;
    string publisher;

public:
  
    Magazine(int id, string title, double price, int issue, string pub);

  
    void displayInfo() override;
    double calculateLateFee(int days) override;
};