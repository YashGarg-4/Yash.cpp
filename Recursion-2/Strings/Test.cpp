#include <iostream>

using namespace std;

// Definition for singly-linked list node
class Node {
public:
    int data;      // Value stored in the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a node with given data
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to reverse the first K nodes of the linked list
Node* reverseKNodes(Node* head, int k) {
    Node* prev = nullptr;    // Pointer to the previous node
    Node* current = head;    // Pointer to the current node
    Node* next = nullptr;    // Pointer to the next node
    int count = 0;

    // Reverse the first K nodes of the list
    while (current != nullptr && count < k) {
        next = current->next;    // Store the next node
        current->next = prev;    // Reverse the link
        prev = current;          // Move the prev pointer one step forward
        current = next;          // Move the current pointer one step forward
        count++;
    }

    // After reversing, the original head becomes the last node in this segment.
    // Its next should point to the remaining part of the list.
    if (head != nullptr) {
        head->next = current;
    }

    // Skip the next K nodes (i.e., leave them in original order)
    count = 0;
    while (count < k - 1 && current != nullptr) {
        current = current->next;
        count++;
    }

    // Recursively reverse the next K nodes if there are more nodes to process
    if (current != nullptr) {
        current->next = reverseKNodes(current->next, k);
    }

    // Return the new head of the list (which is prev)
    return prev;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next = new Node(9);
    head->next->next->next->next->next->next->next->next->next = new Node(10);

    int k = 3;

    cout << "Original Linked List: ";
    printList(head);

    // Reverse every K nodes alternatively
    head = reverseKNodes(head, k);

    cout << "Modified Linked List: ";
    printList(head);

    return 0;
}
