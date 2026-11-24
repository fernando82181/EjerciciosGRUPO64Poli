#include <iostream>

using namespace std;

int main()
{

    // DECLARAR UN NUEVO ARREGLO
    int notasEstudiantes[5];

    int listaNumeros[] = {111, 315, 472, 512, 346, 17};

    // RECORRER EL ARREGLO
    for (int i = 0; i < 6; i++) 
    {
        cout << "Lista de numero para la posicion  " << i << " -> " << listaNumeros[i] << endl;
    }

    // ACTUALIZAR (CAMBIAR ELEMENTO)
    listaNumeros[2] = 234;

    // INSERTAR ELEMENTOS DENTRO DE UN ARREGLO
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese nota del estudiante # " << i + 1;
        cin >> notasEstudiantes[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << notasEstudiantes[i] << endl;
    }

    // ELIMINAR UN ELEMENTO

    listaNumeros[5] = 0;
    for (int i = 0; i < 6; i++)
    {
        cout << "Lista de numero para la posicion  " << i << " -> " << listaNumeros[i] << endl;
    }

    return 0;
}