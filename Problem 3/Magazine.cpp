#include "Magazine.h"

Magazine::Magazine(int id, string title, double price, int issue, string pub)
    : LibraryItem(id, title, price) {
    issueNumber = issue;
    publisher = pub;
}

void Magazine::displayInfo() {
    cout << "[Magazine] Title: " << getTitle() << ", Issue: #" << issueNumber
        << ", Publisher: " << publisher << ", Price: $" << price << endl;
}

double Magazine::calculateLateFee(int days) {
    return days * 1.0;
}
