#ifndef COMPRUEBADEUDAS_H
#define COMPRUEBADEUDAS_H

#include "Filtro.h"
#include <iostream>

using namespace std;

class CompruebaDeudas : public Filtro {


private:
    FormularioPrestamo* ejecutar(FormularioPrestamo* f);

	bool comprueba_deudas(FormularioPrestamo* f);
};

#endif
