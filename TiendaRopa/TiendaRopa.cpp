#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // ENTRADAS
    string menuPrincipal = "1.Registrar Venta \n2. Consultar el total de ventas \n3. Consultar la cantidad de prendas vendidas \n4. Consultar el promedio de venta \n5. Salir del programa \n";
    int
        codigo = 0,
        opcionMenuPpl = 0,
        unidadesComprar = 0,
        cantidadVentas = 0,
        cantidadPrendasVendidas = 0;
    string productosOfertados = "1.Camisa $45000 \n2.Pantalon $85.000 \n3.Chaqueta $150.000 \n4.Zapatos $120.000\n";
    double
        precioUnitario = 0,
        subtotal = 0,
        descuento = 0,
        promedioVentas = 0,
        totalVentas = 0,
        // PRECIO DE CADA UNO DE LOS PRODUCTOS
        precioCamisa = 45000,
        precioPantalon = 85000,
        precioChaqueta = 150000,
        precioZapatos = 120000;
    string descripcionProducto = ""; // OPCIONAL

    // CONTADORES
    int cantidadCamisas = 0,
        cantidadPantalones = 0,
        cantidadChaqueta = 0,
        cantidadZapatos = 0,
        cantidadGlobalCamisas = 0,
        cantidadGlobalPantalones = 0,
        cantidadGlobalChaqueta = 0,
        cantidadGlobalZapatos = 0;

    // BANDERA
    bool agregarProductos = false;
    // PROCESO

    do
    {

        cout << menuPrincipal;
        cin >> opcionMenuPpl;

        switch (opcionMenuPpl)
        {
        case 1: // SELECCION DE PRODUCTOS OFERTADOS
            // VALIDAR QUE SELECCIONE UN PRODUCTO VALIDO
            cantidadVentas ++;
            do
            {
                do
                {
                    cout << "\nSeleccione una prenda a comprar";
                    cout << productosOfertados;
                    cin >> codigo;
                } while (codigo < 1 || codigo > 5);

                // VALIDAR QUE LAS UNIDADES A COMPRAR SEAN MAYORES A CERO
                while (unidadesComprar <= 0 || agregarProductos)
                {

                    cout << "\n Ingrese la cantidad (mayor que cero) de prendas que va a comprar\n";
                    cin >> unidadesComprar;
                    agregarProductos = false;
                }

                switch (codigo)
                {
                case 1:
                    precioUnitario = precioCamisa;
                    cantidadCamisas = cantidadCamisas + unidadesComprar;
                    cantidadGlobalCamisas = cantidadGlobalCamisas + cantidadCamisas;
                    break;
                case 2:
                    // COMPRAR PANTALON
                    precioUnitario = precioPantalon;
                    cantidadPantalones = cantidadPantalones + unidadesComprar;
                    cantidadGlobalPantalones = cantidadGlobalPantalones + cantidadPantalones;
                    break;
                case 3:
                    // COMPRAR Chaqueta
                    precioUnitario = precioChaqueta;
                    cantidadChaqueta = cantidadChaqueta + unidadesComprar;
                    cantidadGlobalChaqueta = cantidadGlobalChaqueta + cantidadChaqueta;
                    break;
                case 4:
                    // COMPRAR Zapatos
                    precioUnitario = precioZapatos;
                    cantidadZapatos = cantidadZapatos + unidadesComprar;
                    cantidadGlobalZapatos = cantidadGlobalZapatos + cantidadZapatos;
                    break;
                default:
                    break;
                }

                subtotal = subtotal + precioUnitario * unidadesComprar;

                do
                {
                    cout << "Desea agregar más producto \n1. SI \n0. NO\t";
                    cin >> agregarProductos;
                } while (agregarProductos != 1 && agregarProductos != 0);

            } while (agregarProductos == true);
            totalVentas = totalVentas + subtotal;
            subtotal = 0;
            cantidadCamisas = 0;
            cantidadChaqueta = 0;
            cantidadPantalones = 0;
            cantidadZapatos = 0;
            precioUnitario = 0;
            break;
        case 2:
            // Consultar el total de las ventas
            if (subtotal <= 0)
                cout << "Todavía no hay venta registrada\n";
            else
                cout << "Lleva un acumulado en venta de $" << fixed << setprecision(2) << totalVentas;

            break;
        case 3:
            // Consultar la cantidad de prendas vendidas
            cout << "Se han vendido un total de Camisas " << cantidadGlobalCamisas << "\n";
            cout << "Se han vendido un total de Pantalones " << cantidadGlobalPantalones << "\n";
            cout << "Se han vendido un total de Chaquetas" << cantidadGlobalChaqueta << "\n";
            cout << "Se han vendido un total de Zapatos" << cantidadGlobalZapatos << "\n";
            break;
        case 4:
            // Consultar el promedio de venta
            cout << "El promedio de ventas es igual a: " << totalVentas / cantidadVentas;
            break;
        case 5:
            // Salir del programa
            cout << "Hasta luego";
            break;

        default:
            break;
        }

    } while (opcionMenuPpl != 5);

    // SALIDA

    // CantidadPrendasVendidas
    // cantidadVentas
    // promedioVentas;

    return 0;
}