#pragma once
#pragma once
class Stack   // |7|5|10|
{
    struct Node
    {
        int value; //5
        Node* next; //Pointer node thath contains value  = 7
    };

    Node* m_top;
    size_t m_size = 0;

public:
    Stack()
    {
        m_top = nullptr;
        m_size = 0;

    }
    int Top()const
    {
        if (m_top == nullptr)
        {
            return -1;
        }
        return m_top->value;
    }

    //PREGUNTA DE EXAMEN 100%

    //poner
    void Push(int value)  //EJEMPLO: del 7 (value = 7)
    {
        //creamos el nodo
        Node* node = new Node(); //crear puntero que señaliza un nuevo nodo de mismo caracter que el puntero
        node->value = value;
        if (m_top == nullptr)
        {
            m_top = node;
        }
        else
        {
            node->next = m_top;
            m_top = node;
        }
        ++m_size;
    }

    //quitar
    int Pop()
    {
        if (m_top == nullptr)
        {
            return -1;
        }

        Node* nodeToRemove = m_top;
        int valueToRemove = nodeToRemove->value;

        //m_top = m_top->value; | es lo mismo lo de abajo q esta linea
        m_top = nodeToRemove->next;
        delete nodeToRemove;
        --m_size;
        return valueToRemove;
    }

    void Print() const {
        Node* aux = m_top;
        while (aux != nullptr) {
            std::cout << aux->value << "-";
            aux = aux->next;
        }
        std::cout << std::endl;
    }
};
