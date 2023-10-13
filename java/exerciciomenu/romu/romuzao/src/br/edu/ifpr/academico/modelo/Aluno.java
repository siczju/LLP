package br.edu.ifpr.academico.modelo;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

public class Aluno extends Pessoa {
	
	static Scanner scanf1 = new Scanner(System.in);

   Endereço endereco = new Endereço();
   private ArrayList<Avaliacao> avaliacao = new ArrayList<>();;
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
   
   public ArrayList<Avaliacao> getAvaliacoes() {return avaliacao;}
   public void setAvaliacoes(ArrayList<Avaliacao> avaliacoes) {this.avaliacao = avaliacoes;}
   
   public void addAvaliacao(Avaliacao avaliacao) {this.avaliacao.add(avaliacao);
}
   
public static void showAluno(ArrayList<Aluno> aluno) {
	System.out.println(" -- MENU PARA ALUNOS --\n");
	System.out.println(" 1 - Incluir \n 2 - Alterar\n 3 - Consulta \n 4 - Excluir \n 5 - Voltar\n");

	int choice = scanf1.nextInt();
	scanf1.nextLine();

	if (choice == 1)
		inserirAluno(aluno);
	else if (choice == 2)
		alterarAluno(aluno);
	else if (choice == 3)
		consultarAluno(aluno);
	else if (choice == 4)
		removerAluno(aluno);

}

public static Aluno inserirAluno(ArrayList<Aluno> aluno) {

	Aluno aluno1 = new Aluno();
	Endereço endereco = new Endereço();
	System.out.println("Digite um nome:");
	aluno1.setNome(scanf1.nextLine());

	aluno1.setEndereço(endereco.incluirEndereco());

	System.out.println("Digite a matricula do aluno:");

	boolean isValid = false;

	do {
		try {
			aluno1.setMatricula(scanf1.nextInt());
			isValid = true;
		} catch (RuntimeException ex) {
			System.out.println("Digite uma matricula valida (numero inteiro)");
			scanf1.nextLine();
		}
	} while (!isValid);

	aluno.add(aluno1);

	System.out.println("\nALUNO INSERIDO COM SUCESSO");

	return aluno1;
}

public static void removerAluno(ArrayList<Aluno> aluno) {

	System.out.println("Qual aluno deseja excluir?\n");

	int alunoRemoved = scanf1.nextInt();
	aluno.remove(alunoRemoved);
	System.out.println("\nALUNO EXCLUIDO COM SUCESSO");
}

public static void alterarAluno(ArrayList<Aluno> aluno) {

	Endereço endereco = new Endereço();
	Aluno aluno1 = new Aluno();
	System.out.println("\nInsira o indice do Aluno que voce quer alterar: \n");
	int index = scanf1.nextInt();
	scanf1.nextLine();

	aluno.set(index, aluno1.inserirAluno(aluno));
	aluno.remove(aluno.size() - 1);

	System.out.println("\nALUNO ALTERADO COM SUCESSO");
}

public static void consultarAluno(ArrayList<Aluno> aluno) {
	for (int i = 0; i < aluno.size(); i++) {
		Aluno objeto = aluno.get(i);
		System.out.println(i + " : " + objeto + "\n");
	}

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
