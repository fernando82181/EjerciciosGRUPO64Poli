#include <iostream>
using namespace std;

int main()
{

    string mensajeSolicitudOpcion = "INGRESE LA OPCION PARA EL PRODUCTO\n";
    string productos = "\n 1. CAFÉ $2000"
                       "\n 2. JUGO NATURAL $4000"
                       "\n 3. SANDWICH $7000"
                       "\n 4. EMPANADA $2500"
                       "\n 5. FINALIZAR JORNADA \n";
    int codigoProducto = 0;
    char letraMayor = ' ';
    int
        cantidadProdutos = 0,
        numeroTransacciones = 0,
        mayor = 0,
        menor = 0;
    double subtotal = 0,
           precioProduto = 0,
           precioCafe = 2000,
           precioJugo = 4000,
           precioEmpanada = 2500,
           precioSandwich = 7000,
           descuento = 0;

    // CONTADORES
    int contadorCafe = 0,
        contadorJugo = 0,
        contadorSandwich = 0,
        contadorEmpanada = 0,
        contadorGlobalCafe = 0,
        contadorGlobalJugo = 0,
        contadorGlobalSandwich = 0,
        contadorGlobalEmpanada = 0;

    // ACUMULADORES
    double totalCafeTransacc = 0,
           totalJugoTransacc = 0,
           totalSandwichTransacc = 0,
           totalEmpanadaTransacc = 0,
           totalVendidoJornada = 0;

    // BANDERAS
    bool finTransaccion = false, finJornada = false, opcionInvalida = false;

    do
    {
        opcionInvalida = false;
        // ESTE CICLO NOS VA A PERMITIR IR ITERANDO POR CADA TRANSACCION
        /*----------------------------------------ENTRADA----------------------------------------*/
        cout << mensajeSolicitudOpcion << productos;
        cin >> codigoProducto;

        // Este ciclo nos permite solicitarle al usuario las veces que sean necesarias una cantidad de productos mayor a cero
        while (cantidadProdutos <= 0 && codigoProducto < 5 && codigoProducto > 0)
        {
            cout << "Ingrese la cantidad de produtos a comprar: \t";
            cin >> cantidadProdutos;
            if (cantidadProdutos <= 0)
                cout << "La cantidad de productos debe ser mayor a cero \n";
        }
        /*----------------------------------------FIN ENTRADA----------------------------------------*/
        /*----------------------------------------PROCESO----------------------------------------*/
        // Este SWITCH nos permite asignar el precio al producto dependiendo de la opción que ingrese el usuario
        switch (codigoProducto)
        {
        case 1:
            precioProduto = precioCafe; // PRECIO DEL CAFÉ
            contadorCafe = cantidadProdutos + contadorCafe;
            break;

        case 2:
            precioProduto = precioJugo; // PRECIO DEL JUGO NATURAL
            contadorJugo = cantidadProdutos + contadorJugo;

            break;
        case 3:
            precioProduto = precioSandwich; // PRECIO DEL SANDWICH
            contadorSandwich = cantidadProdutos + contadorSandwich;
            break;

        case 4:
            precioProduto = precioEmpanada; // PRECIO DE LA EMPANADA
            contadorEmpanada = cantidadProdutos + contadorEmpanada;
            break;
        case 5:

            cout << "Hasta pronto\n";
            finJornada = true;

            break;

        default:
            cout << "Opcion no valida";
            opcionInvalida = true;
            break;
        }
        if (codigoProducto > 0 && codigoProducto < 5)
        {

            do
            {
                cout << "Desea agregar más producto a la transacción? \n1: SI\n0: NO\n"; // 0 = false, 1 = true
                cin >> finTransaccion;
            } while (finTransaccion != 0 && finTransaccion != 1);
        }

        if (!finTransaccion && !finJornada && !opcionInvalida)
        {
            // SE REALIZAN LOS CALCULOS DE CUANTO FUE EL TOTAL POR CADA PRODUCTO
            totalCafeTransacc = contadorCafe * precioCafe;
            totalEmpanadaTransacc = contadorEmpanada * precioEmpanada;
            totalJugoTransacc = contadorJugo * precioJugo;
            totalSandwichTransacc = contadorSandwich * precioSandwich;

            subtotal = totalCafeTransacc + totalJugoTransacc + totalEmpanadaTransacc + totalSandwichTransacc;
            if (contadorCafe >= 5 || contadorEmpanada >= 5 || contadorJugo >= 5 || contadorSandwich >= 5)
                subtotal = subtotal * 0.90; // Se aplica descuento si se compra mas de 5 elementos de un mismo producto

            totalVendidoJornada = totalVendidoJornada + subtotal;

            // SE MUESTRAN POR PANTALLA CADA UNO DE LAS CANTIDADES COMPRADAS Y EL TOTAL POR CADA ITEM
            cout << "Cantidad de Café comprado: \t\t" << contadorCafe << ", para un total de = \t" << totalCafeTransacc << endl;
            cout << "Cantidad de Jugo comprado: \t\t" << contadorJugo << ", para un total de = \t" << totalJugoTransacc << endl;
            cout << "Cantidad de Empanadas compradas: \t\t" << contadorEmpanada << ", para un total de = \t" << totalEmpanadaTransacc << endl;
            cout << "Cantidad de Sandwiches comprados: \t\t" << contadorSandwich << ", para un total de = \t" << totalSandwichTransacc << endl;
            cout << "El subtotal de produtos es: " << subtotal << endl;

            if (subtotal > 20000)
                cout << "El monto superó los $20.000";

            // SE ALMACENAN LAS CANTIDADES VENDIDAS POR CADA TRANSACCION
            contadorGlobalEmpanada = contadorGlobalEmpanada + contadorEmpanada;
            contadorGlobalCafe = contadorGlobalCafe + contadorCafe;
            contadorGlobalJugo = contadorGlobalJugo + contadorJugo;
            contadorGlobalSandwich = contadorGlobalSandwich + contadorSandwich;

            // SE LE ASIGNAN CERO PARA LA SIGUIENTE TRANSACCION
            contadorCafe = 0;
            contadorJugo = 0;
            contadorEmpanada = 0;
            contadorSandwich = 0;
            subtotal = 0;

            numeroTransacciones++;
        }
        cantidadProdutos = 0;

    } while (codigoProducto != 5);

    if (contadorGlobalEmpanada > mayor)
    {
        mayor = contadorGlobalEmpanada;
        letraMayor = 'E';
    }
    else if (contadorGlobalCafe > mayor)
    {
        mayor = contadorGlobalCafe;
        letraMayor = 'C';
    }
    else if (contadorGlobalSandwich > mayor)
    {
        mayor = contadorGlobalSandwich;
        letraMayor = 'S';
    }
    else if (contadorGlobalJugo > mayor)
    {
        mayor = contadorGlobalJugo;
        letraMayor = 'J';
    }
    switch (letraMayor)
    {
    case 'E':
        cout << "El producto más vendido es la Empanada\n";
        break;
    case 'C':
        cout << "El producto más vendido es el Café\n";
        break;
    case 'J':
        cout << "El producto más vendido es el Jugo Natural \n";
        break;
    case 'S':
        cout << "El producto más vendido es el Sandwich\n";
        break;
    }
    /*----------------------------------------FIN PROCESO----------------------------------------*/
    /*----------------------------------------SALIDA----------------------------------------*/
    cout << "Total de transacciones: " << numeroTransacciones << endl;
    cout << "Total de cafe vendido: " << contadorGlobalCafe << endl;
    cout << "Total de jugo vendido: " << contadorGlobalJugo << endl;
    cout << "Total de sandwich vendido: " << contadorGlobalSandwich << endl;
    cout << "Total de Empanada vendida: " << contadorGlobalEmpanada << endl;
    cout << "Total vendido en la jornada\t" << totalVendidoJornada << endl;

    return 0;
}