// Double Linked List program
// written by: Johannes Schmidt, Michael Mardaus

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#define MAX_INT 214000000

using namespace std;

struct Node {

	int value;
	Node* next;
	Node* previous;

};

Node* make_node(int x) {

	Node* node = new Node;
	node->value = x;

	return node;
}

Node* last = make_node(MAX_INT);
Node* first = 0;

Node* find_greater(Node* begin, Node* end, int x) {

	Node* node = begin;

	while (node != end) {

		if (node->value > x) {
			return node;
		}
		node = node->next;
	}
	return end;
}

void insert(Node* pos, int x) {

	Node* node = make_node(x);

	if (pos == first) {
		node->next = pos;
		pos->previous = node;
		first = node;
	} else {

		node->next = pos;
		pos->previous->next = node;
		node->previous = pos->previous;
		pos->previous = node;

	}
}

Node* reverse(Node* begin, Node* end) {

	if (begin == end) {
		return begin;
	}
	if(begin->next == end){
		return begin;
	}

	Node* newBegin = end->previous;
	Node* temp = 0;

	Node* node = begin->next;

	if (begin == first) {

		begin->previous = begin->next;
		begin->next = end;
		end->previous = begin;

		first = newBegin;

	} else {

		begin->next = end;
		end->previous->previous = begin->previous;
		end->previous = begin;
		begin->previous->next = end->previous;

	}

	while (node->next != end) {

		temp = node->previous;
		node->previous = node->next;
		node->next = temp;

		node = node->previous;
	}

	node->next = node->previous;

	return newBegin;
}

void print(Node* begin, Node* end) {

	if (begin->value <= end->value) {
		Node* node = begin;
		while (node != end) {
			cout << node->value << " ";
			node = node->next;
		}
		cout << endl;
	}

}

Node* skip(Node* start, int n) {

	Node* node = start;

	if (n > 0) {
		for (int i = 0; i < n; i++) {
			node = node->next;
		}
	}
	if (n < 0) {
		for (int i = n; i < 0; i++) {
			node = node->previous;
		}

	}
	return node;
}

void erase(Node* begin, Node* end) {

	Node* node = begin;
	Node* lastNode = 0;

	if (begin->previous != 0) {

		begin->previous->next = end;
		end->previous = begin->previous;
	} else {

		lastNode = end->previous;
		end->previous = 0;

	}

	while (node != end) {
		node = node->next;
		delete (node->previous);
	}

	delete (lastNode);

}

int main() {

	int n = 0;
	cin >> n;

	for (int j = 0; j < n; j++) {

		int m = 0;
		cin >> m;

		for (int i = 0; i < m; i++) {

			int value = 0;
			cin >> value;

			if (i == 0) {
				first = make_node(value);
				first->next = last;
				last->previous = first;

			} else {

				insert(find_greater(first, last, value), value);

			}

		}

		if (m != 0) {
			print(first, last);
			print(first->next, find_greater(first->next, last, 10));

			print(reverse(first, skip(first, (m / 2))), last);

			erase(first, last);

			cout
					<< "#---------------------------------------------------------------"
					<< endl;

		}
	}

}

