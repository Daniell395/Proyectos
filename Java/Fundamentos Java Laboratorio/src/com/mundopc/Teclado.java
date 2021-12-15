package com.mundopc;

public class Teclado extends DispositivoEntrada {
    
    private final int idTeclado;
    private static int contador_teclados;

    public Teclado(String tipoEntrada, String marca) {
        super(tipoEntrada, marca);
        this.idTeclado = ++Teclado.contador_teclados;
    }

    @Override
    public String toString() {
        return "Teclado [contador_teclados=" + contador_teclados + ", idTeclado=" + idTeclado + "]";
    }

}
