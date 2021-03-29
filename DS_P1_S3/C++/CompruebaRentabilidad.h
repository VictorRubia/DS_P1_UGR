#ifndef COMPRUEBARENTABILIDAD_H
#define COMPRUEBARENTABILIDAD_H

#include "Filtro.h"
#include "Prestamo.h"
#include "FormularioPrestamo.h"
#include "Cliente.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class CompruebaRentabilidad : public Filtro {

private:
    FormularioPrestamo* ejecutar(FormularioPrestamo* f);

	bool comprueba_rentabilidad(FormularioPrestamo* f);
};

#endif
