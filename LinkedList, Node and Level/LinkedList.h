#pragma once
#include <iostream>
#include <assert.h>
#include "Node.h"

template<typename T>
struct LinkedList
{

private:
	T* head;

public:

	LinkedList(T*& front)
	{
		assert(front != NULL && front != nullptr && "Head is Null!");
		this->head = front;
	}

	T* Add_first(Level* const& level)
	{
		T* temp = new T;
		temp->level = level;
		temp->next = head;
		head = temp;

		return temp;
	}

	T* Add_last(Level* const& level)
	{
		T* temp = new T;
		temp->level = level;

		T* copy = head;
		while (copy->next != NULL || copy->next != nullptr)
			copy = copy->next;

		copy->next = temp;
		temp->next = NULL;

		return temp;
	}

	void Delete_after(T* prev)
	{
		if (prev->next == NULL || prev == NULL || prev->next == nullptr || prev == nullptr)
			return;

		T* temp = prev->next;
		prev->next = prev->next->next;

		delete temp;

	}

	T* Insert_by_index(const short& index, Level* const& level)
	{
		if (head == NULL || head == nullptr)
			return NULL;

		T* temp = new T;
		temp->level = level;

		short i = 0;
		T* traverse = head;
		while (traverse != NULL && i != index && traverse != nullptr)
		{
			traverse = traverse->next;
			++i;
		}

		temp->next = traverse->next;
		traverse->next = temp;

		return temp;
	}

	void Delete_first()
	{
		if (head == NULL || head == nullptr)
			return;

		T* temp = head;
		head = head->next;

		delete temp;
	}

	void Delete_last()
	{
		if (head->next == NULL || head->next == nullptr)
		{
			T* temp = head;
			head = NULL;

			delete temp;
		}
		else
		{
			T* traverse = head;

			while (traverse->next->next != NULL && traverse->next->next != nullptr)
			{
				traverse = traverse->next;
			}

			T* temp = traverse->next;
			traverse->next = NULL;

			delete temp;

		}

	}

	void Delete_by_index(const short& index)
	{
		if (index == 0)
			Delete_first();
		else if (index == Node_length())
			Delete_last();
		else
		{
			if (index > Node_length())
				return;

			short i = 1;
			T* traverse = head;
			while (traverse != NULL && i != index)
				traverse = traverse->next;

			T* temp = traverse->next;
			traverse->next = traverse->next->next;

			delete temp;
		}

	}

	unsigned short Node_length() const
	{
		unsigned short index = 0;
		T* traverse = head;
		while (traverse->next != NULL && traverse->next != nullptr)
		{
			traverse = traverse->next;
			++index;
		}
		return index;
	}

	void Show()
	{
		unsigned short index = 0;
		T* traverse = head;
		while (traverse != NULL && traverse != nullptr)
		{
			std::cout << "#" << index + 1 << " Name: " << traverse->level->Get_name() << '\n';
			std::cout << "#" << index + 1 << " Level Difficulty: " << traverse->level->Get_level_difficulty() << "\n\n";
			traverse = traverse->next;
			++index;
		}
	}

	~LinkedList()
	{
		while(head != NULL)
		{
			T* temp = head;
			head = head->next;			
			delete temp;
		}
	}

};
