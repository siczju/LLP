package br.edu.ifpr.academico.modelo;

import java.util.Objects;

public class Pessoa {
   String nome;
   Endereço endereço;
   
   public Pessoa() {}
   public Pessoa(String nome, Endereço endereço) {
      this.nome = nome;
      this.endereço = endereço;
   }

   public String getNome() {return nome;}
   public void setNome(String nome) {this.nome = nome;}

   public Endereço getEndereço() {return endereço;}
   public void setEndereço(Endereço endereço) {this.endereço = endereço;}
   
   @Override
   public int hashCode() {
      return Objects.hash(endereço, nome);
   }
   
   @Override
   public boolean equals(Object obj) {
      if (this == obj) return true;
      if (obj == null)return false;
      if (getClass() != obj.getClass()) return false;
      Pessoa other = (Pessoa) obj;
      return Objects.equals(endereço, other.endereço) && Objects.equals(nome, other.nome);
   }

   @Override
   public String toString() {
      return "Pessoa [nome= " + getNome() + "] [endereco=" + getEndereço();
   }
}
