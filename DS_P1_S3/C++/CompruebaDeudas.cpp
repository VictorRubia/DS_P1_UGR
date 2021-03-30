#include "CompruebaDeudas.h"

FormularioPrestamo* CompruebaDeudas::ejecutar(FormularioPrestamo* f) {
    cout << "Comprobando si tiene deudas pendientes..." << endl;

    if (comprueba_deudas(f)==false) {
        cout <<  " son bajas por tanto puede recibir el prestamo \n"<< endl;
        f->setDeudas(false);
    }else{
        f->setDeudas(true);
        cout <<  " son altas por tanto no puede recibir el prestamo \n"<< endl;
    }
    f->getCuenta()->getDeudas().clear();
    return f;

}
bool CompruebaDeudas::comprueba_deudas(FormularioPrestamo* f) {
    bool  tiene_deuda= true;
    int total_deudas =0;
    for (int i=0; i<5; i++){
      total_deudas +=  f->getCuenta()->getDeudas().at(i) +  rand()%10000;
      cout << total_deudas<<"\n";
    }

    if (f->getCuantia()>total_deudas){
        tiene_deuda=false;
    }
    cout<<"Sus deudas son de " << total_deudas;
    return tiene_deuda;
}

