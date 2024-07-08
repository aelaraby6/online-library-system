#include "userlist.h"

UserList::UserList()
{
    capacity=0;
    usersCount=0;
}
//=======================
UserList::UserList(int c)
{
    capacity=c;
    users= new User[capacity];
    usersCount=0;
}
//========================
void UserList::addUser(User & user)
{
    if(usersCount<capacity)
    {
        users[usersCount]=user;
        users[usersCount].setId(usersCount+1);
        usersCount++;
    }
    else
    {
        cout<<"The Capacity is Full\n";

    }
}
//=========================
User * UserList::searchUser(string u)
{
    for(int i=0; i<usersCount; i++)
    {
        if(users[i].getName()==u)
        {
            return &users[i];
        }
    }
    return nullptr;
}
//============================
User *UserList::searchUser(int x)
{
    for(int i=0; i<usersCount; i++)
    {
        if(users[i].getId()==x)
        {
            return &users[i];
        }
    }
    return nullptr;
}
//==============================
void UserList::deleteUser(int id)
{
    for(int i=0; i<usersCount; i++)
    {
        if(users[i].getId()==id)
        {
            while(i<usersCount-1)
            {
                users[i]=users[i+1];
                i++;
            }
            usersCount--;
            capacity--;
            break;
        }
    }
}
//==============================

UserList::~UserList()
{
    delete [] users;
}
//===============================

ostream &operator<<( ostream& output,const UserList& userlist)
{
    output<<"============== Users "<<" information =============="<<endl;
    cout<<endl;
    for(int i=0; i<userlist.usersCount; i++)
    {
        output<<userlist.users[i]<<endl;
    }
    return output;
}


