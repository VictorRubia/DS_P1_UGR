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
    float deuda;

public:
	Prestamo pedirPrestamo(FormularioPrestamo* f);

	Cliente();

    FormularioPrestamo* rellenarFormulario();

    GestorFiltros* getGestorFiltros();

    Prestamo getMiPrestamo();

};

#endif