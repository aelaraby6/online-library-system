#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

using namespace std;

class User
{
private:
    string name;
    int age;
    int id; // must be unique for any person
    string password;
    string email;
public:
    static int counter;
    User();
    User(string, int, string, string  );
    User(const User& );
    bool operator==(const User&  );
    void setName(string );
    string getName() const;
    void setPassword(string );
    string getPassword()const;
    void setEmail(string );
    string getEmail()const ;
    void setAge(int );
    int getAge() const;
    void setId(int );
    int getId() const;
    bool operator ==( User&);
    friend ostream &operator<<(ostream &, const User &);
    friend istream &operator>>( istream &, User &);
};
#endif // USER_H
