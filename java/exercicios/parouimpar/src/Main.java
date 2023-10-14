import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		Functions disaster = new Functions();
		
		disaster.input();
		
		disaster.number = scan.nextInt();
		
		disaster.verifyTheNumber();
		scan.close();
	}

}
