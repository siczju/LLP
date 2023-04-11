
public class Car {
	private int Rodas;
	private String Cor;

	public Car() {
		
	}
	// Getters
	public int GetRodas() {
		return this.Rodas;
	}

	public String GetCor() {
		return this.Cor;
	}

	// Setters
	public void SetCor(String cor) {
		this.Cor = cor;
	}

	public void SetRodas(int rodas) {
		this.Rodas = rodas;
	}
}