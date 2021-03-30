import 'dart:convert';
import 'dart:math';
import 'Filtro.dart';
import 'FormularioPrestamo.dart';
import 'dart:io';

class CompruebaRentabilidad implements Filtro{
  FormularioPrestamo ejecutar(FormularioPrestamo f){
    bool rentable = false;
    String opcion;

    print('Comprobando la rentabilidad del cliente ...\n');
    if (comprueba_rentabilidad(f) == false){
      print('En base a su solicitud el banco le ofrece los siguientes términos.');
    //  var opcion = stdin.readLineSync(encoding: Encoding.getByName('utf-8'));   // Para leer de entrada

      //  Toma de decisión aleatoria
      List<String> opciones = ['si', 'no'];
      Random random = new Random();
      var opcion = opciones[random.nextInt(opciones.length)];

      if(opcion == 'S' || opcion == 's' || opcion == 'si'){
        print('Usted acepta las condiciones, asignando prestamo...');
      }
      else{
        print('Como usted no aceptó las condiciones estamos cancelando su solicitud...');
        f.interes = null;
        f.cuantia = null;
        f.cuotas = null;
        f.cuenta = null;
      }
    }
    return f;
  }
  bool comprueba_rentabilidad(FormularioPrestamo f){
    bool no_rentable = true;
    double tipo = f.interes/1200;

    double numerador = tipo * pow(1+ tipo, f.cuotas);
    double denominador = pow(1 + tipo, f.cuotas) - 1;
    double cuota = f.cuantia * (numerador / denominador);

    //print('Calculando cuota teórica\n');
    //print('Prestamo de ${f.cuantia.toStringAsFixed(2)} € Cuota teórica ${cuota.toStringAsFixed(2)} €/mes en ${f.cuotas} meses, nómina cliente es ${f.cuenta.nomina.toStringAsFixed(2)}');
    while(no_rentable){

      numerador = tipo * pow(1+ tipo, f.cuotas);
      denominador = pow(1 + tipo, f.cuotas) - 1;
      cuota = f.cuantia * (numerador / denominador);

      // Si supera la nómina mensual del cliente
      if(cuota > f.cuenta.nomina*0.6){
        // Aplicamos el filtro de rentabilidad para el importe solicitado
        f.cuotas++;
      }
      else {
        no_rentable = false;
        print('El banco le ofrece un prestamo de ${f.cuantia.toStringAsFixed(2)} € su cuota seria ${cuota.toStringAsFixed(2)} €/mes en ${f.cuotas} meses con un interés del ${f.interes.toStringAsFixed(2)}');
        //print('Es rentable');
      }
    }
    return no_rentable;
  }
}