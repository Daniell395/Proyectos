package com.ventas;

public class Orden {
    private int idOrden;
    private Producto productos[];
    private int contador_productos;
    private static int contador_ordenes;
    private static int MAX_PRODUCTOS = 10;

    public Orden(){
        this.idOrden = ++Orden.contador_ordenes;
        this.productos = new Producto [Orden.MAX_PRODUCTOS];

    }

    public void agregarProducto(Producto producto) {
        if (this.contador_productos<Orden.MAX_PRODUCTOS){
            this.productos[this.contador_productos++] = producto;
        }else{
            System.out.println("se ha superado la cantidad maxima de productos "+ Orden.MAX_PRODUCTOS);
        }
    }

    public double calcularTotal() {
        double total= 0 ;
        for (int i = 0; i < this.contador_productos; i++) {
            total += this.productos[i].getPrecio();

        }
        return total;
    }

    public void mostrarOrden() {
        double totalorden= this.calcularTotal();
        System.out.println("id Orden: "+ this.idOrden);
        System.out.println("Total de la Orden: $"+totalorden);
        System.out.println("productos ordenados: ");
        for (int i = 0; i < this.contador_productos; i++) {
            System.out.println(this.productos[i]);
            
        }
    }

}
