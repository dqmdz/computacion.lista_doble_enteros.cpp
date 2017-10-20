/*
 * ListaDoble.cpp
 *
 *  Created on: 20 oct. 2017
 *      Author: daniel
 */

#include "listadoble.h"

#include <iostream>

using namespace std;

ListaDoble::ListaDoble() {
	ptr = NULL;

}

Node* ListaDoble::getPtr() {
	return ptr;
}

void ListaDoble::setPtr(Node* ptr) {
	this->ptr = ptr;
}

void ListaDoble::add(int value) {
	Node* nuevo = new Node();
	nuevo->setValue(value);

	// Caso: la lista doble no tiene ningún elemento
	if (!ptr){
		ptr = nuevo;
		return;
	}

	// Caso: el valor a agregar está a la derecha
	if (value >= ptr->getValue()) {
		// Salto uno a la derecha hasta que encuentro la ubicación
		while (value >= ptr->getValue() && ptr->getNext())
			ptr = ptr->getNext();
		// Verifico si el valor nuevo va a la izquierda del ptr
		if (value < ptr->getValue()) {
			nuevo->setPrev(ptr->getPrev());
			nuevo->setNext(ptr);
			ptr->getPrev()->setNext(nuevo);
			ptr->setPrev(nuevo);
			ptr = nuevo;
			return;
		}
		// Si llegué al final
		nuevo->setPrev(ptr);
		ptr->setNext(nuevo);
		ptr = nuevo;
		return;
	}

	while (value <= ptr->getValue() && ptr->getPrev())
		ptr = ptr->getPrev();
	// Verifico si el valor nuevo va a la derecha del ptr
	if (value > ptr->getValue()) {
		nuevo->setNext(ptr->getNext());
		nuevo->setPrev(ptr);
		ptr->getNext()->setPrev(nuevo);
		ptr->setNext(nuevo);
		ptr = nuevo;
		return;
	}
	// Si llegué al final
	nuevo->setNext(ptr);
	ptr->setPrev(nuevo);
	ptr = nuevo;
}

void ListaDoble::remove(int value) {
}

void ListaDoble::show() {
	Node* aux = ptr;
	cout << endl << "Lista de valores . . ." << endl;
	// muevo el puntero al primer elemento
	while (aux->getPrev())
		aux = aux->getPrev();
	// muestro cada elemento de la lista
	while (aux) {
		cout << aux->toString() << endl;
		aux = aux->getNext();
	}
}

void ListaDoble::moveFirst() {
	while (ptr->getPrev())
		ptr = ptr->getPrev();
}

void ListaDoble::free() {
	moveFirst();
	while (ptr) {
		Node* aux = ptr;
		ptr = ptr->getNext();
		delete aux;
	}
}
