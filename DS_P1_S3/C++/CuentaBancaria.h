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

	float getBalance();

	void setBalance(float balance);

	float getNomina();

	void setNomina(float nomina);

	int getId();

	void setId(int id);

	vector<int> getDeudas();
};

#endif
