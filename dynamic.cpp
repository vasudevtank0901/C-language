#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "Node inserted successfully\n";
}

// READ (Display)
void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// UPDATE
void update(int oldValue, int newValue) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == oldValue) {
            temp->data = newValue;
            cout << "Node updated successfully\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Value not found\n";
}

// DELETE
void deleteNode(int value) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted successfully\n";
        return;
    }

    Node* current = head;
    Node* prev = NULL;

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        cout << "Value not found\n";
    } else {
        prev->next = current->next;
        delete current;
        cout << "Node deleted successfully\n";
    }
}

// MAIN MENU
int main() {
    int choice, value, oldValue, newValue;

    do {
        cout << "\n--- Linked List CRUD Menu ---\n";
        cout << "1. Insert\n2. Display\n3. Update\n4. Delete\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            insert(value);
            break;

        case 2:
            display();
            break;

        case 3:
            cout << "Enter old value: ";
            cin >> oldValue;
            cout << "Enter new value: ";
            cin >> newValue;
            update(oldValue, newValue);
            break;

        case 4:
            cout << "Enter value to delete: ";
            cin >> value;
            deleteNode(value);
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
