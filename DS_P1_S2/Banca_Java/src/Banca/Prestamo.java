package Banca;

public abstract class Prestamo extends Thread {
    
    protected int id;
    protected int anios;
    protected int cantidad;
    
    Prestamo(int _id, int _cantidad, int _anios){
        id = _id;
        anios = _anios;
        cantidad = _cantidad;
    }
    
    public int getCantidad(){
        return cantidad;
    }
    
    public int getAnios(){
        return anios;
    }

    public int obtenerID(){
        return id;
    }

    public void setAnios(int _anios){
        anios = _anios;
    }

    @Override
    public void run(){
        try{
            while(true){
                // Generamos la espera que va a tener la hebra antes de que le quite un año
                // long espera = Math.round(Math.random()*1000);
                Thread.sleep(1000);
                // espera es una analogía del tiempo que tarda un año en pasar.
                if(anios > 0)
                    anios--;
            }
        }catch(Exception e){
            e.getStackTrace();
        }
    }
    
}