#include <iostream>
using namespace std;

double sumar(double a, double b);

int main()
{

    // Variables generales
    int opcion;
    int codigo;
    int cantidad;

    // Variables para los productos
    double precio = 0;
    double subtotal;
    double descuento;
    double totalPagar;

    // Contadores y acumuladores
    double acumuladoVentas = 0;
    int totalPrendas = 0;
    int cantidadVentas = 0;
    double resultado = 0;

    do
    {

        cout << "\n========== TIENDA DE ROPA ==========" << endl;
        cout << "1. Registrar una venta" << endl;
        cout << "2. Consultar el total de ventas" << endl;
        cout << "3. Consultar la cantidad de prendas vendidas" << endl;
        cout << "4. Consultar el promedio de venta" << endl;
        cout << "5. Salir del programa" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {

        case 1:
            //REGISTRAR VENTA
            resultado = sumar(5.7, 5.8);
            cout << "\n========== PRODUCTOS ==========" << endl;
            cout << "1. Camisa    - $45.000" << endl;
            cout << "2. Pantalon  - $85.000" << endl;
            cout << "3. Chaqueta  - $150.000" << endl;
            cout << "4. Zapatos   - $120.000" << endl;

            // Validar el codigo del producto
            cout << "\nIngrese el codigo del producto: ";
            cin >> codigo;

            while (codigo < 1 || codigo > 4)
            {
                cout << "Codigo inexistente. Intente nuevamente: ";
                cin >> codigo;
            }

            // Asignar el precio segun el producto
            if (codigo == 1)
            {
                precio = 45000;
            }
            else if (codigo == 2)
            {
                precio = 85000;
            }
            else if (codigo == 3)
            {
                precio = 150000;
            }
            else
            {
                precio = 120000;
            }
            //VALIDAR CANTIDAD MAYOR A CERO
            do
            {
                cout << "La cantidad debe ser mayor que cero. "
                     << "Ingrese nuevamente: ";
                cin >> cantidad;
            } while (cantidad <= 0);

            subtotal = precio * cantidad;

            // Calcular descuento
            if (subtotal < 100000)
            {
                descuento = 0;
            }
            else if (subtotal < 200000)
            {
                descuento = subtotal * 0.05;
            }
            else if (subtotal < 350000)
            {
                descuento = subtotal * 0.10;
            }
            else
            {
                descuento = subtotal * 0.15;
            }

            // Calcular total a pagar
            totalPagar = subtotal - descuento;

            // Mostrar informacion de la venta
            cout << "\n========== DETALLE DE VENTA ==========" << endl;

            if (codigo == 1)
            {
                cout << "Producto: Camisa" << endl;
            }
            else if (codigo == 2)
            {
                cout << "Producto: Pantalon" << endl;
            }
            else if (codigo == 3)
            {
                cout << "Producto: Chaqueta" << endl;
            }
            else
            {
                cout << "Producto: Zapatos" << endl;
            }

            cout << "Cantidad comprada: " << cantidad << endl;
            cout << "Precio unitario: $" << precio << endl;
            cout << "Subtotal: $" << subtotal << endl;
            cout << "Descuento aplicado: $" << descuento << endl;
            cout << "Total a pagar: $" << totalPagar << endl;

            // Actualizar acumuladores y contadores
            acumuladoVentas = acumuladoVentas + totalPagar;
            totalPrendas = totalPrendas + cantidad;
            cantidadVentas = cantidadVentas + 1;

            cout << "\nVenta registrada exitosamente." << endl;

            break;

        case 2:

            cout << "\n========== TOTAL DE VENTAS ==========" << endl;

            if (cantidadVentas == 0)
            {
                cout << "No hay ventas disponibles." << endl;
            }
            else
            {
                cout << "Total acumulado de ventas: $"
                     << acumuladoVentas << endl;
            }

            break;

        case 3:

            cout << "\n========== PRENDAS VENDIDAS ==========" << endl;
            cout << "Cantidad total de prendas vendidas: "
                 << totalPrendas << endl;

            break;

        case 4:

            cout << "\n========== PROMEDIO DE VENTAS ==========" << endl;

            if (cantidadVentas == 0)
            {
                cout << "No es posible calcular el promedio. "
                     << "No hay ventas registradas." << endl;
            }
            else
            {
                cout << "Promedio de venta: $"
                     << acumuladoVentas / cantidadVentas << endl;
            }

            break;

        case 5:

            cout << "\nGracias por utilizar el sistema "
                 << "de la tienda de ropa." << endl;

            cout << "Hasta pronto." << endl;

            break;

        default:

            cout << "\nOpcion incorrecta. "
                 << "Seleccione una opcion entre 1 y 5." << endl;

            break;
        }

    } while (opcion != 5);

    return 0;
}


double sumar(double a, double b)
{
    return a + b;
}