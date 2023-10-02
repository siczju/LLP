package calculorapido;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		funções f = new funções();
		
		int s = scan.nextInt();
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		int resultado = f.Contador(s, a, b);
		System.out.println("\n" + resultado);
	}
	
}
