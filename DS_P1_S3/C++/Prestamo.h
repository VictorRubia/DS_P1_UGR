#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "FormularioPrestamo.h"

class Prestamo {

private:
	float importe;
	int num_cuotas;
	float interes;

public:
    Prestamo(float imp, int cuotas, float interes);

    Prestamo();

	float getImporte();

	int getNum_cuotas();

	float getInteres();

	Prestamo pedirPrestamo(FormularioPrestamo *form);
};

#endif
