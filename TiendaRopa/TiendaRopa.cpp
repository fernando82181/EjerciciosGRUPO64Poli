#include <iostream>
using namespace std;

int main()
{

    // ENTRADAS
    string menuPrincipal = "\n1.Registrar Venta \n2. Consultar el total de ventas \n3. Consultar la cantidad de prendas vendidas \n4. Consultar el promedio de venta \n5. Salir del programa \n";
    int codigo = 0, opcionMenuPpl = 0;
    string productosOfertados = "\n1.Camisa $45000 \n2.Pantalon $85.000 \n3.Chaqueta $150.000 \n4.Zapatos $120.000";
    double precioUnitario = 0, subtotal = 0, descuento = 0, promedioVentas = 0;
    string descripcionProducto = ""; // OPCIONAL
    int unidadesComprar = 0, cantidadVentas = 0, cantidadPrendasVendidas = 0;

    // PRECIO DE CADA UNO DE LOS PRODUCTOS
    double precioCamisa = 45000, precioPantalon = 85000, precioChaqueta = 150000, precioZapatos = 120000;

    // CONTADORES
    int cantidadCamisas = 0, cantidadPantalones = 0, cantidadChaqueta = 0, contadorZapatos = 0;

    // PROCESO

    do
    {

        cout << menuPrincipal;
        cin >> opcionMenuPpl;

        switch (opcionMenuPpl)
        {
        case 1:

         // SELECCION DE PRODUCTOS OFERTADOS

            do
            {
                cout << productosOfertados;
                cout << "\n Seleccione una prenda a comprar\t";
                cin >> codigo;
            } while (codigo < 1 || codigo > 5);

            while (unidadesComprar <= 0)
            {

                cout << "\n Ingrese la cantidad (mayor que cero) de prendas que va a comprar\n";
                cin >> unidadesComprar;
            }

            switch (codigo)
            {
            case 1:
                precioUnitario = precioCamisa;
                cantidadCamisas = cantidadCamisas + unidadesComprar;
                break;
            case 2:
                // COMPRAR PANTALON
                precioUnitario = precioPantalon;
                cantidadPantalones = cantidadPantalones + unidadesComprar;

                break;
            case 3:
                // COMPRAR Chaqueta
                precioUnitario = precioChaqueta;
                cantidadChaqueta = cantidadChaqueta + unidadesComprar;
                break;
            case 4:
                // COMPRAR Zapatos
                break;
            default:
                break;
            }

            subtotal = subtotal + precioUnitario * unidadesComprar;


            break;
        case 2:
            // Consultar el total de las ventas
            break;
        case 3:
            // Consultar la cantidad de prendas vendidas
            break;
        case 4:
            // Consultar el promedio de venta
            break;
        case 5:
            // Salir del programa
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