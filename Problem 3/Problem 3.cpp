#include <iostream>
#include <vector>
#include "Book.h"
#include "Magazine.h"
#include "ResearchPaper.h"

using namespace std;

int main() {
    
    LibraryItem* library[4];

    library[0] = new Book(101, "C++ Programming", 500.0, "Bjarne Stroustrup", 1200);
    library[1] = new Book(102, "Data Structures", 350.0, "Mark Weiss", 600);
    library[2] = new Magazine(201, "Tech Monthly", 50.0, 45, "TechMedia Publishing");
    library[3] = new ResearchPaper(301, "AI in 2026", 150.0, "Dr. Gemini", "Artificial Intelligence");

    cout << "--- Library Items Information ---" << endl;
    for (int i = 0; i < 4; i++) {
       
        library[i]->displayInfo();
        cout << "Late fee for 5 days: $" << library[i]->calculateLateFee(5) << endl;
        cout << "--------------------------------" << endl;
    }

    
    cout << "\n--- Testing Overloaded Borrowing ---" << endl;
    library[0]->borrowItem();              
    library[2]->borrowItem("Mahmoud");      

    
    cout << "\n--- Testing Price Comparison ---" << endl;
   
    comparePrice(*library[0], *library[1]);

    
    cout << "\nTotal Items Created in Library: " << LibraryItem::getTotalItems() << endl;

    
    for (int i = 0; i < 4; i++) {
        delete library[i];
    }

    return 0;
}