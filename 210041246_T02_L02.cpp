#include "bits/stdc++.h"
using namespace std;

class Book {
private:
    string title;
    string author;
    int pub_year;
    bool availability = true;
public:
    void setDetails (string ttl, string writer, int year) {
        title = ttl;
        author = writer;
        pub_year = year;
    } 
    void checkOut () {
        availability = false;
    } 
    void checkIn () {
        availability = true;
    }
    void displayStatus () {
        cout << "Name of the book: " << title << '\n';
        cout << "Author: " << author << '\n';
        cout << "Published: " << pub_year << '\n';
        cout << "Availability Status: ";
        if(availability) cout << "Yes\n";
        else cout << "No\n";
    }
    bool isClassic() {
        if (pub_year > 1973) return false;
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    Book b1;
    b1.setDetails("Wind-Up Bird Chronicle", "Haruki Murakami", 2006);
    b1.checkIn();
    b1.displayStatus();
    if (b1.isClassic()) cout << "The book is classic" << '\n';
    else cout << "book's not a classic" << '\n';
    cout << "-----------------------------------\n";
    b1.checkOut();
    b1.displayStatus();

    Book b2;
    b2.setDetails("Arabian Nights", "Mordecai ibn al-Najja", 1825);
    b2.checkIn();
    b2.displayStatus();
    if (b2.isClassic()) cout << "The book is classic" << '\n';
    else cout << "book's not a classic" << '\n';
    cout << "-----------------------------------\n";
    b2.checkOut();
    b2.displayStatus();
}