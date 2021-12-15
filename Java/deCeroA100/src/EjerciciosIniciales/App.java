package EjerciciosIniciales;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        try (Scanner consola = new Scanner(System.in)) {
            System.out.println("Escriba el titulo");
            var titulo = consola.nextLine();
            System.out.println("Escriba el autor");
            var autor = consola.nextLine();
            System.out.println(titulo + " fue escrito por: " + autor);
        }
        
    }
}
