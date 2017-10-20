/*
 * Node.cpp
 *
 *  Created on: 20 oct. 2017
 *      Author: daniel
 */

#include "node.h"

#include <sstream>

Node* Node::getNext() {
	return next;
}

void Node::setNext(Node* next) {
	this->next = next;
}

Node* Node::getPrev() {
	return prev;
}

void Node::setPrev(Node* prev) {
	this->prev = prev;
}

int Node::getValue() {
	return value;
}

void Node::setValue(int value) {
	this->value = value;
}

Node::Node() {
	this->value = 0;
	this->prev = this->next = 0;
}

std::string Node::toString() {
	std::stringstream ss;
	ss << "Value: " << this->value << " Prev: " << this->prev << " Next: " << this->next;
	return ss.str();
}
