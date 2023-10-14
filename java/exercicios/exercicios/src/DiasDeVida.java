import java.math.BigInteger;
import java.util.Scanner;

public class DiasDeVida {

	public static void main(String[] args) {
		
		 BigInteger anos = BigInteger.valueOf(0), meses = BigInteger.valueOf(0), meses_dias = BigInteger.valueOf(30), anos_dias = BigInteger.valueOf(365), dias = BigInteger.valueOf(0);
		
		System.out.println("Diga-me sua idade em anos, meses e dias: "); 
		Scanner scanf = new Scanner(System.in);
		
		 anos = scanf.nextBigInteger();
		 meses = scanf.nextBigInteger();
		 dias = scanf.nextBigInteger();

		 anos = anos.multiply(anos_dias);
		 meses = meses.multiply(meses_dias);
		 
		 System.out.println("O total de dias da sua vida e: " + (dias.add(meses)).add(anos));
		 scanf.close();
		 
	}

}
