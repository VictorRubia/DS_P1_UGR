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
public class Cliente extends Thread{
    
    CuentaBancaria cuenta;
    ArrayList<Prestamo> prestamos;
    
    public Cliente(){

    }
    
    public void crearBanco(FactoriaBancaria factoria){
        //  Aquí se crean las cuentas bancarias
        cuenta = factoria.fabricarCuentaBancaria(prestamos);
    }
    
    public void rellenarFormularioPrestamos(FactoriaBancaria factoria){

        //Generamos un número de prestamos y para cada uno un número de años aleatorio
        Random rand = new Random();

        int nPrestamos = rand.nextInt(5)+5;

        //Creamos dos arrays de prestamos a traves de las factorias
        prestamos = new ArrayList<>();

        // Rellenamos los arrays
        for(int i = 0 ; i < nPrestamos; i++){
                int cuantia = (int) (Math.random()*20000+1) + 1500;
                int anios = rand.nextInt(15)+3;
                //Aquí se fabrican los prestamos
                prestamos.add(factoria.fabricarPrestamo(i, cuantia, anios));
        }
    }
    
    public void lanzarCuentas(){
        cuenta.lanzarCuentas();
    }
    
    @Override
    public void run(){
        lanzarCuentas();
    }
    
}
