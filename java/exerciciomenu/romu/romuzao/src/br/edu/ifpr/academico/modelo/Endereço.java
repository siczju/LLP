package br.edu.ifpr.academico.modelo;

import java.util.Objects;
import java.util.Scanner;

public class Endereço {
	
	static Scanner scanf1 = new Scanner(System.in);
	
   int streetNumber;
   String streetName;
   String bairro;
 
   public Endereço(){}
   public Endereço(int streetNumber, String streetName, String bairro) {
      this.streetNumber = streetNumber;
      this.streetName = streetName;
      this.bairro = bairro;
   }
   
 public int getStreetNumber() {return streetNumber;}
 public void setStreetNumber(int streetNumber) {this.streetNumber = streetNumber;}
 
 public String getStreetName() {return streetName;}
 public void setStreetName(String streetName) {this.streetName = streetName;}
 
 public String getBairro() {return bairro;}
 public void setBairro(String bairro) {this.bairro = bairro;}
 
	public static Endereço incluirEndereco() {
		System.out.println("Digite a rua:");
		String rua = scanf1.nextLine();

		System.out.println("Digite o numero da rua:");
		boolean isValid = false;
		int numero = 0;
		do {
			try {
				numero = scanf1.nextInt();
				isValid = true;
				scanf1.nextLine();
			} catch (RuntimeException ex) {
				System.out.println("Digite um numero de residencia valido (numero inteiro)");
				scanf1.nextLine(); // Limpa o buffer de entrada
			}
		} while (!isValid);

		System.out.println("Digite o bairro:");
		String bairro = scanf1.nextLine();

		Endereço end = new Endereço(numero, rua, bairro);
		return end;
	}
 
@Override
public int hashCode() {return Objects.hash(bairro, streetName, streetNumber);}

@Override
public boolean equals(Object obj) {
	if (this == obj)return true;
	if (obj == null)return false;
	if (getClass() != obj.getClass())return false;
	Endereço other = (Endereço) obj;
	return Objects.equals(bairro, other.bairro) && Objects.equals(streetName, other.streetName)
			&& streetNumber == other.streetNumber;
}
@Override
public String toString() {return " " + getStreetName() + ", " + getStreetNumber() + ", " +  getBairro() + "]";}
}

