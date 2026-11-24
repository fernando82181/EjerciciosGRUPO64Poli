#include <iostream>
using namespace std;

void imprimirArreglo(double Arreglo[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << Arreglo[i] << endl;
    }
}

int main()
{

    // Declarar arreglo
    double temperaturas[10];
    int tamanoArregloTemp = size(temperaturas);
    cout << tamanoArregloTemp;

    // Inicializar el arreglo
    for (int i = 0; i < tamanoArregloTemp; i++)
    {
        temperaturas[i] = 51;
    }

    imprimirArreglo(temperaturas, tamanoArregloTemp);

    for (int i = 0; i < tamanoArregloTemp; i++)
    {

        cout << "ingrese la temperatura";
        cin >> temperaturas[i];
    }

    imprimirArreglo(temperaturas, tamanoArregloTemp);

    return 0;
}