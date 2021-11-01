#pragma once


template <typename T>
class List
{
	struct Node
	{
		T* item;
		Node* next;
		Node(T* item) {
			this->item = item;
			this->next = nullptr;
		}
	};
	Node* head;
	Node* tail;
	int size = 0;

public:
	void add(T* item) {
		Node* node = new Node(item);
		if (this->isEmpty()) {
			this->head = this->tail = node;
		}
		else {
			this->tail->next = node;
			this->tail = this->tail->next;
		}
		this->size++;
	}
	int getSize() {
		return this->size;
	}
	bool isEmpty() {
		return this->size == 0;
	}
	T* get(int index) {
		if (index >= this->size || index < 0) {
			return nullptr;
		}
		Node* iterator = this->head;
		int i = 0;
		while (i < index) {
			iterator = iterator->next;
			i++;
		}
		return iterator->item;
	}
	void clear() {
		this->head = nullptr;
		this->tail = nullptr;
		this->size = 0;
	}
};
