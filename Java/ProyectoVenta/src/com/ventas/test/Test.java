package com.ventas.test;

import com.ventas.*;

public class Test {
    public static void main(String[] args) {
        Producto objprod1 = new Producto("camisa",50000);
        Producto objprod2 = new Producto("pantalon",10000);

        Orden objOrden = new Orden();
        objOrden.agregarProducto(objprod1);
        objOrden.agregarProducto(objprod2);
        objOrden.mostrarOrden();
    }   

}
