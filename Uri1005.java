/*
 * Guilherme Kruszynski
 * 19/07/2019
 * URI 1005 - Média
 */

package uri1005;

import java.util.Scanner;

public class Uri1005 {

    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        double a = in.nextDouble();
        double b = in.nextDouble();
        double media = (((a * 3.5) + (b * 7.5)) / 11);
        
        System.out.printf("MEDIA = %.5f%n", media);
                
    }
    
}