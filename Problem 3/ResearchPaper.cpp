#include "ResearchPaper.h"

ResearchPaper::ResearchPaper(int id, string title, double price, string res, string fld)
    : LibraryItem(id, title, price) {
    researcher = res;
    field = fld;
}

void ResearchPaper::displayInfo() {
    cout << "[Research Paper] Title: " << getTitle() << ", Researcher: " << researcher
        << ", Field: " << field << ", Price: $" << price << endl;
}

double ResearchPaper::calculateLateFee(int days) {
    return days * 10.0;
}