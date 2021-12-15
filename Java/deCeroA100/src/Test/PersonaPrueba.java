package Test;

import java.util.Date;

import Dominio.*;

public class PersonaPrueba {
    public static void main(String[] args) {
        Cliente cliente1 = new Cliente("Daniel",'M',22,"calle41", new Date(),true);
        System.out.println("Cliente: "+ cliente1);

        
    }

}
