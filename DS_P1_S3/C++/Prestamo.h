#ifndef PRESTAMO_H
#define PRESTAMO_H

class Prestamo {

private:
	float importe;
	int num_cuotas;
	float interes;

public:
	float getImporte();

	void setImporte(float importe);

	int getNum_cuotas();

	void setNum_cuotas(int num_cuotas);

	float getInteres();

	void setInteres(float interes);

	Prestamo();

    Prestamo(float imp, int cuotas, float interes);

	Prestamo pedirPrestamo(float imp, int cuotas, float interes);
};

#endif
