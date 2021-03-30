#include "CuentaBancaria.h"

CuentaBancaria::CuentaBancaria(float balance, float nomina, int id, vector<int> deudas) : deudas(deudas) {
    this->balance = balance;
    this->nomina = nomina;
    this->id = id;
    this->deudas = deudas;
}

float CuentaBancaria::getBalance() {
	return this->balance;
}

void CuentaBancaria::setBalance(float balance) {
	this->balance = balance;
}

float CuentaBancaria::getNomina() {
	return this->nomina;
}

void CuentaBancaria::setNomina(float nomina) {
	this->nomina = nomina;
}

int CuentaBancaria::getId() {
	return this->id;
}

void CuentaBancaria::setId(int id) {
	this->id = id;
}

vector<int> CuentaBancaria::getDeudas() {
    return this->deudas;
}