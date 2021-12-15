package EjerciciosIniciales;
import java.util.Scanner;

public class Mayorde2numeros {
    public static void main(String[] args) {
        int numero1, numero2;

        try (Scanner s = new Scanner(System.in)) {
            System.out.println("Proporciona el numero1: ");
            numero1= s.nextInt();
            System.out.println("Proporciona el numero2: ");
            numero2= s.nextInt();
        }
        if (numero1>numero2) {
            System.out.println("El numero mayor es: "+ numero1);
        }else{
            System.out.println("El numero mayor es: "+ numero2);
        }
        
    }
}
