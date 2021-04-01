#include "CuentaBancaria.h"

CuentaBancaria::CuentaBancaria(float balance, float nomina, int id) {
    this->balance = balance;
    this->nomina = nomina;
    this->id = id;
}

float CuentaBancaria::getNomina() {
	return this->nomina;
}