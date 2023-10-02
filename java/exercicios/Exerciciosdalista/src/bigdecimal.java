import java.math.BigDecimal;
import java.math.RoundingMode;

public class bigdecimal {
 public static void main(String[] args) {
	 BigDecimal bd1 = BigDecimal.valueOf(10.103213), bd2 = BigDecimal.valueOf(2.2)
			.setScale(2, RoundingMode.HALF_EVEN);
	 bd1 = bd1.multiply(bd2);
	 
	 System.out.println(bd1);
	 
	 if(bd1.compareTo(bd2) == 0)
		 System.out.println("sao iguais!");
	 else 
		 System.out.println("sao diferentes");
	 	
 }
}
