#include <iostream>
using namespace std;

int const filas = 10;
int const columnas = 10;

void inicializarMatriz(int matriz[filas][columnas])
{
    int contador = 1;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }
}

void imprimirMatriz(int matriz[filas][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << " " << matriz[i][j] << " \t";
        }
        cout << endl;
    }
}

void busquedaSecuencial(int matriz[filas][columnas], int numeroBuscar)
{
    int indiceFila, indiceColumnas;
    bool encontrado = false;
    for (indiceFila = 0; indiceFila < filas; indiceFila++)
    {
        for (indiceColumnas = 0; indiceColumnas < columnas; indiceColumnas++)
        {
            if (matriz[indiceFila][indiceColumnas] == numeroBuscar)
            {
                cout << "\n Numero encontrado en la fila: " << indiceFila << " y columna: " << indiceColumnas << endl;
                encontrado = true;
            }
        }
        if (!encontrado)
        {
            cout << "\nEl numero a buscar " << numeroBuscar << " no fue encontrado\n";
        }
    }
}

void ordenarVector(int vector[], int sizeArreglo)
{
    int auxiliar = 0;
    for (int i = 0; i < sizeArreglo - 1; i++)
    {
        for (int j = 0; j < sizeArreglo - 1; j++)
        {
            if (vector[i] > vector[j + 1])
            {
                auxiliar = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = auxiliar;
            }
        }
    }
}

void ordernarMatriz(int matriz[filas][columnas])
{
    int sizeVector = filas * columnas;
    int arreglo[sizeVector];
    int indiceArreglo = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            arreglo[indiceArreglo] = matriz[i][j];
            indiceArreglo++;
        }
    }

    int auxiliar = 0;
    for (int i = 0; i < sizeVector - 1; i++)
    {
        for (int j = 0; j < sizeVector - 1; j++)
        {
            if (arreglo[j] < arreglo[j + 1])
            {
                auxiliar = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = auxiliar;
            }
        }
    }
    indiceArreglo = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = arreglo[indiceArreglo];
            indiceArreglo++;
        }
    }
}

int main()
{
    int matriz[filas][columnas];
    inicializarMatriz(matriz);
    imprimirMatriz(matriz);
    busquedaSecuencial(matriz, 5);
    ordernarMatriz(matriz);
    imprimirMatriz(matriz);

    return 0;
}