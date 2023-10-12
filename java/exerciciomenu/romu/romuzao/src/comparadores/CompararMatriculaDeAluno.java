package comparadores;

import java.util.Comparator;

import br.edu.ifpr.academico.modelo.Aluno;
import br.edu.ifpr.academico.modelo.Pessoa;

public class CompararMatriculaDeAluno implements Comparator<Pessoa> {
   
   @Override
public int compare(Pessoa pessoa1, Pessoa pessoa2) {Aluno a1 = (Aluno)pessoa1;Aluno a2 = (Aluno)pessoa2;
      return a1.getMatricula() - a2.getMatricula();
   }
}