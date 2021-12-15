package com.mundopc;
public class Computadora {

    private final int idComputadora;
    private String nombre;
    private Monitor monitor;
    private Raton raton;
    private Teclado teclado;
    private static int contador_computadoras;

    private Computadora() {
        this.idComputadora=++Computadora.contador_computadoras;
    }

    public Computadora(String nombre, Monitor monitor, Raton raton, Teclado teclado) {
        this();
        this.nombre = nombre;
        this.monitor = monitor;
        this.raton = raton;
        this.teclado = teclado;
    }

    public int getIdComputadora() {
        return idComputadora;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public Monitor getMonitor() {
        return monitor;
    }

    public void setMonitor(Monitor monitor) {
        this.monitor = monitor;
    }

    public Raton getRaton() {
        return raton;
    }

    public void setRaton(Raton raton) {
        this.raton = raton;
    }

    public Teclado getTeclado() {
        return teclado;
    }

    public void setTeclado(Teclado teclado) {
        this.teclado = teclado;
    }

    @Override
    public String toString() {
        return "Computadora [idComputadora=" + idComputadora + ", monitor=" + monitor + ", nombre=" + nombre
                + ", raton=" + raton + ", teclado=" + teclado + "]";
    }

    
    
}
