
public class Functions {
	int number = 0;
	
	void input() {
		System.out.println("Type a number and i'll tell u if it's par or impar");
	}
	
	void inputPar() {
		System.out.println(number + " it's a par number!");
	}
	

	void inputImpar() {
		System.out.println(number + " it's a impar number!");
	}
	
	void verifyTheNumber() {
		if(number % 2 == 0)
			inputPar();
		else
			inputImpar();
	}
}
