package EjerciciosIniciales;
public class Caja {
    int ancho,alto,profundo;

    public Caja() {

    }

    public Caja(int ancho, int alto, int profundo) {
        this.ancho = ancho;
        this.alto = alto;
        this.profundo = profundo;
    }

    public int volumen(){
        return ancho*alto*profundo;
    }

    
}
