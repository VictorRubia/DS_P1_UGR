/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Banca;

import java.util.ArrayList;
import java.util.Random;

/**
 *
 * @author victo
 */
public class Cliente {
    
    
    public static void crearBanco(FactoriaBancaria factoria, ArrayList<Prestamo> prestamos){
        CuentaBancaria cuenta= factoria.fabricarCuentaBancaria(prestamos);
        cuenta.lanzarCuentas();
    }
    
    public static void main(String[] args){

                    //Generamos un número de prestamos y para cada uno un número de años aleatorio

                    Random rand = new Random();

                    int nPrestamosEmpresas = rand.nextInt(5)+5;
                    int nPrestamosEstudios = rand.nextInt(3)+3;

                    // Creamos las dos factorias
                    FactoriaBancaria pEstudios= new FactoriaCuentaJoven();
                    FactoriaBancaria pEmpresas= new FactoriaCuentaEmpresa();

                    //Creamos dos arrays de prestamos a traves de las factorias
                    ArrayList<Prestamo> prestamoestudios= new ArrayList<Prestamo>();
                    ArrayList<Prestamo> prestamoempresas= new ArrayList<Prestamo>();



                    // Rellenamos los arrays
                    for(int i = 0 ; i < nPrestamosEmpresas; i++){
                            // Para las empresas
                            int cantidadEmpresas = (int) (Math.random()*20000+1) + 1500;
                            int aniosEmpresas = rand.nextInt(15)+3;
                            prestamoempresas.add(pEmpresas.fabricarPrestamo(i, cantidadEmpresas, aniosEmpresas));
                    }

                    for(int i = 0 ; i < nPrestamosEstudios; i++){
                            // Para los estudios
                            int cantidadEstudios = (int) (Math.random()*3500+1) + 1500;
                            int aniosEstudios = rand.nextInt(3)+2;
                            prestamoestudios.add(pEstudios.fabricarPrestamo(i, cantidadEstudios, aniosEstudios));
                    }

                    //Creamos las cuentas a traves de las factorias y les proporcionamos los prestamos.
                    crearBanco(pEmpresas, prestamoempresas);
                    crearBanco(pEstudios, prestamoestudios);
    }

    
}
