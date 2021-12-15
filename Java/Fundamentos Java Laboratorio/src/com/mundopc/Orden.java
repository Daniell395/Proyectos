package com.mundopc;

public class Orden {
    private final int idOrden;
    private Computadora[] computadoras;
    private static int contador_ordenes;
    private  int contador_computadoras;
    private static final int MAX_COMPUTADORAS = 10;
    
    public Orden() {
        this.idOrden=++Orden.contador_ordenes;
        this.computadoras=new Computadora[Orden.MAX_COMPUTADORAS];
    }

    public void agregarcomputadora(Computadora computadora) {
        if (this.contador_computadoras<Orden.MAX_COMPUTADORAS) {
            this.computadoras[this.contador_computadoras++]=computadora;
        }
        else System.out.println("se ha superado el limite: "+Orden.MAX_COMPUTADORAS);
    }

    public void mostrarOrden() {
        System.out.println("orden #: "+this.idOrden);
        for (int i = 0; i < this.contador_computadoras; i++) {
            System.out.println(this.computadoras[i]);
        }

    }


}
