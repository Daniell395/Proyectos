package com.mundopc;

public class Monitor {
    private final int idMonitor;
    private String marca;
    private double tamaño;
    private static int contador_monitores;

    
    private Monitor() {
        this.idMonitor=++Monitor.contador_monitores;
    }


    public Monitor(String marca, double tamaño) {
        this();
        this.marca = marca;
        this.tamaño = tamaño;
    }


    public int getIdMonitor() {
        return idMonitor;
    }





    public String getMarca() {
        return marca;
    }


    public void setMarca(String marca) {
        this.marca = marca;
    }


    public double getTamaño() {
        return tamaño;
    }


    public void setTamaño(double tamaño) {
        this.tamaño = tamaño;
    }


    public int getContador_monitores() {
        return contador_monitores;
    }




    @Override
    public String toString() {
        return "Monitor [contador_monitores=" + contador_monitores + ", idMonitor=" + idMonitor + ", marca=" + marca
                + ", tamaño=" + tamaño + "]";
    }

    
    
}
