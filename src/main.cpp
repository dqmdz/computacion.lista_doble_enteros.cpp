//============================================================================
// Name        : lista_doble.cpp
// Author      : dq
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "listadoble.h"

using namespace std;

int main() {

	ListaDoble ld;
	ld.add(5);
	ld.add(1);
	ld.add(10);
	ld.add(4);
	ld.add(3);
	ld.add(8);
	ld.add(2);
	ld.add(7);
	ld.add(6);
	ld.add(9);
	ld.show();
	ld.remove(3);
	ld.show();
	ld.free();
	return 0;
}
