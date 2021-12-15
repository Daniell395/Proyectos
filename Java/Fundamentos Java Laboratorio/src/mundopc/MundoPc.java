package mundopc;

import com.mundopc.*;


public class MundoPc {
    public static void main(String[] args) {
        Monitor monitor = new Monitor("Gamer",34);
        Teclado teclado = new Teclado("Cable","logitech");
        Raton raton = new Raton("Cable","logitech");
        Computadora computadora = new Computadora("acer",monitor,raton,teclado);

        Orden orden = new Orden();
        orden.agregarcomputadora(computadora);
        orden.mostrarOrden();
    }
}
