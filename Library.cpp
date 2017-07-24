//
// Created by tom on 24/07/2017.
//

#include "Library.h"
#include <iostream>

void Library::addBook2Lib(Book const* bk) {
    books_container.push_back(bk);
}
void Library::printBooksInLib()const {
    if (books_container.empty())
    {
        std::cout << std::endl;
        std::cout << "I am sorry no books in Library! :(" << std::endl;
        std::cout << std::endl;

    } else {

        std::cout << "Books in Library: " << std::endl;
        for (std::size_t i = 0; i < books_container.size(); ++i) {
            books_container.at(i)->print();
        }
    }
}
void Library::borrow(unsigned int id, Book const* bk, char userType)  {


    if (books_container.empty())
    {
        std::cout << "***** I am sorry no books in Library! :( ****" << std::endl;
    } else {
        if (userType == 'l' || userType == 'L') {
            librarian_books.reserve(2);
            librarian_books.push_back(bk);

            //books_container.erase(books_container.begin()+id);
            books_container.at(id) = nullptr;
        } else {


            user_books.reserve(1);
            user_books.push_back(bk);

            //books_container.erase(books_container.begin() + id);
            books_container.at(id) = nullptr;
        }
    }
}
void Library::printUserBooks() const
{
    if (user_books.empty())
    {
        std::cout << std::endl;
        std::cout << "***** User don't have any books *****" << std::endl;
        std::cout << std::endl;
    }else{

        user_books.at(0)->print();
    }
}
void Library::printLibrarianBooks() const
{
    if (librarian_books.empty())
    {
        std::cout << std::endl;
        std::cout << "***** User don't have any books *****" << std::endl;
        std::cout << std::endl;
    }else{
        for (std::size_t i = 0; i < librarian_books.size(); ++i) {

            librarian_books.at(i)->print();
        }
    }
}

void Library::returnBook(Book const* bk, char question)
{	if (question == 'l' || question =='L') {
        std::cout << "you are librarian" << std::endl;
        if (!librarian_books.empty()){
            for (std::size_t i = 0; i < librarian_books.size(); ++i) {
                librarian_books.at(i)->print();
            }
            std::cout << "Wchich book do you want to return?"<< std::endl;
            unsigned int bookID{0};
            std::cin >> bookID;
            bookID--;// -1 is offset for correct index
            std::cout << std::endl;
            std::cout << "thanks for returning your book!" << std::endl;
            std::cout << std::endl;

            books_container.push_back(bk);

            librarian_books.erase(librarian_books.begin()+ bookID);
        } else {
            std::cout << std::endl;
            std::cout << "you don't have any books, go and rent one!" << std::endl;
            std::cout << std::endl;
        }
    } else {
        std::cout << "you are user" << std::endl;
        if (!books_container.empty()){

            std::cout << std::endl;
            std::cout << "thanks for returning your book!" << std::endl;
            std::cout << std::endl;

            books_container.push_back(bk);

            user_books.pop_back();
        } else {
            std::cout << std::endl;
            std::cout << "you don't have any books, go and rent one!" << std::endl;
            std::cout << std::endl;
        }
    }
}