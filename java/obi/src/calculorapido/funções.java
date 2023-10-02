package calculorapido;

public class funções {

	public int SomaDigitos(int num) {
		int soma = 0;
		
		while(num > 0) {
		soma += num % 10;
		num /= 10;
		}
		return soma;
	}
	
	public int Contador(int s, int a,int b) {
		int contador = 0;
		for(int num = a; num <= b; num++) {
			if(SomaDigitos(num) == s) {
				contador++;
			}
		}
		return contador;
	}
		
}
