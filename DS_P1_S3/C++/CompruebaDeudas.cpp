#include "CompruebaDeudas.h"

FormularioPrestamo* CompruebaDeudas::ejecutar(FormularioPrestamo* f) {
    bool tiene_deudas = false;

    if(comprueba_deudas() == true){
        tiene_deudas = true;
    }

    cout << "Comprobando si tiene deudas pendientes..." << endl;
    return f;
}

bool CompruebaDeudas::comprueba_deudas() {
	// TODO - implement CompruebaDeudas::comprueba_deudas
    return true;
}
