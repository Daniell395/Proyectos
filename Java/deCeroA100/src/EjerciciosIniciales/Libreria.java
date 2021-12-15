package EjerciciosIniciales;
import java.util.Scanner;

public class Libreria {
    public static void main(String[] args)throws Exception {
        try (Scanner console = new Scanner(System.in)) {
            System.out.println("Proporciona el nombre: ");
            var name = console.nextLine();
            System.out.println(name);

            System.out.println("Proporciona el id:");
            var id = Integer.parseInt(console.nextLine());
            System.out.println(id);

            System.out.println("Proporciona el precio: ");
            var price = Double.parseDouble(console.nextLine());
            System.out.println(price);

            System.out.println("Proporciona el envio gratuito: ");
            Boolean shipment = Boolean.parseBoolean(console.nextLine());
            System.out.println(shipment);

            System.out.println(name + " #"+price +"\n"+ "Precio: "+ "$"+ price + "\n"+ "Envio Gratuito: "+ shipment);
        }


    }
}
