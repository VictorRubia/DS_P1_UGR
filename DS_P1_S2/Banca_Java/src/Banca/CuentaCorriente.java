package Banca;

import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;

public class CuentaCorriente extends CuentaBancaria {

    int limite;
    
    CuentaCorriente(ArrayList<Prestamo> prestamos){
        super(prestamos);
        limite = 1500;
    }
    
    public void lanzarCuentas(){

        //  Lanzamos los préstamos como hebras
        for(int i = 0; i < prestamo.size(); i++){
            prestamo.get(i).start();
        }
        
        int anio = 2021;
        
        while(!prestamo.isEmpty()){
            try {
                Thread.sleep(1000); //Dormimos 1 segundo
            } catch (InterruptedException ex) {
                Logger.getLogger(CuentaCorriente.class.getName()).log(Level.SEVERE, null, ex);
            }
            
            System.out.println("[P. EMPRESAS PENDIENTES] en el año " + anio);

            //  Ordenamos los préstamos por años y los mostramos
            ordenarPrestamos();
            anio++;
    
            //  Procesamos los prestamos que ya se han terminado
            for(int i = prestamo.size()-1; i >= 0; i--){
                if(prestamo.get(i).getAnios() == 0){
                    System.out.println("[P. EMPRESAS] Su prestamo con id " + prestamo.get(i).obtenerID() + " y cantidad " + prestamo.get(i).getCantidad() + " ha vencido su plazo." );
                    prestamo.remove(i);
                }
            }

        }

        System.out.println("Este cliente NO posee préstamos PENDIENTES.");

        //  Terminamos las hebras
        for(int i = 0; i < prestamo.size(); i++){
            prestamo.get(i).stop();
        }


    }


}