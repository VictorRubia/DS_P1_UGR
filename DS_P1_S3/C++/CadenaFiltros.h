#ifndef CADENAFILTROS_H
#define CADENAFILTROS_H

#include "Filtro.h"
#include <vector>

using namespace std;

class CadenaFiltros {

private:
	vector<Filtro*> filtros;
	Prestamo prestamo;

public:
    CadenaFiltros();

	void addFiltro(Filtro* filtro);

    FormularioPrestamo* ejecutar(FormularioPrestamo* f);

	Prestamo pedirPrestamo(FormularioPrestamo* f);

	void setPrestamo(Prestamo p);
};

#endif
