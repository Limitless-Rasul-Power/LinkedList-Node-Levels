#pragma once
#include <iostream>
#include "Level.h"

template<typename T>
struct Node
{
	T* level;
	Node* next;

	Node():level(nullptr), next(NULL) {}

	~Node()
	{
		delete level;
		delete next;
	}
};