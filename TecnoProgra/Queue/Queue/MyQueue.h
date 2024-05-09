#pragma once
#include <iostream>
class MyQueue
{
private:
    struct Node
    {
        int value;
        Node* next;
    };

    Node* m_first;
    Node* m_last;
    size_t m_size = 0;
public:
    MyQueue()
    {
        m_first = nullptr;
        m_last = nullptr;
        m_size = 0;
    }

    void Push(int value)
    {
        Node* node = new Node();
        node->value = value;

        if (m_first = nullptr)
        {
            m_first = node;
            m_last = node;
        }
        else
        {
            // Update last
            m_last->next = node;
            m_last = m_last->next;
            // Opcion 2: last = node
        }
    }

    int Pop()
    {
        if (m_first == nullptr)
        {
            return -1;
        }
        Node* nodeToRemove = m_first;
        int valueToRemove = nodeToRemove->value;

        delete nodeToRemove;
        --m_size;
    }
    int Back()
    {
        if (m_last == nullptr)
        {
            return -1;
        }
        return m_last->value;
    }

    void Clear()
    {
        while (!IsEmpty())
        {
            Pop();
        }
    }

    bool IsEmpty() const
    {
        return m_size == 0;
    }


    void Print() const
    {
        Node* copyTopPointer = m_first;
        while (copyTopPointer != nullptr)
        {
            std::cout << copyTopPointer->value << "-";
            copyTopPointer = copyTopPointer->next;
        }
        std::cout << std::endl;
    }
};