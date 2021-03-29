#ifndef FORMULARIOPRESTAMO_H
#define FORMULARIOPRESTAMO_H


#include "CuentaBancaria.h"

class FormularioPrestamo {

private:
	float cuantia;
	int cuotas;
	float interes;
	CuentaBancaria *cuenta;

public:
    FormularioPrestamo(float cuantia, int cuotas, float interes, CuentaBancaria* cuenta);

    float getCuantia();

	void setCuantia(float cuantia);

	int getCuotas();

	void setCuotas(int cuotas);

	float getInteres();

	void setInteres(float interes);

    CuentaBancaria* getCuenta();

    void setCuenta(CuentaBancaria *cuenta);
};

#endif
