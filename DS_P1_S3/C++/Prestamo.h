#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "FormularioPrestamo.h"

class Prestamo {

private:
	float importe;
	int num_cuotas;
	float interes;
	bool deudas=false;

public:
	float getImporte();

	void setImporte(float importe);

	int getNum_cuotas();

	void setNum_cuotas(int num_cuotas);

	float getInteres();

	void setInteres(float interes);

	bool getDeudas();

    void setDeudas(bool deudas);

	Prestamo();

    Prestamo(float imp, int cuotas, float interes);

	Prestamo pedirPrestamo(FormularioPrestamo *form);
};

#endif
