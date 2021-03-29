#include <iostream>
#include "Prestamo.h"
#include "CuentaBancaria.h"
#include "Cliente.h"
#include "CompruebaRentabilidad.h"
#include "CompruebaDeudas.h"

using namespace std;

int main(){

    // El cliente quiere pedir un Préstamo de 15000 a 10 meses con un interés del 1,2
    Cliente* miCliente = new Cliente();
    Filtro *rentabilidad = new CompruebaRentabilidad();

    miCliente->getGestorFiltros()->setFiltros(rentabilidad);

    miCliente->pedirPrestamo(miCliente->rellenarFormulario());

    cout << "Prueba para Claudia" << endl;

    cout << "Finalmente el préstamo es de" << miCliente->getMiPrestamo().getImporte() << " € a pagar en " << miCliente->getMiPrestamo().getNum_cuotas() << " meses. Interés del " << miCliente->getMiPrestamo().getInteres() << endl;

    return 0;

}