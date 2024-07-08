#include "Book.h"
int Book::counter=0;
Book::Book()
{
    title="";
    isbn="";
    category="";
    counter++;
    id==counter;
    averageRating=0.0;
    numrates=0;
    sumrates=0;
}
//====================
Book::Book(string t, string i, string c)
{
    title=t;
    isbn=i;
    category=c;
    counter++;
    id==counter;
    averageRating=0.0;
    numrates=0;
    sumrates=0;
}
//==========================
Book::Book(const Book& book)
{
    title=book.title;
    isbn=book.isbn;
    category=book.category;
    id=book.id;
    averageRating=book.averageRating;
    author=book.author;
    numrates=book.numrates;
    sumrates=book.sumrates;
}
//===========================

void Book::setTitle(string t)
{
    title =t;

}

void Book::setId(int i)
{
    id=i;
}
//============================
string Book::getTitle() const
{
    return title;
}
//============================
void Book::setIsbn(string is)
{
    isbn =is;

}
//============================
string Book::getIsbn() const
{
    return isbn;
}
//============================
int Book::getId() const
{
    return id;
}
//============================
void Book::setCategory(string c)
{
    category=c;

}
//============================
string Book::getCategory()const
{
    return category;
}
//============================
void Book::setAuthor(const User & user)
{
    author=user;
}
//============================
User Book::getAuthor() const
{
    return author;
}
//============================

void Book::rateBook(double rate) // rating from 1 to 5 with fraction
{
    numrates++;
    sumrates+=rate;
    averageRating= sumrates/numrates;

}
//================================
double Book::getAverageRating () const
{
    return averageRating;
}
//=================================

ostream &operator<<(ostream & output, const Book & book)
{
    output<<"============== Book "<<book.id<<" information =============="<<endl;
    output<<"Title: "<<book.title;
    output<<" || Isbn: "<<book.isbn;
    output<<" || Category: "<<book.category<<endl;
    if(book.author.getName()!=""){
        cout<<(book.author)<<endl;

    }
    output<<"================================================"<<endl;
    return output;
}
//==============================

istream &operator>>( istream & input, Book & book)
{
    cout<<"Enter the data with this order (with spaces)"<<endl;
    cout<<"Title"<<" Isbn"<<" Category"<<endl;
    input>>book.title>>book.isbn>>book.category;
    return input;
}
//================================

 bool Book::operator==( Book& book){
     return(title==book.title&&isbn==book.isbn&&category==book.category&&id==book.id&&averageRating==book.averageRating&&author==book.author);
 }

