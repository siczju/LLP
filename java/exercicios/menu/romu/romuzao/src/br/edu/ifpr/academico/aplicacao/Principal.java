package br.edu.ifpr.academico.aplicacao;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Random;

import br.edu.ifpr.academico.modelo.Aluno;
import br.edu.ifpr.academico.modelo.Avaliacao;
import br.edu.ifpr.academico.modelo.Endereço;
import br.edu.ifpr.academico.modelo.Pessoa;
import br.edu.ifpr.academico.modelo.Professor;
import comparadores.CompararNomeDePessoa;

public class Principal {
   
	 public static ArrayList<Pessoa> listaMain(){
	
	  Endereço end1 = new Endereço(90, "Eliane Alvin Dias", "Colonia");
	  Endereço end2 = new Endereço(29, "Rio Branco", "Centro");
	  Endereço end3 = new Endereço(47, "Ceara", "Jardim Sao Fernando");
	  Endereço end4 = new Endereço(30, "Winston Churchill", "Imperio do Sol");
	  Endereço end5 = new Endereço(20, "Banana", "Campos");
      Endereço end6 = new Endereço(59, "Vidro", "Lagos"); 
	  
	  
      Aluno aluno1 = new Aluno("Julio", end1, 07);
      Aluno aluno2 = new Aluno("Nelson", end2, 16);
      Aluno aluno3 = new Aluno("Julio", end3, 05);
      Aluno aluno4 = new Aluno("Jorge", end4, 02);
      Aluno aluno5 = new Aluno("Carlos", end5, 01);
      Aluno aluno6 = new Aluno("Leleco", end6, 07);
      
      
      Professor professor1 = new Professor(42, "Claudio", end3);
      Pessoa professor2 = new Professor(78, "Mario", end4);
      
      Pessoa pessoa1 = new Pessoa("Frederico", end2);
      Pessoa pessoa2 = new Pessoa("Jorge", end1);
      
      ArrayList<Pessoa> pessoas = new ArrayList<>();
      
      pessoas.add(aluno1);
      pessoas.add(aluno2);
       
      pessoas.add(professor1);
      pessoas.add(professor2);
       
      pessoas.add(pessoa1);
      pessoas.add(pessoa2);
       
      //System.out.println("qtde de objetos na lista: " + pessoas.size() + "\n");

      //for (Pessoa pessoa : pessoas) {System.out.println(pessoa);}
      
      Avaliacao av = new Avaliacao(LocalDate.of(2023, 07, 06), 53.4F);
      Avaliacao av2 = new Avaliacao(LocalDate.of(2023, 05, 04), 11.3F);
      Avaliacao av3 = new Avaliacao(LocalDate.of(2023, 11, 21), 43.5F);
      Avaliacao av4 = new Avaliacao(LocalDate.now()           , 43.7F);
      Avaliacao av5 = new Avaliacao(LocalDate.now()           , 22.1F);
      Avaliacao av6 = new Avaliacao(LocalDate.of(2023, 03, 12) , 52.8F);
      
      aluno1.addAvaliacao(av);
      aluno1.setMedia(av.getNota());
      aluno2.addAvaliacao(av2);
      aluno2.setMedia(av2.getNota());
      aluno3.addAvaliacao(av3);
      aluno3.setMedia(av3.getNota());
      aluno4.addAvaliacao(av4);
      aluno4.setMedia(av4.getNota());
      aluno5.addAvaliacao(av5);
      aluno6.addAvaliacao(av6);
      
      List<Professor> professor = new ArrayList<>(); 
      
      Professor prof1 = new Professor(21, "Gonçalo", end1);
      Professor prof2 = new Professor(32, "Romu", end2);
      Professor prof3 = new Professor(12, "Gilvaldo", end3);
      Professor prof4 = new Professor(53, "Roberto", end4);
      
      professor.add(professor1);
      professor.add(prof2);
      professor.add(prof3);
      professor.add(prof4);
      
      professor.sort(Comparator.comparing(Professor::getRegistro));
      
      //System.out.println("\n\n Professores ordenado pelo registro:");

      //for (Professor professores : professor) {System.out.println(professores);}
      
      List<Aluno> aluno = new ArrayList<>();

      
      aluno.add(aluno1);
      aluno.add(aluno2);
      aluno.add(aluno3);
      aluno.add(aluno4);
      
      aluno.sort(Comparator.comparing(Aluno::getMedia));
      
      //System.out.println("\n\n Alunos ordenados pela media:");

      //for (Aluno alunos: aluno) {System.out.println(alunos);}
      
      return pessoas;
      
   }
	 
	 public void mostrarLista() {
      Random random = new Random();
      
      List<Pessoa> pessoas = listaMain();
      
      System.out.println("\n\n Lista pessoas em ordem revertida");
      Collections.reverse(pessoas);
      pessoas.forEach(System.out::println);
      
      System.out.println("\n\nlista pessoa desorganizada");
      Collections.shuffle(pessoas);
      pessoas.forEach(System.out::println);
      
      CompararNomeDePessoa nomeComparator = new CompararNomeDePessoa();
      System.out.println("\n\nlista pessoas ordenada pelo nome" );
      
      Collections.sort(pessoas,nomeComparator);
      pessoas.forEach(System.out::println);
      
 
      
}
}
