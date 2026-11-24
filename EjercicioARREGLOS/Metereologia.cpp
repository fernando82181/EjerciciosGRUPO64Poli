#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void imprimirArregloPorMes(double arreglo[], int sizeArreglo)
{
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int indiceMes = 0;
    for (int i = 0; i < sizeArreglo; i++)
    {
        if (i % 30 == 0)
        {

            cout << endl
                 << meses[indiceMes] << endl;
            indiceMes++;
        }

        cout << fixed << setprecision(2) << arreglo[i] << "  ";
    }
};
void obtenerMayor(double arreglo[], int sizeArreglo)
{
    double mayor = arreglo[0];
    int posicionMayor = 0;
    for (int i = 1; i < sizeArreglo; i++)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
            posicionMayor = i;
        }
    }
    cout << "\nLa mayor temperatura registrada fue: " << fixed << setprecision(2) << mayor << endl;
    cout << "En el dia del año: " << posicionMayor + 1 << endl;
}
void obtenerMenor(double arreglo[], int sizeArreglo)
{
    double menor = arreglo[0];
    int posicionMenor = 0;
    for (int i = 1; i < sizeArreglo; i++)
    {
        if (arreglo[i] < menor)
        {
            menor = arreglo[i];
            posicionMenor = i;
        }
    }
    cout << "\nLa mayor temperatura registrada fue: " << fixed << setprecision(2) << menor << endl;
    cout << "En el dia del año: " << posicionMenor + 1 << endl;
}
void mayores25(double arreglo[], int sizeArreglo)
{

    int mayores = 0;
    int menores = 0;
    int iguales = 0;

    int tamano = sizeof(arreglo);

    for (int i = 0; i < tamano; i++)
    {
        if (arreglo[i] == 25.00)
            iguales++;
        else if (arreglo[i] < 25.00)
            menores++;
        else
            mayores++;
    }

    cout << "Hay " << iguales << " numeros iguales a 25.00 \n";
    cout << "Hay " << mayores << " numeros mayores a 25.00 \n";
    cout << "Hay " << menores << " numeros menores a 25.00 \n";
}
double promedioTemperatura(double arreglo[], int sizeArreglo)
{

    double promedio = 0;

    for (int i = 0; i < sizeArreglo; i++)
    {
        promedio = promedio + arreglo[i];
    }
    promedio = promedio / sizeArreglo;
    return promedio;
}
void ordernarArreglo(double arreglo[], int sizeArreglo)
{
    double auxiliar = 0;
    for (int i = 0; i < sizeArreglo - 1; i++)
    {
        for (int j = 0; j < sizeArreglo - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                auxiliar = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = auxiliar;
            }
        }
    }
}
int main()
{

    int opcion = 0;
    double temperaturas[360];

    do
    {
        cout << "\t\n INGRESE UNA OPCION"
             << "\n1. Inicializar arreglo\t"
             << "\n2. Mostrar temperatura por mes"
             << "\n3. Mayor temperatura registrada"
             << "\n4. Menor temperatura registrada"
             << "\n5. Conocer cuantos registros menores, iguales y mayores a 25"
             << "\n6. Promedio de temperaturas"
             << "\n7. Ordenar temperaturas";
        cin >> opcion;

        switch (opcion)
        {
        case 1:

            srand(time(NULL));
            for (int i = 0; i < size(temperaturas); i++)
                temperaturas[i] = -10 + (double)rand() / RAND_MAX * 60;

            break;
        case 2:
            imprimirArregloPorMes(temperaturas, size(temperaturas));

            break;
        case 3:
            obtenerMayor(temperaturas, size(temperaturas));

            break;
        case 4:
            obtenerMenor(temperaturas, size(temperaturas));

            break;
        case 5:
            mayores25(temperaturas, size(temperaturas));

            break;
        case 6:
            cout << promedioTemperatura(temperaturas, size(temperaturas));

            break;
        case 7:
            ordernarArreglo(temperaturas, size(temperaturas));

            break;
        default:
            break;
        }

    } while (opcion != 8);

    return 0;
}
