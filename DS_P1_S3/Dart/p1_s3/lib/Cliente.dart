import 'CuentaBancaria.dart';
import 'FormularioPrestamo.dart';
import 'prestamo.dart';
import 'GestorFiltros.dart';
import 'dart:math';

class Cliente{
  GestorFiltros gestorFiltros;
  FormularioPrestamo formulario;
  CuentaBancaria miCuenta;
  Prestamo miPrestamo;
  dynamic deuda;

  Cliente(){
    gestorFiltros = new GestorFiltros();
    miCuenta = new CuentaBancaria(1500, 2000, 1);
  }

  Prestamo pedirPrestamo(FormularioPrestamo f){
    miPrestamo = gestorFiltros.pedirPrestamo(f);
    return miPrestamo;
  }

  FormularioPrestamo rellenarFormulario(){
    var now = new DateTime.now();
    Random source = new Random(now.millisecondsSinceEpoch);
    double cuantia = source.nextDouble() * (50000 - 500) + 500;
    int cuotas = 3 + source.nextInt(30 - 3);
    source = new Random(now.millisecondsSinceEpoch);
    double interes = source.nextDouble() * (2.5 - 1.1) + 1.1;
    deuda = source.nextInt(2);

    if(deuda!=0){
      deuda = (500 +source.nextDouble() * (15000-500));
    }

    formulario = new FormularioPrestamo(cuantia, cuotas, interes, miCuenta, deuda);
    print('--- Formulario de PRESTAMO --- \nCuantia: ${cuantia.toStringAsFixed(2)} € \nCuotas (meses): ${cuotas}\nInteres: ${interes.toStringAsFixed(2)}\nNómina: ${miCuenta.nomina} €\nDeuda del Cliente: ${deuda.toStringAsFixed(2)} €\n-----------------------');

    return formulario;
  }
}