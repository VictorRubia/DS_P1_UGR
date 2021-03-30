//import 'Direction.dart';
//import 'MapSite.dart';

import 'FormularioPrestamo.dart';

class Prestamo{
  int num_cuotas;
  double importe;
  double interes;

  Prestamo(double imp, int cuotas, double tipo){
    importe = imp;
    num_cuotas = cuotas;
    interes = tipo;
  }

  Prestamo.otroConstructor(){

  }

  Prestamo pedirPrestamo(FormularioPrestamo f){
    Prestamo p = new Prestamo(f.cuantia,f.cuotas,f.interes);
    return p;
  }

  @override
  String toString() {
    // TODO: implement toString
    return super.toString();
  }

}