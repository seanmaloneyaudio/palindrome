#include "LinkedList.h"



LinkedList::LinkedList()
{
    first = new Node(NULL);
}


LinkedList::~LinkedList()
{
    delete first;
}


bool LinkedList::isEmpty()
{
    return first->next == nullptr;
}


void LinkedList::addFront(char value)
{
    // Create a new node.
    Node* newNode = new Node(value);

    newNode->next = first->next;
    first->next = newNode;
}


void LinkedList::addBack(char value)
{
    Node* temp = first;  // Declare a traversal pointer and start it at the beginning

    while (temp->next != nullptr)  // Find the end of the list
        temp = temp->next;

    Node* newNode = new Node(value);  // Create a new node.
    temp->next = newNode;  // Attach new node to end of list
}


void LinkedList::removeFront()
{
    // Point a temp pointer to the first node.
    Node* temp = first->next;

    // Reassign dummy node's link to the following node.
    first->next = temp->next;

    // Delete the temp pointer.
    temp->next = nullptr;
    delete temp;
}


void LinkedList::removeBack()
{
    // Point trailer pointer to dummy
    Node* trailer = first;

    // Point temp pointer to trailer's next
    Node* temp = trailer->next;

    // Traverse list until temp is on last node
    while (temp->next != nullptr)  // Find the end of the list
    {
        temp = temp->next;
        trailer = trailer->next;
    }

    // Set trailer's next to null
    trailer->next = nullptr;

    // Delete temp
    delete temp;
}

Node* LinkedList::find(std::string key)
{
    Node* temp = first->next;

    while (temp != nullptr)
    {
        if (temp->data == key)
            return temp;

        temp = temp->next;
    }

    return nullptr;
}


void LinkedList::display()
{
    Node* temp = first->next;

    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }

    std::cout << std::endl;
}
