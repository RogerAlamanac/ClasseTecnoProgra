// Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include "MyQueue.h"
int main()
{
	std::queue<float> q1;

	q1.push(3.7f);
	q1.push(5.1f);
	q1.push(7.6f);
	q1.push(1.6f);
	q1.push(0.9f);

	q1.pop();

	std::queue<float> q2 = q1;
	while (!q2.empty()) {
		std::cout << q2.front() << "-";
		q2.pop();
	}
	std::cout << std::endl;
	std::cout << q1.size() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
