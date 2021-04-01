#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <vector>

using namespace std;

class CuentaBancaria {

private:
	float balance;
	float nomina;
	int id;

public:
    CuentaBancaria(float balance, float nomina, int id);

	float getNomina();

};

#endif
