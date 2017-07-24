//
// Created by tom on 24/07/2017.
//

//
// Created by Tom on 06/07/2017.
//

#include <iostream>
#include "User.h"

User::User(): books_user_have(){}//{" ", " ", 0;}

void User::printU()const {

    if (books_user_have.empty()){
        std::cout << std::endl;
        std::cout << "you don't have any books!" << std::endl;
        std::cout << std::endl;
    }else{
        std::cout << std::endl;
        std::cout << "I have following book: " << std::endl;
        books_user_have.at(0)->print();
    }
}
void User::borrowU(Book const * book) {

    if (!books_user_have.empty() ){
        std::cout << "please return your book before renting new one" << std::endl;
        books_user_have.at(0)->print();
    } else{
        books_user_have.push_back(book);
    }
}
Book const * User::returnU() {

    return books_user_have.at(0);
}

Librarian::Librarian():books_Librarian_have() {}

void Librarian::printL()const {

    if (books_Librarian_have.empty()){
        std::cout << std::endl;
        std::cout << "you don't have any books!" << std::endl;
        std::cout << std::endl;
    }else{
        std::cout << std::endl;
        std::cout << "I have following book: " << std::endl;
        books_Librarian_have.at(0)->print();
    }
}
void Librarian::borrowL(Book const * book) {

    if (!books_Librarian_have.empty() ){
        std::cout << "please return your book before renting new one" << std::endl;
        books_Librarian_have.at(0)->print();
    } else{
        books_Librarian_have.push_back(book);
    }
}
Book const * Librarian::returnL() {

    return books_Librarian_have.at(0);
}