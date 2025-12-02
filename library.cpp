#include <iostream>
#include <string>
using namespace std;


class LibraryItem {
private:
    string title;
    string author;
    string lastDate;

public:

    LibraryItem(string t, string a, string d)
        : title(t), author(a), lastDate(d) {}

    virtual ~LibraryItem() {}


    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getlastDate() const { return lastDate; }

    
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
    void setlastDate(string d) { lastDate = d; }


    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() const = 0;
};


class Book : public LibraryItem {
public:
    Book(string t, string a, string d)
        : LibraryItem(t, a, d) {}

    void checkOut() override {
        cout << "Book checked out."<<endl;
    }

    void returnItem() override {
        cout << "Book returned."<<endl;
    }

    void displayDetails() const override {
        cout << "\n[BOOK]"<<endl;
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "last Date: " << getlastDate() << endl;
    }
};


class DVD : public LibraryItem {
public:
    DVD(string t, string a, string d)
        : LibraryItem(t, a, d) {}

    void checkOut() override {
        cout << "DVD checked out."<<endl;
    }

    void returnItem() override {
        cout << "DVD returned."<<endl;
    }

    void displayDetails() const override {
        cout << "\n[DVD]"<<endl;
        cout << "Title: " << getTitle() << endl;
        cout << "Producer: " << getAuthor() << endl;
        cout << "last Date: " << getlastDate() << endl;
    }
};


class Magazine : public LibraryItem {
public:
    Magazine(string t, string a, string d)
        : LibraryItem(t, a, d) {}

    void checkOut() override {
        cout << "Magazine checked out."<<endl;
    }

    void returnItem() override {
        cout << "Magazine returned."<<endl;
    }

    void displayDetails() const override {
        cout << "\n[MAGAZINE]"<<endl;
        cout << "Title: " << getTitle() << endl;
        cout << "Editor: " << getAuthor() << endl;
        cout << "last Date: " << getlastDate() << endl;
    }
};


int main() {
    const int MAX_ITEMS = 10;
    LibraryItem* libraryItems[MAX_ITEMS];
    int count = 0;

    while (true) {
        int option;
        cout <<endl<< "\t\t~~~~~ Library Menu ~~~~~"<<endl;
        cout << "1. Add Book"<<endl;
        cout << "2. Add DVD"<<endl;
        cout << "3. Add Magazine"<<endl;
        cout << "4. Display All Items"<<endl;
        cout << "5. Checkout Item"<<endl;
        cout << "6. Return Item"<<endl;
        cout << "7. Exit";
        cout <<endl << "Enter option: ";
        cin >> option;

        try {
            if (cin.fail()) throw "Invalid input!";

            if (option == 1) {
                string t, a, d;
                cout << "Title: ";
                cin >> t;
                cout << "Author: ";
                cin >> a;
                cout << "last Date: ";
                cin >> d;

                libraryItems[count++] = new Book(t, a, d);
                cout << "Book added!"<<endl;
            }

            else if (option == 2) {
                string t, a, d;
                cout << "Title: ";
                cin >> t;
                cout << "Producer: ";
                cin >> a;
                cout << "last Date: ";
                cin >> d;

                libraryItems[count++] = new DVD(t, a, d);
                cout << "DVD added!"<<endl;
            }

            else if (option == 3) {
                string t, a, d;
                cout << "Title: ";
                cin >> t;
                cout << "Editor: ";
                cin >> a;
                cout << "last Date: ";
                cin >> d;

                libraryItems[count++] = new Magazine(t, a, d);
                cout << "Magazine added!"<<endl;
            }

            else if (option == 4) {
                for (int i = 0; i < count; i++) {
                    libraryItems[i]->displayDetails();
                }
            }

            else if (option == 5) {
                int idx;
                cout << "Enter index: ";
                cin >> idx;
                if (idx < 0 || idx >= count) throw "Invalid index!";
                libraryItems[idx]->checkOut();
            }

            else if (option == 6) {
                int idx;
                cout << "Enter index: ";
                cin >> idx;
                if (idx < 0 || idx >= count) throw "Invalid index!";
                libraryItems[idx]->returnItem();
            }
            else if (option == 7) {
                break;
            }
            else {
                throw "Invalid option!";
            }
        }
        catch (const char* msg) {
            cout << "Error: " << msg << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    return 0;
}