import 'CuentaBancaria.dart';

class FormularioPrestamo{
  double cuantia;
  int cuotas;
  double interes;
  CuentaBancaria cuenta;
  dynamic deuda;

  FormularioPrestamo(double cuantia, int cuotas, double interes, CuentaBancaria cuenta, dynamic deuda){
    this.cuantia = cuantia;
    this.cuotas = cuotas;
    this.interes = interes;
    this.cuenta = cuenta;
    this.deuda = deuda;
  }
}