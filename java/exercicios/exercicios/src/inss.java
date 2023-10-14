import java.util.Locale;
import java.util.Scanner;

public class inss {

	public static void main(String[] args) {
		int categoria;
		double salario = 0, descontoINSS = 0, aliquotaINSS = 0;
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		System.out.println("1: privado e público ingressantes a partir de 2013\n" + 
		                   "2: publico antes de 2013 e seu salario bruto para calcular e mostrar:");

		categoria = scan.nextInt();
		salario = scan.nextDouble();
		
		if(categoria == 1) {  
		descontoINSS += (salario >= 3134.41 && salario <= 6101.06) ? ((salario - 3134.40) * (14 / 100) + 297.77 ) : 0;
		descontoINSS += (salario >= 6101.06) ? (713.09 / salario) * 100 : 0;	
		descontoINSS +=	(salario >= 1045) ? 1045 * (7.5 / 100) : 0;
		descontoINSS += (salario >= 1045.01 && salario <= 2089.60) ? 1044.60 * (9 / 100) : 0;
	    descontoINSS += (salario >= 2089.61 && salario <= 3134.40) ? 1044.80 * (12 / 100) : 0;
		aliquotaINSS += (descontoINSS / salario) * 100;
		}
		
			
		
		System.out.println("categoria: " + categoria + "\nsalario bruto:" + salario + "\ndesconto inss:" + descontoINSS + "\naliquota:" + aliquotaINSS);
	}

}
