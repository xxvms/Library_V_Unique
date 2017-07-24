//
// Created by tom on 24/07/2017.
//

#ifndef LIBRARY_V_UNIQUE_USER_H
#define LIBRARY_V_UNIQUE_USER_H

#include <string>
#include <vector>
#include "Book.h"

class User {
private:
    std::vector<Book const*> books_user_have;
public:
    User();
    void printU()const;
    void borrowU(Book const* book);
    Book const* returnU();

};


class Librarian : public User {
    std::vector<Book const*> books_Librarian_have;

public:
    Librarian();
    void printL()const;
    void borrowL(Book const* book);
    Book const* returnL();

};


#endif //LIBRARY_V_UNIQUE_USER_H
