package com.mundopc;

public class Raton extends DispositivoEntrada{
    private final int idRaton;
    private static int contador_ratones;

    
    public Raton(String tipoEntrada, String marca) {
        super(tipoEntrada, marca);
        this.idRaton=++Raton.contador_ratones;
    }

    @Override
    public String toString() {
        return "Raton [contador_ratones=" + contador_ratones + ", idRaton=" + idRaton + "]";
    }

    
}


