#pragma once
#include "Nodo.h"

class Pila
{
	Nodo* tope;
	int tamano;

public:
	Pila();
	bool EstaVacia();
	int ObtenerTope();
	void Insertar(int dato);
	int Eliminar();
	void Mostrar();
	int Vaciar();
};

