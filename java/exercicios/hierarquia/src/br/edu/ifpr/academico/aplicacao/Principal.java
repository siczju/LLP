package br.edu.ifpr.academico.aplicacao;

import java.util.ArrayList;
import java.util.List;
import br.edu.ifpr.academico.modelo.Aluno;
import br.edu.ifpr.academico.modelo.Endereço;
import br.edu.ifpr.academico.modelo.Pessoa;
import br.edu.ifpr.academico.modelo.Professor;

public class Principal {
   public static void main(String[] args) {

	  Endereço end1 = new Endereço(90, "Eliane Alvin Dias", "Colonia");
	  Endereço end2 = new Endereço(29, "Rio Branco", "Centro");
	  Endereço end3 = new Endereço(47, "Ceara", "Jardim Sao Fernando");
	  Endereço end4 = new Endereço(30, "Winston Churchill", "Imperio do Sol");
	   
      Aluno aluno1 = new Aluno(16, "Julio", end1);
      Aluno aluno2 = new Aluno(07, "Nelson", end2);
      
      Professor professor1 = new Professor(42, "Claudio", end3);
      Professor professor2 = new Professor(78, "Mario", end4);
      
      Pessoa pessoa1 = new Pessoa("Frederico", end2);
      Pessoa pessoa2 = new Pessoa("Jorge", end1);
      
      List<Pessoa> pessoas = new ArrayList<>();
      
      pessoas.add(aluno1);
      pessoas.add(aluno2);
       
      pessoas.add(professor1);
      pessoas.add(professor2);
       
      pessoas.add(pessoa1);
      pessoas.add(pessoa2);
       
      System.out.println("qtde de objetos na lista: " + pessoas.size() + "\n");

      for (Pessoa pessoa : pessoas) {System.out.println(pessoa);}
 }
}