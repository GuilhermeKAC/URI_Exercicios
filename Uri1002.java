/*
 * Guilherme Kruszynski
 * 19/07/2019
 * URI 1002 - Área do Círculo
 */
package uri1002;

import java.util.Scanner;

public class Uri1002 {

    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        double A = in.nextDouble();
        double area = 3.14159 * Math.pow(A, 2);
        System.out.printf("A=%.4f%n", area);
    }
    
}
