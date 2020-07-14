#pragma once

#include <string>
#include <iostream>

class Node
{
public:
    std::string data;
    Node* next;       // self-referential

    Node(char value) // inline constructor
    {
        data = value;
        next = nullptr;
    }

    ~Node() // inline destructor
    {
        if (next != nullptr)
            delete next;

        // TESTING:
        //std::cout << "\tDeleting " << data << std::endl;
    }
};
