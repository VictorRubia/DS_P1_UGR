#include "Prestamo.h"

float Prestamo::getImporte() {
	return this->importe;
}

void Prestamo::setImporte(float importe) {
	this->importe = importe;
}

int Prestamo::getNum_cuotas() {
	return this->num_cuotas;
}

void Prestamo::setNum_cuotas(int num_cuotas) {
	this->num_cuotas = num_cuotas;
}

float Prestamo::getInteres() {
	return this->interes;
}

void Prestamo::setInteres(float interes) {
	this->interes = interes;
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

Prestamo Prestamo::pedirPrestamo(float imp, int cuotas, float interes) {
    return Prestamo(imp, cuotas, interes);;
}
