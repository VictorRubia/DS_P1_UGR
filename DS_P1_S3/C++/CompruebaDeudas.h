#ifndef COMPRUEBADEUDAS_H
#define COMPRUEBADEUDAS_H

#include "Filtro.h"
#include <iostream>

using namespace std;

class CompruebaDeudas : public Filtro {


public:
    FormularioPrestamo* ejecutar(FormularioPrestamo* f) override;

private:
	bool comprueba_deudas(FormularioPrestamo* f);
};

#endif
