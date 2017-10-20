/*
 * Node.h
 *
 *  Created on: 20 oct. 2017
 *      Author: daniel
 */

#ifndef NODE_H_
#define NODE_H_

#include <string>

class Node {
private:
	int value;
	Node* prev;
	Node* next;
public:
	Node();
	Node* getNext();
	void setNext(Node* next);
	Node* getPrev();
	void setPrev(Node* prev);
	int getValue();
	void setValue(int value);
	std::string toString();
};

#endif /* NODE_H_ */
