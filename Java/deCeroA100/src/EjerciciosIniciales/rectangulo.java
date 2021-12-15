package EjerciciosIniciales;
import java.util.Scanner;

public class rectangulo {
    public static void main(String[] args) {
        int alto, ancho, area, perimetro;
        
        try (Scanner foo = new Scanner(System.in)) {
            System.out.println("Proporciona el alto: ");
            alto= foo.nextInt();

            System.out.println("Proporciona el ancho: ");
            ancho = foo.nextInt();
        }
        area= alto * ancho;
        perimetro= (alto + ancho) * 2;

        System.out.println("Area: "+ area +"\n"+"Perimetro: "+perimetro);
    }
}
