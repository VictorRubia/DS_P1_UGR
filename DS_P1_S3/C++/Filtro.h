#ifndef FILTRO_H
#define FILTRO_H

#include "Prestamo.h"
#include "FormularioPrestamo.h"

class Filtro {

public:
	virtual FormularioPrestamo* ejecutar(FormularioPrestamo* f) = 0;
};

#endif
