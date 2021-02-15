//
//  main.cpp
//  BookAuthor
//
//  Created by Aurélien Ammeloot on 01/02/2021.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Author {
    
    // Private attributes - read-only
    string name;
    string email;
    char gender;
    
public:
    // Only a constructor can set the attributes up.
    Author(const string& _name, const string& _email, char _gender)
    {
        name = _name;
        email = _email;
        gender = _gender;
    }
    
    string describe()
    {
        string desc = "Author name: " + name + " email: " + email + " gender: " + gender;
        return desc;
    }
};


class Book {
    string title; // Read-only
    shared_ptr<Author> author; // Read-only
    double price; // R/W
    int qty; // R/W
    
public:
    // Constructor
    Book(const string& _title, shared_ptr<Author> _author, double _price, int _qty=0)
    {
        title = _title;
        author = _author;
        price = _price;
        qty = _qty;
    }
    
    // Getters only - reading the variables
    
    // Book title
    const string& getTitle()
    {
        return title;
    }
    
    // Book author
    shared_ptr<Author> getAuthor()
    {
        return author;
    }
    
    // Getters and Setters - R/W
    
    // The unit price
    double getPrice()
    {
        return price;
    }
    
    void setPrice(double _price)
    {
        price = _price;
    }
    
    // Quantity
    int getQty()
    {
        return qty;
    }
    
    void setQty(int _qty)
    {
        qty = _qty;
    }
    
    string describe()
    {
        string description = "Title: " + title + "\nAuthor: " + author->describe() + "\nUnit price " + to_string(price) + "\nQuantity available: " + to_string(qty);
        return description;
    }
};

ostream& operator<<(ostream& os, Author a)
{
    return os << a.describe();
}

ostream& operator<<(ostream& os, Book b)
{
    return os << b.describe();
}

int main(int argc, const char * argv[]) {
    
    
    // Create the author
    shared_ptr<Author> a = make_shared<Author>("Douglas Adams", "d.adams@forty-two.net", 'M');
    // Create the book
    shared_ptr<Book> b = make_shared<Book>("The Hitchhiker's Guide to the Galaxy", a, 15.99, 10);
    
    // Test 1: describe the author
    cout << *a << endl;
    
    // Test 2: describe the book
    cout << *b << endl;
    
    
    return 0;
}
