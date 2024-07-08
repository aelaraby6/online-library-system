#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<string>
#include"user.h"

using namespace std;

class Book
{
private:
    string title;
    string isbn;
    int id;
    string category;
    double averageRating;
    int numrates;
    double sumrates;
    User author;
public:
    static int counter;
    Book();
    Book(string, string, string);
    Book(const Book& );
    void setTitle(string );
    string getTitle() const ;
    void setIsbn(string );
    string getIsbn() const;
    void setId(int);
    int getId() const;
    void setCategory(string );
    string getCategory()const;
    void setAuthor(const User & );
    User getAuthor() const;
    void rateBook(double );
    double getAverageRating () const;
    bool operator==( Book& );
    friend ostream &operator<<(ostream &, const Book &);
    friend istream &operator>>( istream &, Book &);
};
#endif // BOOK_H
