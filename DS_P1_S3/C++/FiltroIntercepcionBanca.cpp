#include <iostream>
#include "Prestamo.h"
#include "CuentaBancaria.h"
#include "Cliente.h"
#include "CompruebaRentabilidad.h"
#include "CompruebaDeudas.h"
#include <chrono>
#include <thread>

using namespace std;

int main(){

    Cliente* miCliente = new Cliente();
    Filtro *rentabilidad = new CompruebaRentabilidad();
    Filtro *deudas = new CompruebaDeudas();


    miCliente->getGestorFiltros()->setFiltros(deudas);
    miCliente->getGestorFiltros()->setFiltros(rentabilidad);

    while (true){
        miCliente->pedirPrestamo(miCliente->rellenarFormulario());

        cout << "\nFinalmente el préstamo es de " << miCliente->getMiPrestamo().getImporte() << " € a pagar en " << miCliente->getMiPrestamo().getNum_cuotas() << " meses. Interés del " << miCliente->getMiPrestamo().getInteres() << endl << endl;

        this_thread::sleep_for (std::chrono::seconds(3));
    }

    return 0;
}