package Banca;

import java.util.ArrayList;

public abstract class CuentaBancaria {

    protected ArrayList<Prestamo> prestamo;
    
    CuentaBancaria(ArrayList<Prestamo> prestamos){
        prestamo = prestamos;
    }
    
    abstract public void lanzarCuentas();
    
    protected void ordenarPrestamos(){
        ArrayList<Integer> aux = new ArrayList<Integer>();
        

        // Añadimos en el array auxiliar los años que tienen prestamos.
        for(int i = 0; i < prestamo.size() ; i++){
            aux.add(prestamo.get(i).getAnios());
        }
        
        // Ordenamos por años los prestamos
        for(int  i = 0; i < aux.size(); i++){
            int min = 1000;
            int id = -1;
            int num_prest = -1;
            for(int j = 0; j < aux.size(); j++){
                if(aux.get(j) < min){
                    min = aux.get(j);
                    id = prestamo.get(j).obtenerID();
                    num_prest = j;
                }
            }
            aux.set(num_prest, 1000); // El prestamo que se ordena ya no se tiene en cuenta
            System.out.println("Prestamo " +  id + " quedan "+ min + " años.");
        }
    }
    
}