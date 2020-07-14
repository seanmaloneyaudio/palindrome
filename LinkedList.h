#pragma once

#include "Node.h"

class ListIterator
{
private:
    Node* current;

public:
    ListIterator(Node* n)
    {
        current = n;
    }

    bool next()
    {
        if (current->next != nullptr)
        {
            current = current->next;
            return true;
        }

        return false;
    }

    std::string getData()
    {
        if (current != nullptr)
            return current->data;

        return "";
    }
};

class LinkedList
{
private:
    Node* first;

public:
    LinkedList();
    ~LinkedList();
    bool isEmpty();
    void addFront(char value);
    void addBack(char value);
    void removeFront();
    void removeBack();
    Node* find(std::string key);
    void display();

    ListIterator* getIterator()
    {
        return new ListIterator(first);
    }
};
