#include <iostream>
using namespace std;

// Variables globales
int contadorBombillas = 0;
int bombillasExcelente = 0;
int bombillasAceptable = 0;
int bombillaDefectuosa = 0;
double promedioPotencia = 0;

string calificarBombilla(double potencia)
{

    if (potencia >= 9 && potencia <= 11)
    {
        bombillasExcelente ++ ;
        return "\n La bombilla es EXCELENTE ";
    }
    else if ((potencia > 11 && potencia <= 13) || (potencia > 7 && potencia < 9))
    {
        bombillasAceptable ++ ;
        return "\n La bombilla es ACEPTABLE ";
    }
    else
    {
        bombillaDefectuosa ++ ;
        return "\n La bombilla es DEFECTUOSA ";
    }
}

int capturarOpcionMenu()
{
    int opcion = 0;

    do
    {
        cout << "\n Ingrese una opcion \n1. Registrar e inspeccionar una bombilla.  \n2. Consultar el resumen de la jornada. \n3. Finalizar el programa. ";
        cin >> opcion;
    } while (opcion > 3 || opcion < 1);

    return opcion;
}

double solicitarPotencia()
{
    double potencia = 0;

    do
    {
        cout << "\n Ingrese la potencia de la bombilla ";
        cin >> potencia;

    } while (potencia < 0);

    promedioPotencia = promedioPotencia + potencia;

    return potencia;
}

void mostrarResumenJornada()
{
    int totalBombillas = bombillaDefectuosa + bombillasAceptable + bombillasExcelente;
    double porcentaje = 0;
    cout << "\nCantidad de bombillas EXCELENTES " << bombillasExcelente;
    cout << "\nCantidad de bombillas ACEPTABLES " << bombillasAceptable;
    cout << "\nCantidad de bombillas DEFECTUOSAS " << bombillaDefectuosa;

    cout << "\nPromedio de potencia " << promedioPotencia / totalBombillas;
    porcentaje = ((double) bombillaDefectuosa / totalBombillas ) * 100;

    cout << "\n Porcentaje de bombillas defectuosas " << porcentaje;
}

int main()
{

    int opcion = 0;
    double potencia = 0;
    do
    {
        opcion = capturarOpcionMenu();
        switch (opcion)
        {
        case 1:
            // Registrar bombilla
            potencia = solicitarPotencia();
            cout << calificarBombilla( potencia ) << endl;

            break;
        case 2:
            // Consultar resumen de la jornada
            /*
            mostrar la cantidad total de bombillas inspeccionadas, la cantidad por clasificación, el
            promedio de potencia y el porcentaje de bombillas defectuosas respecto al total.
            */
            mostrarResumenJornada();
            break;
        case 3:
            // Finalizar jornada
            break;
        default:
            break;
        }

    } while (opcion != 3);

    return 0;
}