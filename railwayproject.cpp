#include <iostream>
#include <cstring>
using namespace std;

class Train {
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    static int trainCount;

public:
    Train() {
        trainNumber = 0;
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
        trainCount++;
    }

    Train(int num, const char* name, const char* src, const char* dest, const char* time) {
        trainNumber = num;
        strcpy(trainName, name);
        strcpy(source, src);
        strcpy(destination, dest);
        strcpy(trainTime, time);
        trainCount++;
    }

    int getTrainNumber() {
        return trainNumber;
    }

    const char* getTrainName() {
        return trainName;
    }

    const char* getSource() {
        return source;
    }

    const char* getDestination() {
        return destination;
    }

    const char* getTrainTime() {
        return trainTime;
    }

    void inputTrainDetails() {
        cout <<endl<< "Enter The Train Details. "<<endl<<endl;
        cout << "Train Number: ";
        cin >> trainNumber;
        cin.ignore(); // 
        
        cout << "Train Name: ";
        cin.getline(trainName, 50);
        
        cout << "Source: ";
        cin.getline(source, 50);
        
        cout << "Destination: ";
        cin.getline(destination, 50);
        
        cout << "Train Time (HH:MM): ";
        cin.getline(trainTime, 10);
        
        cout<<endl << "** Train Details Added Successfully :) **"<<endl;
    }

    void displayTrainDetails() {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << trainTime << endl;
        cout << "~~~~~~~~"<<endl<<endl;
    }

    static int getTrainCount() {
        return trainCount;
    }
};

int Train::trainCount = 0;

int main() {
    cout <<endl << "\t ----- Train management System -----"<<endl;
    
    Train train1;
    train1.inputTrainDetails();
    
    Train train2(11935, "Rajdhani Express", "Delhi", "Mumbai", "16:30");
    
    cout <<endl<< "\t***** All Trains *****"<<endl<<endl;
    train1.displayTrainDetails();
    train2.displayTrainDetails();
    
    cout<<"--";
    cout<<endl << "Total Number Of Trains Are : " << Train::getTrainCount() << endl;
    cout<<"--------"<<endl;
    cout << "\tFirst Train Name: " << train1.getTrainName() << endl;
    cout << "\tSecond Train Name: " << train2.getTrainName() << endl;
    
    return 0;
}