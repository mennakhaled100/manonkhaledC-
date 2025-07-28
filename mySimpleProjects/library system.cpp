#include<iostream>
using namespace std ;
struct Book
{
    string name ;
    int id ;
    int quantity ;
    bool isborrowed = false ;
    string borrowedBy = "" ;
};
struct User
{
    int id ;
    string name ;
    string borrowedBook[10] ;
    int borrowedCount = 0 ;

};

Book books[200] ;
int bookCount = 0 ;
User users[200] ;
int userCount = 0 ;

void add_book()
{
    cout<<"Enter book info: id & name & total quantity :\n";
    cin>>books[bookCount].id >>books[bookCount].name >> books[bookCount].quantity ;
    bookCount++;
}
void search_books_by_prefix()
{
    string prefix ;
    cout<<"Enter book name prefix :\n";
    cin>>prefix ;
    for(int i=0; i<bookCount; i++)
    {
        bool match = true ;
        for(int j=0; j<prefix.size(); j++)
        {
            if(books[i].name[j] != prefix[j])
            {
                match = false ;
                break ;
            }
        }
        if(match)
            cout<<books[i].name<<"\n" ;
    }
}
void print_who_borrowed_book_by_name()
{
    string name ;
    cout<<"Enter book name:\n";
    cin>>name ;
    bool found = false ;
    for(int i=0; i<bookCount; i++)
    {
        if(name == books[i].name)
        {
            if(books[i].isborrowed)
                cout<<"Borrowed by " <<books[i].borrowedBy;
        }
        else
        {
            found = true ;
            cout<<books[i].name<<" is available\n" ;
        }

    }
    if(found)
        cout<<"Invalid book name\n";
}
void user_borrow_book()
{
    string username , bookname ;
    cout<<"Enter username and bookname\n" ;
    cin>>username >>bookname ;
    for(int i=0; i<bookCount; i++)
    {
        if(bookname == books[i].name && !books[i].isborrowed)
        {
            for(int j=0; j<userCount; j++)
            {
                if(username == users[j].name)
                {
                    books[i].isborrowed = true ;
                    books[i].borrowedBy =  username ;
                    books[i].quantity-- ;
                    users[j].borrowedBook[users[j].borrowedCount] = bookname ;
                    users[j].borrowedCount++ ;
                }
            }
        }
        else
            cout<<books[i].name << "is borrowed\n";
    }
}
void add_user()
{
    int id ;
    string name ;
    cout<<"Enter id and name of user\n" ;
    cin>>users[userCount].id >> users[userCount].name ;
    userCount++;
}
void user_return_book()
{
    string username , bookname ;
    cout<<"Enter username and bookname\n";
    cin>>username >>bookname ;
    for(int i=0; i<bookCount; i++)
    {
        if(bookname == books[i].name)
        {
            books[i].isborrowed = false ;
            books[i].borrowedBy = "" ;
            books[i].quantity++;
            for(int j=0; j<userCount; j++)
            {
                if(username == users[j].name)
                {
                    for(int b=0; b<users[j].borrowedCount; b++)
                    {
                        if(bookname == users[j].borrowedBook[b])
                        { // ازاحة
                            for(int a=b; a<users[j].borrowedCount-1; a++)
                            {
                                users[j].borrowedBook[a] = users[j].borrowedBook[a+1] ;
                                users[j].borrowedCount-- ;
                            }
                        }
                    }
                }
            }
        }
    }
}
void print_users()
{
    for(int i=0; i<userCount; i++)
    {
        cout<<users[i].name <<" "<< users[i].id <<" " ;
        for(int j=0; j<users[i].borrowedCount; j++)
        {
            cout<<users[i].borrowedBook[j] <<"\n";
        }
    }
}
void print_library_by_id()
{
    for(int i=0; i<bookCount; i++)
    {
        cout<< books[i].id <<" " <<books[i].quantity <<"\n" ;
    }
}
void print_library_by_name()
{
     for(int i=0; i<bookCount; i++)
    {
        cout<< books[i].name <<" " <<books[i].quantity <<"\n" ;
    }

}
void menu()
{
    int choice ;
    while(true)
    {
        cout<<" Library menu : \n" ;
        cout << "1) add book\n2) search books by prefix\n3) print who borrowed book by name\n";
        cout << "4) print library by id\n5) print library by name\n6) add user\n";
        cout << "7) user borrow book\n8) user return book\n9) print users\n10) Exit\n";
        cin>>choice ;

       if (choice == 1) add_book();
       else if (choice == 2) search_books_by_prefix();
       else if (choice == 3) print_who_borrowed_book_by_name();
       else if (choice == 4) print_library_by_id();
       else if (choice == 5) print_library_by_name();
       else if (choice == 6) add_user();
       else if (choice == 7) user_borrow_book();
       else if (choice == 8) user_return_book();
       else if (choice == 9) print_users();
       else if (choice == 10) break;
       else cout << "Invalid choice.\n";
    }
}

int main()
{
    menu() ;
    return 0 ;
}
