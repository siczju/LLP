
public class Banco {
	public int numConta;
	protected String tipo;
	private String dono;
	private float saldo;
	private boolean status;
	
	public Banco() {
		this.saldo = 0;
		this.status = false;
	}
	
	public void setNumConta(int numConta) {
		this.numConta = numConta;
	}
	
	public int getNumConta() {
		return this.numConta;
	}
	
	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
	
	public String getTipo() {
		return this.tipo;
	}
	
	public void setDono(String dono) {
		this.dono = dono;
	}
	
	public String getDono() {
		return this.dono;
	}
	
	public void setSaldo(int saldo) {
		this.saldo = saldo;
	}
	
	public float getSaldo() {
		return this.saldo;
	}
	
	public void setStatus(boolean status) {
		this.status = status;
	}
	
	public boolean getStatus() {
		return this.status;
	}
	
	// cc -> conta corrente
	// cp -> conta poupança
	
	public void abriConta(String tipo) {
		setTipo(tipo);
		setStatus(true);
		if(tipo == "cc")
			setSaldo(50);
		else if (tipo == "cp")
			setSaldo(150);
	}
	
	public void fecharConta() {
		if(saldo > 0)
			System.out.println("have money in your account");
		else if(saldo < 0)
			System.out.println("your account is in debt");
		else
			setStatus(false);
	}
	
	/*public int depositar(int money) {
		if(status == true)
			
	}
	public int sacar() {
		
	}

	public int pagarMensal() {
		
	}*/
}

