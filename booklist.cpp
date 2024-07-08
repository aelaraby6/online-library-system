#include "booklist.h"

BookList::BookList()
{
    capacity=0;
    booksCount=0;

}
//====================================
BookList:: BookList(int c )
{
    capacity=c;
    books= new Book[capacity];
    booksCount=0;
}
//====================================
void BookList::addBook(const Book& book )
{
    if(booksCount<capacity)
    {
        books[booksCount]=book;
        books[booksCount].setId(booksCount+1);
        booksCount++;
    }
    else
    {
        cout<<"The Capacity is Full\n";

    }

}
//====================================

Book* BookList::searchBook(string name)
{
    for(int i=0; i<booksCount; i++)
    {
        if(books[i].getTitle()==name)
        {
            return &books[i];
        }
    }
    return nullptr;

}
//====================================
Book* BookList::searchBook(int id)
{
    for(int i=0; i<booksCount; i++)
    {
        if(books[i].getId()==id)
        {
            return &books[i];
        }
    }
    return nullptr;

}
//====================================

void BookList::deleteBook(int id)
{
    for(int i=0; i<booksCount; i++)
    {
        if(books[i].getId()==id)
        {
            while(i<booksCount-1)
            {
                books[i]=books[i+1];
                i++;
            }
            booksCount--;
            capacity--;
            break;
        }
    }
}
//====================================
Book BookList::getTheHighestRatedBook()
{
    double max_rate=-10;
    int index=0;
    for(int i=0; i<booksCount; i++)
    {
        if(books[i].getAverageRating()>max_rate)
        {
            max_rate=books[i].getAverageRating();
            index =i;

        }

    }
    return books[index];
}
//====================================
void BookList::getBooksForUser( User & user)
{
    for(int i=0; i<booksCount; i++)
    {
        if(books[i].getAuthor()==user)
        {
            cout<<books[i]<<" ";

        }

    }
}
//=====================================
BookList::~BookList()
{
    delete [] books;
}
//=====================================
Book& BookList::operator[] (int pos)
{
    if(pos<0||pos>booksCount)
    {
        cout<<"Error\n";
    }
    else
    {
        return books[pos];
    }


}
//=======================================

ostream&operator<<(ostream & output,const BookList & booklist)
{
    output<<"============== Books "<<" information =============="<<endl;
    cout<<endl;
    for(int i=0; i<booklist.booksCount; i++)
    {
        output<<booklist.books[i]<<endl;
    }
    return output;

}



