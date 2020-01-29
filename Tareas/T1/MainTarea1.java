package main;
/* @author Jessica Elizabeth Botón Pérez
 * ID: 201800535    
 * USAC */
import java.util.Scanner;

public class MainTarea1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int m = 0;
        System.out.println("===================================");
        System.out.println("\tB I E N V E N I D O");
        System.out.println("===================================");
        System.out.print("TAMAÑO DE LA MATRIZ\nIngresa un número: ");
        try {
            m = in.nextInt();
        } catch (Exception e) {
            System.out.println("\nDato no válido");
        }

        //For encargado de los saltos de linea
        for (int i = 0; i < m; i++) {           
            System.out.print("\n");
            
            //Llenado de la Primera y ultima Fila
            if (i == 0 || i == m - 1) {         
                for (int j = 0; j < m; j++) {
                    System.out.print("1  ");
                }  
                
            //Llenado del Resto de filas
            } else {                            
                for (int j = 0; j < m; j++) {   
                    if (j == 0 || j == m - 1) {
                        System.out.print("1  ");//Orillas
                    } else {
                        System.out.print("   ");//Dentro
                    }
                }
            }            
        }            
        System.out.print("\n");
    }
}
/* MATRIZ NORMAL
*        for (int i = 0; i < m; i++) {
*            for (int j = 0; j < m; j++) {
*                System.out.print("1  ");
*            }
*            System.out.print("\n");
*        }
*        System.out.println("El numero es: " + m);
*/
