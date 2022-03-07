
#include <iostream>
#include "Pila.h"

using namespace std;

int main()
{
    Pila* pila = new Pila();
    int opc = 0;

    while (opc != 6)
    {
        system("cls");
        cout << "1. Insertar" << endl;
        cout << "2. Eliminar" << endl;
        cout << "3. Mostrar" << endl;
        cout << "4. Mostrar tope" << endl;
        cout << "5. Vaciar" << endl;
        cout << "6. Salir" << endl;
        
        cout << endl;
        cout << "Elija una opcion: ";
        cin >> opc;

        system("cls");

        switch (opc)
        {
        case 1:
        {
            int dato;
            cout << "Ingrese el dato: ";
            cin >> dato;

            pila->Insertar(dato);

            break;
        }
        case 2:
        {
            if (pila->EstaVacia())
            {
                cout << "La pila esta vacia" << endl;
            }
            else
            {
                int eliminado = pila->Eliminar();
                cout << "Elemento eliminado: " << eliminado << endl;
            }
            break;
        }
        case 3:
        {
            if (pila->EstaVacia())
            {
                cout << "La pila esta vacia" << endl;
            }
            else
            {
                cout << "Elementos en la pila:" << endl;
                pila->Mostrar();
            }

            break;
        }
        case 4:
        {
            if (pila->EstaVacia())
            {
                cout << "La pila esta vacia" << endl;
            }
            else
            {
                int tope = pila->ObtenerTope();
                cout << "El tope es: " << tope << endl;
            }

            break;
        }
        case 5:
        {
            if (pila->EstaVacia())
            {
                cout << "La pila esta vacia" << endl;
            }
            else
            {
                int eliminados = pila->Vaciar();
                cout << "Elementos eliminados: " << eliminados << endl;
            }

            break;
        }
        }

        cin.get();
        cin.get();
    }
}
