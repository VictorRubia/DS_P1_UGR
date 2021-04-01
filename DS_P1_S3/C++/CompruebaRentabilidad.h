#ifndef COMPRUEBARENTABILIDAD_H
#define COMPRUEBARENTABILIDAD_H

#include "Filtro.h"
#include "Prestamo.h"
#include "FormularioPrestamo.h"
#include "Cliente.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class CompruebaRentabilidad : public Filtro {

private:
	bool comprueba_rentabilidad(FormularioPrestamo* f);

public:
    FormularioPrestamo* ejecutar(FormularioPrestamo* f) override;

};

#endif
