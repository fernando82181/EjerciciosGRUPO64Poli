#include <iostream>
using namespace std;

void actualizarElementoArreglo(int arreglo[], int nuevoValor, int indice)
{
    arreglo[indice] = nuevoValor;
}

void imprimirArreglo(int arreglo[], int tamano)
{

    for (int i = 0; i < tamano; i++)
    {
        cout << "Valor del arreglo en la posición i = " << i << " es: " << arreglo[i] << endl;
    }
}

void eliminarElementoArreglo(int arreglo[], int indice, int tamano)
{

    for (int i = indice; i < tamano - 1; i++)
    {
        arreglo[i] = arreglo[i + 1];
    }

    arreglo[tamano - 1] = 0;
}

int busquedaSecuencial(int arreglo[], int tamano, int valorBuscar)
{
    int indice = 0;
    bool encontrado = false;

    do
    {
        if (arreglo[indice] == valorBuscar)
        {
            return indice;
        }
        indice++;
    } while (indice < tamano && !encontrado);
    if (!encontrado)
    {
        return -1;
    }
}

void ordernarArreglo(int arreglo[], int tamano)
{
    int auxiliar = 0;
    for (int i = 0; i < tamano - 1; i++)
    {
        for (int indice = 0; indice < tamano - 1; indice++)
        {
            if (arreglo[indice] < arreglo[indice + 1])
            {
                auxiliar = arreglo[indice];
                arreglo[indice] = arreglo[indice + 1];
                arreglo[indice + 1] = auxiliar;
            }
        }
    }
}

int main()
{
    int arreglo[100];
    int tamanoarreglo = size(arreglo); // Obtenemos el tamaño del arreglo

    // Inicializar arreglo asignando un valor de cero a cada posición
    for (int i = 0; i < tamanoarreglo; i++)
    {
        arreglo[i] = 1 + i;
    }

    // Recorrer arreglo
    imprimirArreglo(arreglo, tamanoarreglo);

    // Actualizar valor en arreglo.
    // Ejemplo, actulizar elemento en la posición 49 del arreglo por el valor de 7
    actualizarElementoArreglo(arreglo, 7, 49);
    imprimirArreglo(arreglo, tamanoarreglo);

    // Eliminar elemento (Se debe validar primero que el elemento se encuentre en el arreglo)
    eliminarElementoArreglo(arreglo, 5, tamanoarreglo);
    imprimirArreglo(arreglo, tamanoarreglo);
    // Buscar elemento dentro del arreglo
    busquedaSecuencial(arreglo, tamanoarreglo, 5);
    ordernarArreglo(arreglo, tamanoarreglo);
    imprimirArreglo(arreglo, tamanoarreglo);

    return 0;
}