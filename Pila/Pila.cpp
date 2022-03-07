#include "Pila.h"

Pila::Pila()
{
	tope = NULL;
	tamano = 0;
}

bool Pila::EstaVacia()
{
	return tope == NULL;
}

int Pila::ObtenerTope()
{
	if (EstaVacia())
	{
		return -1;
	}

	return tope->dato;
}

void Pila::Insertar(int dato)
{
	Nodo* nuevo = new Nodo(dato);

	if (EstaVacia())
	{
		tope = nuevo;
	}
	else
	{
		nuevo->anterior = tope;
		tope = nuevo;
	}

	tamano++;
}

int Pila::Eliminar()
{
	if (EstaVacia())
	{
		return -1;
	}
	else
	{
		Nodo* aux = tope;
		tope = tope->anterior;
		int tmp = aux->dato;
		delete (aux);
		tamano--;
		return tmp;
	}
}

void Pila::Mostrar()
{
	Nodo* aux = tope;

	while (aux != NULL)
	{
		std::cout << aux->dato << std::endl;
		aux = aux->anterior;
	}
}

int Pila::Vaciar()
{
	Nodo* aux = tope;

	while (tope != NULL)
	{
		aux = tope;
		tope = tope->anterior;
		delete (aux);
	}

	int tmp = tamano;
	tamano = 0;
	return tmp;
}