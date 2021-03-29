#include <iostream>
#include "Prestamo.h"
#include "CuentaBancaria.h"
#include "Cliente.h"
#include "CompruebaRentabilidad.h"
#include "CompruebaDeudas.h"

using namespace std;

int main(){

    Cliente* miCliente = new Cliente();
    Filtro *rentabilidad = new CompruebaRentabilidad();

    miCliente->getGestorFiltros()->setFiltros(rentabilidad);

    miCliente->pedirPrestamo(miCliente->rellenarFormulario());

    cout << "Finalmente el préstamo es de" << miCliente->getMiPrestamo().getImporte() << " € a pagar en " << miCliente->getMiPrestamo().getNum_cuotas() << " meses. Interés del " << miCliente->getMiPrestamo().getInteres() << endl;

    return 0;

}