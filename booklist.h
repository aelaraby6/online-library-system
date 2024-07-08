#ifndef BOOKLIST_H
#define BOOKLIST_H
#include<iostream>
#include<string>
#include"Book.h"
#include "user.h"

using namespace std;


class BookList
{
private:
    Book*books;
    int capacity;
    int booksCount;
public:
    BookList();
    BookList(int );
    void addBook(const Book& );
    Book* searchBook(string);
    Book* searchBook(int );
    void deleteBook(int );
    Book getTheHighestRatedBook();
    void getBooksForUser( User &); // get all books from this author
    Book& operator[] (int );
    friend ostream&operator<<(ostream &,const BookList & );
    ~BookList();
};

#endif // BOOKLIST_H
