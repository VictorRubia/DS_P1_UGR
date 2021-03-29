#include "GestorFiltros.h"

GestorFiltros::GestorFiltros() {
    cadena = new CadenaFiltros();
}

void GestorFiltros::setFiltros(Filtro* filtro) {
    cadena->addFiltro(filtro);
}

FormularioPrestamo* GestorFiltros::peticionFiltros(FormularioPrestamo* form) {
    return cadena->ejecutar(form);
}

Prestamo GestorFiltros::pedirPrestamo(FormularioPrestamo* f) {
    f = peticionFiltros(f);
    return cadena->pedirPrestamo(f);
}
