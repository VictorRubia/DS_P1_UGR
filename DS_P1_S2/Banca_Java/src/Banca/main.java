/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Banca;

/**
 *
 * @author victo
 */
public class main extends Thread{ 
    
    public static void main(String[] args){
        
        Cliente c1 = new Cliente();
        Cliente c2 = new Cliente();
        
        // Creamos las dos factorias
        FactoriaBancaria fEstudios= new FactoriaCuentaJoven();
        FactoriaBancaria fEmpresas= new FactoriaCuentaEmpresa();
        
        c1.rellenarFormularioPrestamos(fEstudios);
        c1.crearBanco(fEstudios);
        
        c2.rellenarFormularioPrestamos(fEmpresas);
        c2.crearBanco(fEmpresas);
        
        /*c1.start();
        c2.start();*/
        
        c1.lanzarCuentas();
        c2.lanzarCuentas();
        
    }

}
