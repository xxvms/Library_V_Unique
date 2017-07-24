//
// Created by tom on 24/07/2017.
//

#ifndef LIBRARY_V_UNIQUE_BOOK_H
#define LIBRARY_V_UNIQUE_BOOK_H


#include <string>
#include <vector>

class Book {

protected:
    static int counter;
    int ID;
    std::string author;
    std::string title;
    int publicationYear;
public:
    Book();
    int getID() { return ID; }
    int add();
    int static counterNumber() { return counter; }
    void print() const;
};

#endif //LIBRARY_V_UNIQUE_BOOK_H
