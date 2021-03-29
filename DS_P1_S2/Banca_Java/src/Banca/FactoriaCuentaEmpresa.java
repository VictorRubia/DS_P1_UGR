package Banca;

import java.util.ArrayList;

public class FactoriaCuentaEmpresa extends FactoriaBancaria {

	public Prestamo fabricarPrestamo(int _id, int _cantidad, int _anios) {
            Prestamo prestamo = new PrestamoEmpresas(_id, _cantidad, _anios);
            return prestamo;
	}

	public CuentaBancaria fabricarCuentaBancaria(ArrayList<Prestamo> p) {
            CuentaBancaria cuenta = new CuentaCorriente(p);
            return cuenta;
	}
}