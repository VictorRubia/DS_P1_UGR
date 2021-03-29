#ifndef GESTORFILTROS_H
#define GESTORFILTROS_H


#include "CadenaFiltros.h"
#include "Prestamo.h"
#include "Filtro.h"
#include "FormularioPrestamo.h"

class GestorFiltros {

private:
	CadenaFiltros* cadena;

public:
	GestorFiltros();

	void setFiltros(Filtro* filtro);

    FormularioPrestamo* peticionFiltros(FormularioPrestamo* form);

	Prestamo pedirPrestamo(FormularioPrestamo* f);
};

#endif
