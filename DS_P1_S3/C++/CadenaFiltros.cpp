#include "CadenaFiltros.h"

void CadenaFiltros::addFiltro(Filtro* filtro) {
    filtros.push_back(filtro);
}

FormularioPrestamo* CadenaFiltros::ejecutar(FormularioPrestamo* f) {
    for( int i=0; i < filtros.capacity(); i++){
        f = filtros.at(i)->ejecutar(f);
    }

    return f;
}

Prestamo CadenaFiltros::pedirPrestamo(FormularioPrestamo* f) {
    setPrestamo(this->prestamo.pedirPrestamo(f->getCuantia(),f->getCuotas(),f->getInteres()));
    return this->prestamo;
}

CadenaFiltros::CadenaFiltros() {
}

void CadenaFiltros::setPrestamo(Prestamo p) {
    this->prestamo = p;
}