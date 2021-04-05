import 'Filtro.dart';
import 'FormularioPrestamo.dart';

class CompruebaDeudas implements Filtro{
  FormularioPrestamo ejecutar(FormularioPrestamo f){
    if(f.interes != 0){
      print('Comprobando si tiene deudas pendientes ... \n');
      if(comprueba_deudas(f) == true){
        f.interes = 0;
        f.cuantia = 0;
        f.cuotas = 0;
      }
    }
    return f;
  }
  bool comprueba_deudas(FormularioPrestamo f){
    bool tiene_deuda;
    if(f.deuda < f.cuantia * 0.3) {
      if (f.deuda == 0)
        print('Usted no tiene deudas por lo que puede recibir el prestamo. \n');
      else
        print('Aunque usted tiene deudas con nosotros ${f.deuda} € puede recibir el prestamo\n');
      tiene_deuda = false;
    }else{
      tiene_deuda = true;
      print('Como usted tiene deudas elevadas con nosotros ${f.deuda.toStringAsFixed(2)} € no puede recibir el prestamo \n');
    }
    return tiene_deuda;
  }
}