package br.edu.ifpr.academico.aplicacao;

import java.util.ArrayList;
import java.util.Scanner;

import br.edu.ifpr.academico.modelo.Aluno;
import br.edu.ifpr.academico.modelo.Endereço;
import br.edu.ifpr.academico.modelo.Pessoa;
import br.edu.ifpr.academico.modelo.Professor;

public class Main {
	static Scanner scanf1 = new Scanner(System.in);

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

		Aluno aluno1 = new Aluno();
		Professor professor1 = new Professor();

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
				aluno1.showAluno(aluno);
			else if (usercode == 2)
				professor1.showProfessor(professor);
			else
				break;
		} while (usercode == 1 || usercode == 2);
	}

	// --------------- MOSTRAR MENU PRINCIPAL -----------------------

	public static int showMenu() {
		int usercode;

		System.out.println("|- - - - - - - -|");
		System.out.println("| 1 - Aluno     |\n" +
						   "| 2 - Professor |\n" +
						   "| 3 - Sair      |");
		System.out.println("|- - - - - - - -|\n");
		System.out.printf("Selecione: (1 - 2): \n");

		usercode = scanf1.nextInt();
		scanf1.nextLine();

		return usercode;
	}

}
