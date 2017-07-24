#include <iostream>
#include <vector>
#include "Book.h"
#include "Library.h"
char menu();

int main() {
    Library library;
    std::vector<Book>book;
    char choice;

    do {
        choice = menu();
        switch (choice)
        {
            case '1':
            {
                std::cout << "Max amount books in Library: ";
                unsigned int librarySize = 0;
                std::cin >> librarySize;
                book.resize(librarySize);
                std::cout << std::endl;
                std::cout << "Library capacity is " << book.capacity() << " books"<< std::endl;
                std::cout << std::endl;
                break;
            }
            case '2':
            {
                if (!book.empty()){
                    char howManyBooks = '0';
                    std::cout << "How many books do you want to add:";
                    std::cin >> howManyBooks;
                    if ( howManyBooks > '0' && howManyBooks < '9'){
                        unsigned int books_to_add = howManyBooks - 48;
                        //unsigned int books_to_add = static_cast<unsgined int>(howManyBooks - 48);
                        for (size_t i = 0; i < books_to_add; i++) {
                            book.at(i).add();
                            library.addBook2Lib(&book.at(i));
                        }
                    }else {
                        std::cout << std::endl;
                        std::cout << "your input is not a number " << std::endl;
                        std::cout << std::endl;
                        break;
                    }
                }
                else {
                    std::cout << std::endl;
                    std::cout << "Use option 1 to create library before adding books :)" << std::endl;
                    std::cout << std::endl;
                    break;
                }
                break;
            }
            case '3': {

                std::cout << "who are you?" << std::endl;
                std::cout << "press (L)ibrarian or (U)ser: ";
                char question = ' ';
                std::cin >> question;
                library.printBooksInLib();
                std::cout << "Please type book ID of book you with to borrow: " << std::endl;
                unsigned int bookID{0};
                std::cin >> bookID;
                bookID--;// -1 is offset for correct index
                library.borrow(bookID, &book.at(bookID), question);

                break;
            }

            case '4': {
                std::cout << "Return Book" << std::endl;
                std::cout << "who are you?" << std::endl;
                std::cout << "press (L)ibrarian or (U)ser: ";
                char question = ' ';
                std::cin >> question;
                library.returnBook(&book.at(0), question);
                break;
            }
            case '5':
                std::cout << "Print all books in library";
                library.printBooksInLib();
                break;
            case '6':
                std::cout << "User books: " << std::endl;
                library.printUserBooks();
                break;
            case '7':
                std::cout << "Librarian books: " << std::endl;
                library.printLibrarianBooks();
                break;
            default:
                std::cout << "smile its friday";
                break;
        }
    }while (choice != '9');

    return 0;
}

char menu() {
    char choice{' '};

    std::cout << "Please make your selection" << std::endl;
    std::cout << "Press number: " << std::endl;
    std::cout << "1 - Set size of the Library" << std::endl;
    std::cout << "2 - Create book" << std::endl;
    std::cout << "3 - Borrow book" << std::endl;
    std::cout << "4 - Return book" << std::endl;
    std::cout << "5 - Print out all books" << std::endl;
    std::cout << "6 - Print books borrowed by user" << std::endl;
    std::cout << "7 - Print books borrowed by Librarian" << std::endl;
    std::cout << "9 - to Quit" << std::endl;
    std::cin >> choice;
    return choice;

}
