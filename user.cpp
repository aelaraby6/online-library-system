#include "user.h"

int User::counter=0;
User::User()
{
    name="";
    age=0;
    password="";
    email="";
    counter++;
    id=counter;
}
//==========================
User::User(string name, int age, string password, string email)
{
    this->password=password;
    this->age=age;
    this->name=name;
    this->email=email;
    counter++;
    id=counter; // must be unique

}
//==========================
User::User(const User&user)
{
    name =user.name;
    age=user.age;
    password=user.password;
    email=user.email;
    id=user.id;
}
//=========================
void User::setName(string n)
{
    name =n;

}
//=========================

string User::getName()const
{
    return name;
}
//=========================
void User::setPassword(string p)
{
    password=p;
}
//=========================
string User::getPassword()const
{

    return password;
}
//=========================
void User::setEmail(string e)
{
    email=e;

}
//=========================
string User::getEmail()const
{
    return email;

}
//==========================
void User::setAge(int a)
{
    age =a;
}
//==========================
int User::getAge() const
{
    return age;

}
//==========================
void User::setId(int i)
{
    id=i;
}
//==========================
int User::getId()const
{
    return id;
}
//==========================
ostream &operator<<(ostream & output, const User & user)
{
    output<<"============== User "<<user.id<<" information =============="<<endl;
    output<<"Name: "<<user.name;
    output<<" || Age: "<<user.age;
    output<<" || Id: "<<user.id;
    output<<" || Email: "<<user.email<<endl;
    output<<"================================================"<<endl;
    return output;
}
//===========================
istream &operator>>( istream & input, User & user)
{
    cout<<"Enter the data with this order (with spaces)"<<endl;
    cout<<"Name "<<"Age "<<"Id "<<"Email"<<endl;
    input>>user.name>>user.age>>user.id>>user.email;
    return input;
}
//===========================
bool User::operator==( User& user)
{
    return (name ==user.name&&
            age==user.age&&
            password==user.password&&
            email==user.email&&
            id==user.id);
}


