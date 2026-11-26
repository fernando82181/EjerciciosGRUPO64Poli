#include <iostream>
using namespace std;

int main()
{
    int numero = 0, opcion = -1;
    int indice = 2;
    bool isPrimo = true;

    do
    {
        cout << "Ingrese un numero mayor que cero ";
        cin >> numero;
    } while (numero <= 0);
    do
    {
        if (numero % indice == 0)
            isPrimo = false;
        indice++;
    } while (indice < numero && isPrimo);

    if (numero < 4)
        isPrimo = true;

    if (isPrimo)
        cout << "\n El numero\t" << numero << "\tes primo ";
    else
        cout << "\n El numero\t" << numero << "\tno es primo ";
    cout << "\nIngrese CERO para finalizar\n";
    cin >> opcion;

    return 0;
}