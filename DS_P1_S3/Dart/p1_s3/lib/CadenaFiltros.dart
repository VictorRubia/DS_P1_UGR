import 'FormularioPrestamo.dart';
import 'prestamo.dart';
import 'Filtro.dart';

class CadenaFiltros{
  Prestamo prestamo;
  List<Filtro> filtros = List<Filtro>();

  CadenaFiltros(){
    prestamo = new Prestamo.otroConstructor();
  }

  void addFiltro(Filtro f){
    filtros.add(f);
  }
  FormularioPrestamo ejecutar(FormularioPrestamo f){
    for( var e in filtros){
      f = e.ejecutar(f);
    }
    return f;
  }
  void setPrestamo(Prestamo p){
    prestamo = p;
  }
  Prestamo pedirPrestamo(FormularioPrestamo f){
    setPrestamo(prestamo.pedirPrestamo(f));
    return prestamo;
  }

}