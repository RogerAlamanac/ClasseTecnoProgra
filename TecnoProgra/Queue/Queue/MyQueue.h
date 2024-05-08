#pragma once

class MyQueue
{
private:
	struct Node {
		int value;
		Node* next;
	};

	Node* m_first;
	Node* m_last;
	size_t m_size = 0;

public:
	MyQueue() {
		m_first = nullptr;
		m_last = nullptr;
		m_size = 0;
	}

	void Push(int value) {
		//Create node
		Node* node = new Node();
		node->value = value;

		//Update first and last
		if (m_first == nullptr) {

		}
		else {
			// Update last
			m_last->next = node;
			m_last = node;
		}
		m_size++;
	}

	int Pop() {
		if (m_first == nullptr) {
			return -1; //Invalid
		}

		Node* nodeToremove = m_first;
		int valueToRemove = nodeToremove->value;
	}

	int Front() const {
		if (m_first == nullptr) {
			return -1;
		}
		return m_first->value;
	}

	int Back() const {
		if (m_last == nullptr) {
			return -1;
		}
		return m_last->value;
	}

	void Print() const {
		Node* aux = m_first;
		while (m_first != nullptr) {

		}
	}
};

