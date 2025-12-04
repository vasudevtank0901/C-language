//  1. question

// #include <iostream>
// using namespace std;

// class Laptop {
// private:
//     string name;
//     float price;
//     string processor;

// public:
//     Laptop(string n, float p, string pr) {
//         name = n;
//         price = p;
//         processor = pr;
//     }

//     void display() {
//         cout << "Laptop Name: " << name << endl;
//         cout << "Price: " << price << endl;
//         cout << "Processor: " << processor << endl << endl;
//     }
// };

// int main() {

//     Laptop l1("Dell Inspiron", 55000, "Intel i5");
//     Laptop l2("HP Pavilion", 65000, "AMD Ryzen 5");

//     l1.display();
//     l2.display();

//     return 0;
// }



// 2.question

// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     int accountNumber;
//     double balance;
//     string ownerName;

// public:
//     BankAccount(int accNo, string owner, double bal) {
//         accountNumber = accNo;
//         ownerName = owner;
//         balance = bal;
//     }

//     void credit(double amount) {
//         balance += amount;
//         cout << "Credited: " << amount << endl;
//     }

//     void debit(double amount) {
//         if (amount <= balance) {
//             balance -= amount;
//             cout << "Debited: " << amount << endl;
//         } else {
//             cout << "Insufficient Balance!" << endl;
//         }
//     }

//     void displayBalance() {
//         cout << "Account No: " << accountNumber << endl;
//         cout << "Owner: " << ownerName << endl;
//         cout << "Balance: " << balance << endl << endl;
//     }
// };

// int main() {

//     BankAccount b1(101, "Rahul Sharma", 5000);

//     b1.displayBalance();
//     b1.credit(2000);
//     b1.debit(1500);
//     b1.displayBalance();

//     return 0;
// }


//  3. question

// #include <iostream>
// using namespace std;

// class Shape {
// private:
//     string color;
//     float area;

// public:
//     void setColor(string c) { color = c; }
//     string getColor() { return color; }

//     void setArea(float a) { area = a; }
//     float getArea() { return area; }
// };

// class Circle : public Shape {
// private:
//     float radius;

// public:
//     Circle(float r) { radius = r; }

//     void calculateArea() {
//         float a = 3.14 * radius * radius;
//         setArea(a);
//     }
// };

// class Rectangle : public Shape {
// private:
//     float length, width;

// public:
//     Rectangle(float l, float w) {
//         length = l;
//         width = w;
//     }

//     void calculateArea() {
//         float a = length * width;
//         setArea(a);
//     }
// };

// int main() {

//     Circle c(5);
//     c.setColor("Red");
//     c.calculateArea();
//     cout << "Circle Color: " << c.getColor() << endl;
//     cout << "Circle Area: " << c.getArea() << endl << endl;

//     Rectangle r(4, 6);
//     r.setColor("Blue");
//     r.calculateArea();
//     cout << "Rectangle Color: " << r.getColor() << endl;
//     cout << "Rectangle Area: " << r.getArea() << endl;

//     return 0;
// }

// 4.question

//     float getArea() { return area; }

//     virtual void displayDetails() {
//         cout << "Shape Details" << endl;
//     }
// };

// class Circle : public Shape {
// private:
//     float radius;

// public:
//     Circle(float r) { radius = r; }

//     void calculateArea() {
//         setArea(3.14 * radius * radius);
//     }

//     void displayDetails() override {
//         cout << "Circle => Color: " << getColor()
//              << ", Area: " << getArea() << endl;
//     }
// };

// class Rectangle : public Shape {
// private:
//     float length, width;

// public:
//     Rectangle(float l, float w) {
//         length = l;
//         width = w;
//     }

//     void calculateArea() {
//         setArea(length * width);
//     }

//     void displayDetails() override {
//         cout << "Rectangle => Color: " << getColor()
//              << ", Area: " << getArea() << endl;
//     }
// };

// int main() {

//     Circle c(5);
//     c.setColor("Green");
//     c.calculateArea();

//     Rectangle r(4, 6);
//     r.setColor("Yellow");
//     r.calculateArea();

//     Shape* s[2];
//     s[0] = &c;
//     s[1] = &r;

//     cout << "Displaying Details Using Polymorphism:\n";
//     for (int i = 0; i < 2; i++) {
//         s[i]->displayDetails();
//     }

//     return 0;
// }



// 5 question
// #include <iostream>
// using namespace std;

// class Vehicle {
// public:
//     virtual void startEngine() = 0; 
//     virtual void drive() = 0;       
// };

// class Car : public Vehicle {
// public:
//     void startEngine() {
//         cout <<endl<< "Car engine started" << endl;
//     }
//     void drive() {
//         cout << "Car is driving" << endl;
//     }
// };

// class Bike : public Vehicle {
// public:
//     void startEngine() {
//         cout <<endl<< "Bike engine started" << endl;
//     }
//     void drive() {
//         cout << "Bike is driving" << endl;
//     }
// };

// int main() {

//     Vehicle* v1 = nullptr;  

//     int choice;

//     do {
//         cout <<endl<< "----- Vehicle Menu -----" << endl;
//         cout <<endl<< "1. Use Car" << endl;
//         cout << "2. Use Bike" << endl;
//         cout << "3. Exit" << endl;
//         cout <<endl<< "Enter your choice: ";
//         cin >> choice;

//         if (choice == 1) {
//             Car c1;      
//             v1 = &c1;     

//             cout<<endl<<"\t\tYou Chose Bike.."<<endl;
//             v1->startEngine();
//             v1->drive();

//             cout << endl;

//         } else if (choice == 2) {
//             Bike b1;     
//             v1 = &b1;     

//             cout<<endl<<"\t\tYou Chose car.."<<endl;
//             v1->startEngine();
//             v1->drive();

//             cout << endl;

//         } else if (choice == 3) {
//             cout << "Exiting..." << endl;
//         } else {
//             cout << "Invalid choice, try again" << endl << endl;
//         }

//     } while (choice != 3);

// }






