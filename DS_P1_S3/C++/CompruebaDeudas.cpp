#include "CompruebaDeudas.h"

FormularioPrestamo* CompruebaDeudas::ejecutar(FormularioPrestamo* f) {
    if (f->getInteres() != 0) {
        cout << "Comprobando si tiene deudas pendientes...\n-----------------------" << endl;

        if (comprueba_deudas(f) == true) {
            f->setInteres(0);
            f->setCuantia(0);
            f->setCuotas(0);
        }
    }

    return f;

}
bool CompruebaDeudas::comprueba_deudas(FormularioPrestamo* f) {
    bool tiene_deuda;

    if ( f->getDeudas() < f->getCuantia()*0.3){
        if(f->getDeudas() == 0)
            cout << "Usted no tiene deudas, por lo que puede recibir el prestamo" << endl;
        else
            cout << "Aunque usted tiene deudas con nosotros (" << f->getDeudas() << " €)" <<" puede recibir el prestamo" << endl;
        tiene_deuda=false;
    }
    else{
        tiene_deuda = true;
        cout << "Como usted tiene deudas elevadas con nosotros (" << f->getDeudas() << " €)" <<" no puede recibir el prestamo" << endl;
    }

    return tiene_deuda;
}

