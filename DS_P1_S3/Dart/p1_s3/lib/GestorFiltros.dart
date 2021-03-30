import 'CadenaFiltros.dart';
import 'Filtro.dart';
import 'prestamo.dart';

import 'FormularioPrestamo.dart';

class GestorFiltros{
  CadenaFiltros cadena;

  GestorFiltros(){
    cadena = new CadenaFiltros();
  }
  Prestamo pedirPrestamo(FormularioPrestamo f){
    f = peticionFiltros(f);
    return cadena.pedirPrestamo(f);
  }
  peticionFiltros(FormularioPrestamo f){
    return cadena.ejecutar(f);
  }

  void setFiltros(Filtro f){
    cadena.addFiltro(f);
  }
}