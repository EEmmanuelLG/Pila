#pragma once
#include <iostream>

class Nodo
{
	int dato;
	Nodo* anterior;

	friend class Pila;
public:
	Nodo(int _dato);
};

