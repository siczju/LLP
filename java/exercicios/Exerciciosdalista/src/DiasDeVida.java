import java.util.Scanner;

public class DiasDeVida {

	public static void main(String[] args) {
		
		int anos, anos_dias = 365, meses, meses_dias = 30, dias;
		
		System.out.println("Diga-me sua idade em anos, meses e dias: "); 
		Scanner scanf = new Scanner(System.in);
		
		 anos = scanf.nextInt();
		 meses = scanf.nextInt();
		 dias = scanf.nextInt();
		 
		 anos *= anos_dias;
		 meses = 12 - meses;
		 meses *= meses_dias;
		 
		 System.out.println("O total de dias da sua vida e: " + (dias + meses + anos));
		 
	}

}
