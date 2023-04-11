
public class Aula04 {

	public static void main(String[] args) {
		Caneta c1 = new Caneta("BIC", "Amarela", 0.4f);
		 c1.status();
		 
			/*Car Fusca = new Car();
			Car Corsa = new Car("Vermelho");
			Corsa.SetRodas(2);
			Car Opala = new Car(4, "Cinza");*/
			Car Gol = new Car();
			
			Gol.Rodas = 4;
			
			System.out.println(Gol.GetRodas());
			
			/*System.out.println("Fuscao: " + Fusca.GetRodas() + Fusca.GetCor());
			System.out.println("Corsao: " + Corsa.GetCor() + Corsa.GetRodas());
			System.out.println("Golzao: " + Gol.GetRodas());
			System.out.println("Opalao: " + Opala.GetCor() + Opala.GetRodas());*/
	}

}
