package br.edu.ifpr.academico.modelo;

import java.util.Objects;

public class Professor extends Pessoa {
   int registro;
   
   public Professor() {}
   public Professor(int registro, String nome, Endereço endereço) {
      super(nome, endereço);
      this.registro = registro;
   }

   public int getRegistro() {return registro;}
   public void setRegistro(int registro) {this.registro = registro;}

   @Override
   public int hashCode() { return Objects.hash(registro);}

   @Override
   public boolean equals(Object obj) {
      if (this == obj)return true;
      if (obj == null)return false;
      if (getClass() != obj.getClass())return false;
      Professor other = (Professor) obj;
      return registro == other.registro;
   }

   @Override
   public String toString() {
      return "Professor [registro= " + getRegistro() + "]" + "] [Nome: " + getNome() + "] [Endereco: " + getEndereço();
   }
}
