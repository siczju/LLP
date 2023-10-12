package br.edu.ifpr.academico.aplicacao;

import java.util.ArrayList;
import java.util.Scanner;

import br.edu.ifpr.academico.modelo.Aluno;
import br.edu.ifpr.academico.modelo.Endereço;
import br.edu.ifpr.academico.modelo.Pessoa;
import br.edu.ifpr.academico.modelo.Professor;

public class Main {
	static Scanner scanf1 = new Scanner(System.in);
	static boolean isValid = false;
	
	public Main() {
		Menuzao();
	}

	public static void main(String[] args) {
		new Main();
	}

	public void Menuzao() {
		ArrayList<Pessoa> pessoa = Principal.listaMain();
		ArrayList<Aluno> aluno = new ArrayList<>();
		ArrayList<Professor> professor = new ArrayList<>();

		for (Pessoa p : pessoa)
			if (p instanceof Aluno)
				aluno.add((Aluno) p);

		for (Pessoa p : pessoa)
			if (p instanceof Professor)
				professor.add((Professor) p);

		int usercode;
		do {
			usercode = showMenu();
			if (usercode == 1)
				showAluno(aluno);
			else if (usercode == 2)
				showProfessor(professor);
			else
				break;
		} while (usercode == 1 || usercode == 2);
	}

	// --------------- MOSTRAR MENU PRINCIPAL -----------------------

	public static int showMenu() {
		int usercode;

		System.out.println("|- - - - - - - -|");
		System.out.println("| 1 - Aluno     |\n| 2 - Professor |\n| 3 - Sair      |");
		System.out.println("|- - - - - - - -|\n");
		System.out.printf("Selecione: (1 - 2): \n");

		usercode = scanf1.nextInt();
		scanf1.nextLine();

		return usercode;
	}

	// --------------- MOSTRAR MENU DE ALUNO E DE PROFESSOR -----------------------

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
		else if (choice == 5)
			showMenu();
	}

	// --------------- INSERIR ALUNO E PROFESSOR -----------------------

	public static void inserirAluno(ArrayList<Aluno> aluno) {

		consultarAluno(aluno);

		Aluno aluno1 = new Aluno();
		System.out.println("Digite um nome:");
		aluno1.setNome(scanf1.nextLine());

		aluno1.setEndereço(incluirEndereco());

		System.out.println("Digite a matricula do aluno:");

		isValid = false;

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
	}

	public static Professor inserirProfessor(ArrayList<Professor> professor) {

		consultarProfessor(professor);

		Professor professor1 = new Professor();

		System.out.println("Digite um registro:\n");

		isValid = false;
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

		professor1.setEndereço(incluirEndereco());

		professor.add(professor1);

		System.out.println("\nPROFESSOR INSERIDO COM SUCESSO");

		return professor1;
	}

	// --------------- REMOVER ALUNO E PROFESSOR -----------------------

	public static void removerAluno(ArrayList<Aluno> aluno) {

		consultarAluno(aluno);

		System.out.println("Qual aluno deseja excluir?\n");

		int alunoRemoved = scanf1.nextInt();
		aluno.remove(alunoRemoved);
		System.out.println("\nALUNO EXCLUIDO COM SUCESSO");
	}

	public static void removerProfessor(ArrayList<Professor> professor) {

		consultarProfessor(professor);

		System.out.println("Qual professor deseja excluir?\n");

		int professorRemoved = scanf1.nextInt();
		professor.remove(professorRemoved);
		System.out.println("\nALUNO EXCLUIDO COM SUCESSO");
	}

	// --------------- ALTERAR ALUNO E PROFESSOR -----------------------

	public static void alterarAluno(ArrayList<Aluno> aluno) {

		consultarAluno(aluno);

		System.out.println("\nInsira o INDEX do Aluno que você quer alterar: \n");
		int index = scanf1.nextInt();

		System.out.println("Agora digite o novo NOME, novo ENDEREÇO e a nova MATRICULA");

		aluno.set(index, new Aluno(scanf1.next(), incluirEndereco(), scanf1.nextInt()));

		System.out.println("\nALUNO ALTERADO COM SUCESSO");
	}

	public static void alterarProfessor(ArrayList<Professor> professor) {

		consultarProfessor(professor);

		System.out.println("\nDigite o indice do Professor que voce quer alterar: \n");
		int index = scanf1.nextInt();

		professor.set(index, inserirProfessor(professor));
		professor.remove(index + 1);
	}

	// --------------- ALTERAR ALUNO E PROFESSOR -----------------------

	public static void consultarAluno(ArrayList<Aluno> aluno) {
		for (int i = 0; i < aluno.size(); i++) {
			Aluno objeto = aluno.get(i);
			System.out.println(i + " : " + objeto + "\n");
		}

	}

	public static void consultarProfessor(ArrayList<Professor> professor) {
		for (int i = 0; i < professor.size(); i++) {
			Professor objeto = professor.get(i);
			System.out.println(i + " : " + objeto + "\n");
		}

	}

	// --------------- INCLUIR ENDEREÇO -----------------------

	public static Endereço incluirEndereco() {	
		System.out.println("Digite a rua:");
		String rua = scanf1.nextLine();

		System.out.println("Digite o numero da rua:");
		
		int numero = 0;
		do {
			try {
				numero = scanf1.nextInt();
				isValid = true;
				scanf1.nextLine();
			}catch(RuntimeException ex) {
			System.out.println("Digite um numero de residencia valido (numero inteiro)");
			scanf1.nextLine(); // Limpa o buffer de entrada
			}
		}while(!isValid);	

		System.out.println("Digite o bairro:");
		String bairro = scanf1.nextLine();
		
		Endereço end = new Endereço(numero, rua, bairro);
		return end;
	}
}
