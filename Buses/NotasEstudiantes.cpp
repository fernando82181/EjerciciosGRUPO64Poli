#include <iostream>
using namespace std;
// VARIABLES GLOBALES
int contadorInsufiente = 0;
int contadorAceptable = 0;
int contadorBuena = 0;
int contadorExcelente = 0;

int obtenerCantidadEstudiantes()
{
    int cantidadEstudiante = 0;
    do
    {
        cout << "\nIngrese una cantidad de estudiantes mayor a cero ";
        cin >> cantidadEstudiante;

    } while (cantidadEstudiante <= 0);

    return cantidadEstudiante;
}

double solicitarCalificacion()
{
    double calificacion = 0.0;

    // SOLICITAR AL USUARIO LA CALIFICACION

    do
    {
        cout << "\nIngrese la calificacion del estudiante ";
        cin >> calificacion;
    } while (calificacion < 0.0 || calificacion > 5.0);

    return calificacion;
}

string definirDesempeno(double calificacion)
{

    if (calificacion <= 2.9)
        return "Insuficiente";
    else if (calificacion <= 3.9)
        return "Aceptable";
    else if (calificacion <= 4.5)
        return "Bueno";
    else
        return "Excelente";
}

int desempeno(double calificacion)
{

    if (calificacion <= 2.9)
        return 1;
    else if (calificacion <= 3.9)
        return 2;
    else if (calificacion <= 4.5)
        return 3;
    else
        return 4;
}

void contarSegunDesempeno(double calificacion)
{

    int desempen = desempeno(calificacion);

    switch (desempen)
    {
    case 1:
        contadorInsufiente++;
        break;
    case 2:
        contadorAceptable++;
        break;
    case 3:
        contadorBuena++;
        break;
    case 4:
        contadorExcelente++;
        break;
    default:
        break;
    }
}

int main()
{

    int cantidadEstudiantes = obtenerCantidadEstudiantes();
    string nombreEstudiante = "";
    double promedio = 0.0;
    int contadorAprobados = 0;
    double porcentajeAprobados = 0.0;
    double notaMayor = 0.0, notaMenor = 5.0;

    for (int i = 0; i < cantidadEstudiantes; i++)
    {
        cout << "\nIngrese el nombre del estudiante ";
        cin >> nombreEstudiante;

        double calificacion = solicitarCalificacion();

        if (calificacion >= 3) contadorAprobados = contadorAprobados + 1;

        if (calificacion > notaMayor) notaMayor = calificacion;

        if (calificacion < notaMenor) notaMenor = calificacion;

        promedio = promedio + calificacion;
        cout << "\nEl desempeño del estudiante " << nombreEstudiante << " " << definirDesempeno(calificacion);
        contarSegunDesempeno(calificacion);
    }

    promedio = promedio / cantidadEstudiantes;
    cout << promedio;
    porcentajeAprobados = ((double)contadorAprobados / cantidadEstudiantes) * 100;

    // RESULTADOS
    cout << "\n Cantidad de personas con calificación excelente\t" << contadorExcelente;
    cout << "\n Cantidad de personas con calificación aceptable\t" << contadorAceptable;
    cout << "\n Cantidad de personas con calificación buena\t\t" << contadorBuena;
    cout << "\n Cantidad de personas con calificación insuficiente\t" << contadorInsufiente;
    cout << "\nPorcentaje de personas aprobadas " << porcentajeAprobados << "%";
    cout << "\nLa nota mayor es = " << notaMayor;
    cout << "\nLa nota menor es = " << notaMenor;
    return 0;
}