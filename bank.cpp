#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;

protected:
    string accountNumber;
    string accountHolderName;

public:
    BankAccount(string accNo, string name, double bal)
        : accountNumber(accNo), accountHolderName(name), balance(bal) {}

    ~BankAccount() {} 
    void deposit(double amount) {
        balance += amount;
        cout << "\t\tSucssesfully Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout <<endl<< "\t\tInsufficient balance !!!" << endl;
        else {
            balance -= amount;
            cout << endl<<"\t\tSucssesfully Withdrawn: " << amount << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    virtual void displayAccountInfo() {
        cout <<endl << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Balance : " << balance << endl;
    }

    virtual double calculateInterest() {
        return 0.0; 
    }
};
 

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal), interestRate(rate) {}

    double calculateInterest() override {
       int interest = getBalance() * interestRate;
        balance += interest;
        return interest;
    }

    void displayAccountInfo() override {
        BankAccount::displayAccountInfo();
        cout << "Interest Rate : " << interestRate << endl;
    }
};


class CheckingAccount : public BankAccount {
public:
    CheckingAccount(string accNo, string name, double bal)
        : BankAccount(accNo, name, bal) {}

    double calculateInterest() override {
        return 0.0;
    }
};


class FixedDeposit : public BankAccount {
private:
    double interestRate;

public:
    FixedDeposit(string accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal), interestRate(rate) {}

    double calculateInterest() override {
        int interest = getBalance() * interestRate;
        balance += interest;
        return interest;
    }
};


int main() {
    BankAccount* account = nullptr;
    int choice;

    cout <<endl<< "Select Account Type"<<endl<<endl;
    cout << "1. Savings Account"<<endl;
    cout << "2. Checking Account"<<endl;
    cout << "3. Fixed Deposit Account"<<endl<<endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        account = new SavingsAccount("1001", "John Doe", 1000, 0.05);
    else if (choice == 2)
        account = new CheckingAccount("2001", "John Doe", 1000);
    else if (choice == 3)
        account = new FixedDeposit("3001", "John Doe", 5000, 0.08);
    else {
        cout << "Invalid choice!";
        return 0;
    }

    int option;
    do {
        cout<<endl << "~~~~~~~~~~ Menu ~~~~~~~~~~"<<endl;
        cout << "1. Deposit"<<endl;
        cout << "2. Withdraw"<<endl;
        cout << "3. Display Account Info"<<endl;
        cout << "4. Calculate Interest"<<endl;
        cout << "5. Exit"<<endl<<endl;
        cout << "Enter option: ";
        cin >> option;

        if (option == 1) {
            double amount;
            cout << "Enter amount: ";
            cin >> amount;
            account->deposit(amount);
        }
        else if (option == 2) {
            double amount;
            cout << "Enter amount: ";
            cin >> amount;
            account->withdraw(amount);
        }
        else if (option == 3) {
            account->displayAccountInfo();
        }
        else if (option == 4) {
            cout << "Interest: " << account->calculateInterest() << endl;

        }

    } while (option != 5);

    delete account;
    return 0;
}