#include "MyString.h"
#include <cstring>
#include <string.h>
#include <iostream>
MyString::MyString(const char* ch)
{
	m_sizeOftext = strlen(ch);
	m_text = new char[m_sizeOftext];
	// Copy content of ch to m_text
	//Option1: for loop, m_text[i] = ch[i]
	//Option2: Use strcpy_s
	strcpy_s(m_text, m_sizeOftext, ch);
}

MyString::~MyString()
{
	std::cout << "DESTRUCTOR CALLED!" << std::endl;
	if (m_text != nullptr) {
		delete[] m_text;
	}
}

size_t MyString::GetSize() const {
	return m_sizeOftext;
}