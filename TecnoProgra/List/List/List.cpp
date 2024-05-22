#include <iostream>
#include <list>
#include "MyList.h"
void main() {
    std::list<float> l1;

    l1.push_front(10.0f);
    l1.push_back(20.0f);
    l1.push_front(5.4f);
    auto it2 = l1.rbegin();  //Seria std::list<float>::iterator
    *it2 = 27.3f;

    auto it3 = l1.begin();
    ++it3; //Points to 10
    l1.erase(it3);

    auto it = l1.begin();  //Seria std::list<float>::iterator
    for (; it != l1.end(); it++) {
        std::cout << *it << "<->";
    }

    std::cout << std::endl;
    MyList myL1;
    myL1.Insert(myL1.Front(), 7);
    myL1.Insert(myL1.Front(), 2);
    myL1.Insert(myL1.Front(), 4);
    // myL1 = 15 10 7

    // Advance
   MyList::Node* node = myL1.Advance(0);
   std::cout << node->m_value << std::endl;
    // Erase
   myL1.Erase(node);
   myL1.Erase(myL1.Back());
   myL1.Erase(myL1.Back());

   myL1.Print();
   myL1.ReversePrint();
}