/*
 * ListaDoble.h
 *
 *  Created on: 20 oct. 2017
 *      Author: daniel
 */

#ifndef LISTADOBLE_H_
#define LISTADOBLE_H_

#include "node.h"

class ListaDoble {
private:
	Node* ptr;

	void moveFirst();
public:
	ListaDoble();
	Node* getPtr();
	void setPtr(Node* ptr);
	void add(int);
	void remove(int);
	void show();
	void free();
};

#endif /* LISTADOBLE_H_ */
