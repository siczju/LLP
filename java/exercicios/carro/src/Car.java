
public class Car {
	private int rodas;
	private String Cor;

	public Car() {
		
	}
	// Getters
	public int GetRodas() {
		return this.rodas;
	}

	public String GetCor() {
		return this.Cor;
	}

	// Setters
	public void SetCor(String cor) {
		this.Cor = cor;
	}

	public void SetRodas(int rodas) {
		this.rodas = rodas;
	}
}