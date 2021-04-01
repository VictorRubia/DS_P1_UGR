#include "Cliente.h"

Prestamo Cliente::pedirPrestamo(FormularioPrestamo* f) {
    miPrestamo = gestorFiltros->pedirPrestamo(f);
    return miPrestamo;
}

Cliente::Cliente() {
    deuda = (int)rand()%2;
    gestorFiltros = new GestorFiltros();
    this->miCuenta = new CuentaBancaria(1500, 2000,1);
}

FormularioPrestamo* Cliente::rellenarFormulario(){
    //  Generar formularios aleatorios
    srand (static_cast <unsigned> (time(0)));
    float cuantia = 500 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(50000-500)));
    int cuotas = rand()%(30-3 + 1) + 3;
    float interes = 1.1 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(2.5-1.1)));

    if(deuda != 0){
        deuda = (500 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(15000-500))));
    }

    this->formulario = new FormularioPrestamo(cuantia,cuotas,interes,this->miCuenta,deuda);

    cout << "--- Formulario de PRESTAMO --- \nCuantia: " << cuantia << " €\nCuotas (meses): " << cuotas << "\nInteres: " << interes << "\nNomina: " << miCuenta->getNomina() << " €\nDeudas del Cliente: " << this->deuda << "€\n-----------------------" << endl;

    return this->formulario;
}

FormularioPrestamo *Cliente::getFormulario() {
    return formulario;
}

GestorFiltros *Cliente::getGestorFiltros() {
    return gestorFiltros;
}

Prestamo Cliente::getMiPrestamo() {
    return miPrestamo;
}
