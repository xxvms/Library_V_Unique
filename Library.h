//
// Created by tom on 24/07/2017.
//

#ifndef LIBRARY_V_UNIQUE_LIBRARY_H
#define LIBRARY_V_UNIQUE_LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
    std::vector<Book const*> books_container;
    std::vector<Book const*> user_books;
    std::vector<Book const*> librarian_books;

public:
    void addBook2Lib(Book const* bk);
    void printBooksInLib()const;
    void borrow(unsigned int id, Book const* bk, char userType);
    void printUserBooks() const;
    void printLibrarianBooks() const;
    void returnBook(Book const* bk, char question);

};

#endif //LIBRARY_V_UNIQUE_LIBRARY_H
