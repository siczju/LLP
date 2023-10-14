package br.edu.ifpr.academico.modelo;

import java.util.Objects;

public class Aluno extends Pessoa {
   private int matricula;
   
   public Aluno() {}
   public Aluno(int matricula, String nome, Endereço endereço) {
      super(nome, endereço);
      this.matricula = matricula;
   }

public int getMatricula() {return matricula;}
public void setMatricula(int matricula) {this.matricula = matricula;}

@Override
public int hashCode() {
	final int prime = 31;
	int result = super.hashCode();
	result = prime * result + Objects.hash(matricula);
	return result;
}

@Override
public boolean equals(Object obj) {
	if (this == obj)return true;
	if (!super.equals(obj))return false;
	if (getClass() != obj.getClass())return false;
	Aluno other = (Aluno) obj;
	return Objects.equals(matricula, other.matricula);
}

@Override
public String toString() {
	return "Aluno [matricula= " + getMatricula() + "] [Nome: " + getNome() + "] [Endereco: " + getEndereço();	
}
}
