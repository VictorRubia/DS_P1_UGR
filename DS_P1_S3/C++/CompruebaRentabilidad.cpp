#include "CompruebaRentabilidad.h"

FormularioPrestamo* CompruebaRentabilidad::ejecutar(FormularioPrestamo* f) {
    bool rentable = false;
    string opcion;

    cout << "Comprobando la rentabilidad del cliente ..." << endl << endl;
    if (comprueba_rentabilidad(f) == false){
        cout << "En base a su solicitud el banco le ofrece los siguientes términos." << endl;
        //cin >> opcion;

        //  Toma de decisiones aleatoria
        vector<string> opciones = {"si", "no"};
        srand (time(NULL));
        string opcion =  opciones[(rand() % opciones.size())];

        if(opcion == "si"){
            cout << "Usted acepta las condiciones, asignando prestamo..." << endl;
        }
        else{
            cout << "Como usted no aceptó las condiciones estamos cancelando su solicitud..." << endl;
            f->setInteres(NULL);
            f->setCuantia(NULL);
            f->setCuotas(NULL);
            f->setCuenta(NULL);
        }
    }
    return f;
}

bool CompruebaRentabilidad::comprueba_rentabilidad(FormularioPrestamo* f) {
    bool no_rentable = true;
    float tipo = f->getInteres()/1200;

    double numerador = tipo * pow(1+ tipo, f->getCuotas());
    double denominador = pow(1 + tipo, f->getCuotas()) - 1;
    double cuota = f->getCuantia() * (numerador / denominador);

    //cout << "Calculando cuota teórica" << endl;
    //cout << "Prestamo de " << f->getCuantia() << "€ Cuota teórica " << cuota << " €/mes en " << f->getCuotas() << " meses, nómina cliente es " << f->getCuenta()->getNomina() << endl;
    while(no_rentable){

        numerador = tipo * pow(1+ tipo, f->getCuotas());
        denominador = pow(1 + tipo, f->getCuotas()) - 1;
        cuota = f->getCuantia() * (numerador / denominador);

        // Si supera la nómina mensual del cliente
        if(cuota > f->getCuenta()->getNomina()*0.6){
            // Aplicamos el filtro de rentabilidad para el importe solicitado
            f->setCuotas(f->getCuotas()+1);
        }
        else {
            no_rentable = false;
            cout << "El banco le ofrece un prestamo de " << f->getCuantia() << " € su cuota seria " << cuota << " €/mes en " << f->getCuotas() << " meses con un interés del " << f->getInteres() << endl;
        }
    }
    return no_rentable;
}
