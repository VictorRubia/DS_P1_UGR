package Banca;

import java.util.ArrayList;

public abstract class FactoriaBancaria {

	abstract public CuentaBancaria fabricarCuentaBancaria(ArrayList<Prestamo> p);

	abstract public Prestamo fabricarPrestamo(int _id, int _cantidad, int _anios);
}