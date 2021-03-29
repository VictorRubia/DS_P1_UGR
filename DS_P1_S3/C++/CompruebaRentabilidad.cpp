#include "CompruebaRentabilidad.h"

FormularioPrestamo* CompruebaRentabilidad::ejecutar(FormularioPrestamo* f) {
    bool rentable = false;
    string opcion;

    cout << " Comprobando la rentabilidad del cliente ...";
    if (comprueba_rentabilidad(f) == false){
        cout << "DESEA ACEPTAR EL PRESTAMO?" << endl;
        cin >> opcion;
        if(opcion == "si"){
            cout << "\nOLE!" << endl;
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

    cout << "Calculando cuota teórica" << endl;
    cout << "Prestamo de " << f->getCuantia() << "€ Cuota teórica " << cuota << " €/mes en " << f->getCuotas() << " meses, nómina cliente es " << f->getCuenta()->getNomina() << endl;
    while(no_rentable){

        /*double numerador = p->getImporte() * p->getInteres();
        double denominador = (1-pow(1/1+p->getInteres(),p->getNum_cuotas()));
        double cuota = numerador / denominador;*/

        numerador = tipo * pow(1+ tipo, f->getCuotas());
        denominador = pow(1 + tipo, f->getCuotas()) - 1;
        cuota = f->getCuantia() * (numerador / denominador);



        // Si supera la nómina mensual del cliente
        if(cuota > f->getCuenta()->getNomina()*0.8){
            // Aplicamos el filtro de rentabilidad para el importe solicitado
            // Le quitamos dinero al préstamo
            //p->setImporte(p->getImporte()-100.00);
            f->setCuotas(f->getCuotas()+1);
            cout << "Prestamo de " << f->getCuantia() << "€ Cuota teórica " << cuota << " €/mes en " << f->getCuotas() << " meses, nómina cliente es " << f->getCuenta()->getNomina() << endl;
        }
        else {
            no_rentable = false;
            cout << "Es rentable" << endl;
        }
    }
    return no_rentable;
}
