#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;};

class LinkedList {
                    private:
                        Node* head;
                    public:
                    LinkedList() { head = nullptr; }
                    void insertAtHead(int data);
                    void insertAtTail(int data);
                    void deleteAtHead();
                    void deleteAtTail();
                    void printList();
            };

int main(){
    LinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    cout << "Linked list: ";
    list.printList();
    list.deleteAtHead();
    cout << "After deleting at head: ";
    list.printList();
    list.deleteAtTail();
    cout << "After deleting at tail: ";
    list.printList();
    return 0;
}

void LinkedList:: insertAtTail(int data) {
    if (head == nullptr) {  
            insertAtHead(data);
            return;                        }   
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;    }
            Node* newNode = new Node;
            newNode->data = data;
            newNode->next = nullptr;
            temp->next = newNode;
    }

void LinkedList:: deleteAtHead() {
    if (head == nullptr) {
        cout << "Linked list is empty." << endl;
        return;    }
    Node* temp = head;
    head = head->next;
    delete temp;}

void LinkedList:: deleteAtTail() {
    if (head == nullptr) {
        cout << "Linked list is empty." << endl;
        return;   }
    if (head->next == nullptr) {
        deleteAtHead();
        return    ;     }
    Node* temp = head;
    Node* prev = nullptr;
    while (temp->next != nullptr) {
        prev = temp;
        temp = temp->next;  }
    prev->next = nullptr;
    delete temp;
}
void LinkedList:: printList(){
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;}
    cout << endl;
}