#include <iostream>
using namespace std;

int main()
{

    double arregloUni[10];
    double arreglo[] = {1.00, 3.14, 2.71};
    double numero = 0;

    //Inicializar el arreglo
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un valor para la posicion " << i << " ";
        cin >> numero;
        arregloUni[i] = numero;
    }
    //Lectura

    for (int i = 0; i < 10 ; i++)
    {
        cout << "Valor posicion " << i << "  " << arregloUni[i] << endl;
    }
    

    /*















    double listaNotas[10]; // Declarando un arreglo de 10 posiciones
    int tamanoArreglo = size(listaNotas);
    cout << "Tamano del arreglo = " << tamanoArreglo;

    // Inicializamos el arreglo con el valor de 10
    for (int i = 0; i < tamanoArreglo; i++)
    {
            listaNotas[i] = 3;
        }

        // Imprimir el arreglos
        for (int i = 0; i < tamanoArreglo; i++)
        {
            cout << "Arreglo en la posicion " << i << "  " << listaNotas[i] << endl;
        }

        double listaNumeros[10];
        // Inicializar el arreglo con valores
        double numero = 0;
        for (int i = 0; i < size(listaNumeros); i++)
        {
            cout << "Ingrese el numero en la posicion # " << i << endl;
            cin >> numero;
            listaNumeros[i] = numero;
        }

        double mayor = listaNumeros[0];
        for (int i = 1; i < size(listaNumeros); i++)
        {
            if (listaNumeros[i] > mayor)
            {
                mayor = listaNumeros[i];
            }
        }

        cout << "\nEl numero mayor = " << mayor;
        double menor = listaNumeros[0];

        for (int i = 1; i < size(listaNumeros); i++)
        {
            if (listaNumeros[i] < menor)
            {
                menor = listaNumeros[i];
            }
        }
        cout << "\nEl numero menor = " << menor;

        // Promedio del arreglo
        double acumulador = 0;
        for (int i = 0; i < size(listaNumeros); i++)
        {
            acumulador = acumulador + listaNumeros[i];
        }
        cout << "El promedio del arreglo lista numeros = " << (double)acumulador / size(listaNumeros);
        */

    return 0;
}