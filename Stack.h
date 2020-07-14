#pragma once

#include "LinkedList.h"

class Stack
{
private:
    LinkedList list;

public:
    void push(char item)
    {
        list.addFront(item);
    }

    void pop()
    {
        list.removeFront();
    }

    std::string peek()
    {
        if (list.isEmpty())
            return "";

        ListIterator *iter = list.getIterator();
        iter->next();
        return iter->getData();
    }

    bool isEmpty()
    {
        return list.isEmpty();
    }

    void display()
    {
        list.display();
    }
};
