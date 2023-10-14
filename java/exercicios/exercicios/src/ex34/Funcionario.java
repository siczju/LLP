package ex34;

public class Funcionario {
	private double salarioBruto;
	private int categoria;
	
	public Funcionario () {}
	public double salario (double INSS, double IRRF) {
		return this.salarioBruto - INSS - IRRF;
	}
	
	public double getSalarioBruto() {return salarioBruto;}
	public void setSalarioBruto(double salarioBruto) {
		this.salarioBruto = salarioBruto;
	}
	public int getCategoria() {return categoria;}
	public void setCategoria(int categoria) {
		this.categoria = categoria;
	}
}