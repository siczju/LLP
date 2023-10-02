package ex34;

public class Aliquota {

	private double[] faixas   = new double[] {1045, 2089.60, 3134.40, 6101.06, 10448, 20896, 40747};
	private double[] efetivas = new double[] {0.075 , 0.09, 0.12, 0.14, 0.145, 0.165, 0.19, 0.22};
			                          
	public Aliquota ( ) {}
	
	public double efetiva(Funcionario func) {
		  int categoria  = func.getCategoria();
		  double salario = func.getSalarioBruto();
		  
		   if(salario <= faixas[0])
			   return  efetivas[0];
		   if(categoria == 1 && salario > faixas[3]) 
			   return (713.09 / salario);
		   
		   double desconto = faixas[0] * efetivas [0];
		   
		   for(int i = 0; salario > faixas[i]; i++) {
			   if(salario > faixas[i] && salario <= faixas[i+1]) {
				   desconto += (salario - faixas[i]) * efetivas[i+1];
				   	break;
			   }
			   desconto += (faixas[i+1] - faixas[i]) * efetivas[i+1];
		   } 
		   return (desconto / salario);
	   }
	
	public double progressiva(Funcionario func, double inss) {
		   double salario = func.getSalarioBruto() - inss;
		   return (salario <= 1903.98) ? 0 :
 				  (salario >= 1903.99 && salario <= 2826.65) ? 0.075 :
 				  (salario >= 2826.66 && salario <  3751.05) ? 0.150 :
 				  (salario >= 3751.05 && salario <  4664.68) ? 0.225 : 0.275;
	}
}