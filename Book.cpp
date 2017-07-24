//
// Created by tom on 24/07/2017.
//


#include <iostream>
#include "Book.h"

int Book::counter = 0;

Book::Book() : author("n/a"), title("n/a"), publicationYear(0)
{
    counter++;
    ID = counter;
}
int Book::add()
{
    std::cout << "Book ID:" << ID << std::endl;
    std::cout << "Title: ";
    std::cin >> title;
    std::cout << "Author: ";
    std::cin >> author;
    std::cout << "Publication year: ";
    std::cin >> publicationYear;
    return ID;
}
void Book::print() const
{
    std::cout << " ------------------- " << std::endl;
    std::cout << "Book ID:" << ID << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Publication year: " << publicationYear << std::endl;
    std::cout << " ------------------- " << std::endl;

}
