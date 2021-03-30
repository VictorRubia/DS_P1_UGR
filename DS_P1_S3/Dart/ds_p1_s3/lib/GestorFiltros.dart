import 'package:ds_p1_s3/CadenaFiltros.dart';
import 'package:ds_p1_s3/Filtro.dart';
import 'package:ds_p1_s3/prestamo.dart';

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