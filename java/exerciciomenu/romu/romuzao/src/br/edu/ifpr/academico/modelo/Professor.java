package br.edu.ifpr.academico.modelo;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

import br.edu.ifpr.academico.aplicacao.Main;

public class Professor extends Pessoa {
   static Scanner scanf1 = new Scanner(System.in);

   int registro;
   
   public Professor() {}
   public Professor(int registro, String nome, Endereço endereço) {
      super(nome, endereço);
      this.registro = registro;
   }

   public int getRegistro() {return registro;}
   public void setRegistro(int registro) {this.registro = registro;}
   
	public static void showProfessor(ArrayList<Professor> professor) {
		System.out.println(" -- MENU PARA PROFESSORES --\n");
		System.out.println(" 1 - Incluir \n 2 - Alterar\n 3 - Consulta \n 4 - Excluir \n 5 - Voltar\n");

		int choice = scanf1.nextInt();
		scanf1.nextLine();

		if (choice == 1)
			inserirProfessor(professor);
		else if (choice == 2)
			alterarProfessor(professor);
		else if (choice == 3)
			consultarProfessor(professor);
		else if (choice == 4)
			removerProfessor(professor);
	}

	public static Professor inserirProfessor(ArrayList<Professor> professor) {

		Professor professor1 = new Professor();
		Endereço endereco = new Endereço();

		System.out.println("Digite um registro:\n");

		boolean isValid = false;
		do {
			try {
				professor1.setRegistro(scanf1.nextInt());
				isValid = true;
				scanf1.nextLine(); // Limpa o buffer de entrada
			} catch (RuntimeException ex) {
				System.out.println("Digite um registro valido (numero inteiro)");
				scanf1.nextLine();
			}
		} while (!isValid);

		System.out.println("Digite um nome:");
		professor1.setNome(scanf1.nextLine());

		professor1.setEndereço(endereco.incluirEndereco());

		professor.add(professor1);

		System.out.println("\nPROFESSOR INSERIDO COM SUCESSO");

		return professor1;
	}

	public static void removerProfessor(ArrayList<Professor> professor) {

		System.out.println("Qual professor deseja excluir?\n");

		int professorRemoved = scanf1.nextInt();
		professor.remove(professorRemoved);
		System.out.println("\nALUNO EXCLUIDO COM SUCESSO");
	}

	public static void alterarProfessor(ArrayList<Professor> professor) {

		System.out.println("\nDigite o indice do Professor que voce quer alterar: \n");
		int index = scanf1.nextInt();

		professor.set(index, inserirProfessor(professor));
		professor.remove(index + 1);
	}

	public static void consultarProfessor(ArrayList<Professor> professor) {
		for (int i = 0; i < professor.size(); i++) {
			Professor objeto = professor.get(i);
			System.out.println(i + " : " + objeto + "\n");
		}

	}

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
