#include "Prestamo.h"

float Prestamo::getImporte() {
	return this->importe;
}

int Prestamo::getNum_cuotas() {
	return this->num_cuotas;
}

float Prestamo::getInteres() {
	return this->interes;
}

Prestamo::Prestamo() {
	importe = 0;
	num_cuotas = 0;
	interes = 0;
}

Prestamo::Prestamo(float imp, int cuotas, float interes){
    importe = imp;
    num_cuotas = cuotas;
    this->interes = interes;
}

Prestamo Prestamo::pedirPrestamo(FormularioPrestamo *form) {
    return Prestamo(form->getCuantia(), form->getCuotas(), form->getInteres());
}
