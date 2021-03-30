#include "FormularioPrestamo.h"

float FormularioPrestamo::getCuantia() {
	return this->cuantia;
}

void FormularioPrestamo::setCuantia(float cuantia) {
	this->cuantia = cuantia;
}

int FormularioPrestamo::getCuotas() {
	return this->cuotas;
}

void FormularioPrestamo::setCuotas(int cuotas) {
	this->cuotas = cuotas;
}

float FormularioPrestamo::getInteres() {
	return this->interes;
}

void FormularioPrestamo::setInteres(float interes) {
	this->interes = interes;
}

bool FormularioPrestamo::getDeudas() {
    return this->deudas;
}

void FormularioPrestamo::setDeudas(bool deudas) {
    this->deudas = deudas;
}

CuentaBancaria* FormularioPrestamo::getCuenta() {
    return cuenta;
}

void FormularioPrestamo::setCuenta(CuentaBancaria *cuenta) {
    FormularioPrestamo::cuenta = cuenta;
}

FormularioPrestamo::FormularioPrestamo(float cuantia, int cuotas, float interes, CuentaBancaria* cuenta) {
    this->cuantia = cuantia;
    this->cuotas = cuotas;
    this->interes = interes;
    this->cuenta = cuenta;
}
