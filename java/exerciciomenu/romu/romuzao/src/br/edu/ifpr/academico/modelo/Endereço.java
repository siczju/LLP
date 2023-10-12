package br.edu.ifpr.academico.modelo;

import java.util.Objects;

public class Endereço {

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

