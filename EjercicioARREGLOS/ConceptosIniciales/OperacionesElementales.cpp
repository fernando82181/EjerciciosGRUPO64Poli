#include <iostream>
using namespace std;

void ordenamientoArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano - 1; i++)
    {
        for (int indice = 0; indice < tamano - 1; indice++)
        {
            int auxiliar = 0;
            if (arreglo[indice] < arreglo[indice + 1])
            {
                auxiliar = arreglo[indice];
                arreglo[indice] = arreglo[indice + 1];
                arreglo[indice + 1] = auxiliar;
                auxiliar = 0;
            }
        }
    }
}

void imprimirArreglo(int arreglo[], int tamano){

    for (int i = 0; i < tamano; i++)
    {
        cout << arreglo[i] << " ";
    }

}



int main()
{
    int listaNumeros[] = {-1, 2, 5, -10, -7, 21, -1};

    imprimirArreglo(listaNumeros, size(listaNumeros));

    // Ordenamiento burbuja de un arreglo
    ordenamientoArreglo(listaNumeros, size(listaNumeros));
    cout << endl;
    imprimirArreglo(listaNumeros, size(listaNumeros));

    return 0;
}