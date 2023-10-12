package br.edu.ifpr.academico.modelo;

import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

public class Aluno extends Pessoa {
   Endereço endereco;
   private List<Avaliacao> avaliacao = new ArrayList<>();;
   private float media;
   private int matricula;
   
   public Aluno(){ }
   public Aluno(String nome, Endereço endereco, int matricula){
      super(nome,endereco);
      this.matricula = matricula;
   }
   
   public double getMedia() { return media;}
   public void setMedia(float media) {this.media = media;}
   
   public int getMatricula() {return matricula;}
   public void setMatricula(int matricula) {this.matricula = matricula;}
   
   public List<Avaliacao> getAvaliacoes() {return avaliacao;}
   public void setAvaliacoes(List<Avaliacao> avaliacoes) {this.avaliacao = avaliacoes;}
   
   public void addAvaliacao(Avaliacao avaliacao) {this.avaliacao.add(avaliacao);
}
   
@Override
public int hashCode() {
	final int p = 31;
	int result = super.hashCode();
	result = p * result + Objects.hash(matricula);
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
	return "Aluno [matricula= " + getMatricula() + "] [Nome: " + getNome() + "] "
	      + " [Endereco: " + getEndereço() + " avaliacoes:" + avaliacao + " media: [" + media + "]";	
}
}
