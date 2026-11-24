#include <iostream>
using namespace std;

int cantidadInsuficiente = 0,
    cantidadAceptable = 0,
    cantidadBueno = 0,
    cantidadExcelete = 0;

// Solicitar y Validar cantidad de estudiantes mayor a cero
int solicitarCantidadEstudiantes()
{
    int cantidad = 0;

    do
    {
        cout << "\nIngrese la cantidad de estudiantes (debe ser mayor a cero) ";
        cin >> cantidad;
    } while (cantidad <= 0);

    return cantidad;
}
// Solicitar nombre del estudiante

string solicitarNombreEstudiante()
{
    string nombre = "";
    do
    {
        cout << "\nIngrese el nombre del estudiante: ";
        cin >> nombre;
    } while (nombre.length() < 3);
    return nombre;
}
// Solicitar y validar calificación de cada estudiante

double solicitarNota()
{
    double nota = -1.00;
    cout << "\nRango de nota permitido 0.00 - 5.00\n";
    do
    {
        cout << "\nIngrese la nota del estudiante ";
        cin >> nota;
    } while (nota < 0.00 || nota > 5.00);

    return nota;
}
// Calificar desempeño del estudiante
string desempenoEstudiante(double nota)
{
    if (nota <= 2.9)
        return "Insuficiente";
    else if (nota <= 3.9)
        return "Aceptable";
    else if (nota <= 4.5)
        return "Bueno";
    else
        return "Excelente";
}

// Calcular promedio general de todo el grupo
void calcularPromedio(double acumuladoNotas, int cantidadEstudiantes)
{
    double promedio = acumuladoNotas / cantidadEstudiantes;
    cout << "\nEl promedio del grupo = " << promedio << endl;
}
// Calcular porcentaje estudiantes aprobados
void calcularPorcentajeAprobados(int cantidadEstudiantes)
{

    double porcentajeAprobados = (double)(cantidadAceptable + cantidadBueno + cantidadExcelete);
    porcentajeAprobados = (porcentajeAprobados / cantidadEstudiantes) * 100.00;

    if (porcentajeAprobados == 0 & cantidadInsuficiente == 0)
        cout << "\nNo hay notas registradas\n";
    else
        cout << "\nPorcentaje aprobados: " << porcentajeAprobados << " %" << endl;
}
// Calcular porcentaje estudiantes reprobados
void calcularPorcentajeReprobados(int cantidadEstudiantes)
{

    double porcentajeAprobados = (double)cantidadInsuficiente;
    porcentajeAprobados = (porcentajeAprobados / cantidadEstudiantes) * 100.00;

    if (porcentajeAprobados == 0 & cantidadInsuficiente == 0)
        cout << "\nNo hay notas registradas\n";
    else
        cout << "\nPorcentaje aprobados: " << porcentajeAprobados << " %" << endl;
}

void contarDesempeno(string desempeno)
{
    if (desempeno.compare("Insuficiente") == 0)
        cantidadInsuficiente++;
    else if (desempeno.compare("Aceptable") == 0)
        cantidadAceptable++;
    else if (desempeno.compare("Bueno") == 0)
        cantidadBueno++;
    else
        cantidadExcelete++;
}

int main()
{
    // Declaración de variables
    int cantidadEstudiantes = solicitarCantidadEstudiantes(),
        opcion = 0;
    string nombreEstudiante = "", desempeno = "";
    double notaDefinitiva = 0.0; // 0.00 - 5.00
    double promedioGeneral = 0,
           porcentajeAprobado = 0.00,
           notaMayor = 0.00,
           notaMenor = 5.00;
    bool cantidadEstIngresada = false;

    for (int i = 0; i < cantidadEstudiantes; i++)
    {
        nombreEstudiante = solicitarNombreEstudiante();
        notaDefinitiva = solicitarNota();
        if (notaDefinitiva > notaMayor)
            notaMayor = notaDefinitiva;
        if (notaDefinitiva < notaMenor)
            notaMenor = notaDefinitiva;

        desempeno = desempenoEstudiante(notaDefinitiva);
        cout << "\nEl desempeno del estudiante: " << nombreEstudiante << " es " << desempeno << endl;
        contarDesempeno(desempeno);
        promedioGeneral = promedioGeneral + notaDefinitiva;
    }
    cout << "\nCantidad de estudiantes evaluados: " << cantidadEstudiantes << endl;
    cout << "\nCantidad de estudiantes con calificación insuficiente " << cantidadInsuficiente << endl;
    cout << "\nCantidad de estudiantes con calificación aceptable " << cantidadAceptable << endl;
    cout << "\nCantidad de estudiantes con calificación buena " << cantidadBueno << endl;
    cout << "\nCantidad de estudiantes con calificación excelente " << cantidadExcelete << endl;
    calcularPromedio(promedioGeneral, cantidadEstudiantes);
    calcularPorcentajeAprobados(cantidadEstudiantes);
    calcularPorcentajeAprobados(cantidadEstudiantes);
    calcularPorcentajeReprobados(cantidadEstudiantes);
    cout << "\nCalificacion mas ALTA = " << notaMayor << endl;
    cout << "\nCalificacion mas BAJA = " << notaMenor << endl;
    return 0;
}
