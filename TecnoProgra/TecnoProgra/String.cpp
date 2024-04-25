#include <iostream>
#include "MyString.h"
#include <stack>

int main() {
	MyString s1("manish");//Constructor called

	MyString* sHeap = new MyString("pepe");

	for (int i = 0; i < s1.GetSize(); ++i) {
		//TODO: Print each character of the string 
		// std::cout<<s1[i] <<
	}
	std::cout << "Doing other stuff" << std::endl;

	std::stack<int> stack1;

	stack1.push(10);
	stack1.push(22);
	stack1.push(33);
	std::cout << "TOP: " << stack1.top() << std::endl;

	stack1.pop();
	std::cout << "TOP: " << stack1.top() << std::endl;
	
	while (!stack1.empty()) {
		std::cout << "TOP: " << stack1.top() << std::endl;
		stack1.pop();
	}
}//Destructor called