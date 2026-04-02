#include "Book.h"

Book::Book(int id, string title, double price, string auth, int pg)
    : LibraryItem(id, title, price) {
    author = auth;
    pages = pg;
}

void Book::displayInfo() {
    cout << "[Book] Title: " << getTitle() << ", Author: " << author
        << ", Pages: " << pages << ", Price: $" << price << endl;
}

double Book::calculateLateFee(int days) {
    return days * 2.0;
}