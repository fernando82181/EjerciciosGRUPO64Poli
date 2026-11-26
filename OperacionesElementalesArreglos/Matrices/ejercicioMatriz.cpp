#include <iostream>
using namespace std;

int main()
{
    int matriz[10][10];
    int filas = size(matriz);
    int columnas = size(matriz[0]);
    int posicionFila = 0, posicionColumna = 0;
    // Inicializar la matriz con valores en cero
    for (int indiceFila = 0; indiceFila < filas; indiceFila++)
    {
        for (int indiceColumna = 0; indiceColumna < columnas; indiceColumna++)
        {
            matriz[indiceFila][indiceColumna] = 7;
        }
    }

    // Imprimir la matriz

    for (int indiceFila = 0; indiceFila < filas; indiceFila++)
    {
        for (int indiceColumna = 0; indiceColumna < columnas; indiceColumna++)
        {
            cout << matriz[indiceFila][indiceColumna] << " ";
        }
        cout << endl;
    }

    // ACTUALIZAR ELEMENTO
    cout << "Ingrese la posicion en la fila del elemento que desea actualizar ";
    cin >> posicionFila;
    cout << "Ingrese la posicion en la columna del elemento que desea actualizar ";
    cin >> posicionColumna;

    cout << "Ingrese el valor que desea actualizar: ";
    cin >> matriz[posicionFila][posicionColumna];

    for (int indiceFila = 0; indiceFila < filas; indiceFila++)
    {
        for (int indiceColumna = 0; indiceColumna < columnas; indiceColumna++)
        {
            cout << matriz[indiceFila][indiceColumna] << " ";
        }
        cout << endl;
    }

    cout << "Ingrese la posicion en la fila del elemento que desea eliminar ";
    cin >> posicionFila;
    cout << "Ingrese la posicion en la columna del elemento que desea eliminar ";
    cin >> posicionColumna;
    // Eliminar un elemeno
    for (int i = posicionColumna; i < columnas - 1; i++)
    {
        matriz[posicionFila][i] = matriz[posicionFila][i + 1];
    }
    matriz[posicionFila][columnas - 1] = 0;

    for (int indiceFila = 0; indiceFila < filas; indiceFila++)
    {
        for (int indiceColumna = 0; indiceColumna < columnas; indiceColumna++)
        {
            cout << matriz[indiceFila][indiceColumna] << " ";
        }
        cout << endl;
    }


    
    return 0;
}