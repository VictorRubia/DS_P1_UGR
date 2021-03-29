#ifndef CLIENTE_H
#define CLIENTE_H

#include "GestorFiltros.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

class Cliente {

private:
	GestorFiltros* gestorFiltros;
    FormularioPrestamo* formulario;
    CuentaBancaria* miCuenta;
    Prestamo miPrestamo;

public:
	Prestamo pedirPrestamo(FormularioPrestamo* f);

	Cliente();

    FormularioPrestamo* rellenarFormulario();

    FormularioPrestamo* getFormulario();

    GestorFiltros* getGestorFiltros();

    Prestamo getMiPrestamo();
};

#endif
