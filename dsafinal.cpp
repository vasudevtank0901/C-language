#include <iostream>
using namespace std;

#define MAX 10

class QueueCRUD {
private:
    int queue[MAX];
    int front, rear;

public:
    QueueCRUD() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow!"<<endl;
            return;
        }
        if (front == -1)
            front = 0;
        queue[++rear] = value;
        cout << "Inserted: " << value << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!"<<endl;
            return;
        }
        cout << "Deleted: " << queue[front++] << endl;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!"<<endl;
            return;
        }
        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }

    void updateByPosition(int pos, int newValue) {
        int index = front + pos - 1;
        if (index < front || index > rear) {
            cout << "Invalid Position!"<<endl;
            return;
        }
        queue[index] = newValue;
        cout << "Updated Successfully!"<<endl;
    }

    void updateByValue(int oldValue, int newValue) {
        for (int i = front; i <= rear; i++) {
            if (queue[i] == oldValue) {
                queue[i] = newValue;
                cout << "Updated Successfully!"<<endl;
                return;
            }
        }
        cout << "Value Not Found!"<<endl;
    }

    void bubbleSort() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!"<<endl;
            return;
        }
        for (int i = front; i < rear; i++) {
            for (int j = front; j < rear - (i - front); j++) {
                if (queue[j] > queue[j + 1]) {
                    int temp = queue[j];
                    queue[j] = queue[j + 1];
                    queue[j + 1] = temp;
                }
            }
        }
        cout << "Queue Sorted Successfully!"<<endl;
    }
};

int main() {
    QueueCRUD q;
    int choice, value, pos, newValue, oldValue;

    do {
        cout << " Queue CRUD Menu"<<endl;
        cout << "1. Enqueue"<<endl;
        cout << "2. Dequeue"<<endl;
        cout << "3. Display"<<endl;
        cout << "4. Update by Position"<<endl;
        cout << "5. Update by Value"<<endl;
        cout << "6. Bubble Sort"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> newValue;
            q.updateByPosition(pos, newValue);
            break;

        case 5:
            cout << "Enter old value: ";
            cin >> oldValue;
            cout << "Enter new value: ";
            cin >> newValue;
            q.updateByValue(oldValue, newValue);
            break;

        case 6:
            q.bubbleSort();
            break;

        case 0:
            cout << "Exiting..."<<endl;
            break;

        default:
            cout << "Invalid Choice!"<<endl;
        }
    } while (choice != 0);

    return 0;
}
