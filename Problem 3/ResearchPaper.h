#pragma once
#include "LibraryItem.h"

class ResearchPaper : public LibraryItem {
private:
    string researcher;
    string field;

public:
   
    ResearchPaper(int id, string title, double price, string res, string fld);

    
    void displayInfo() override;
    double calculateLateFee(int days) override;
};