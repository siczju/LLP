package comparadores;

import br.edu.ifpr.academico.modelo.*;
import java.util.Comparator;

import br.edu.ifpr.academico.modelo.Aluno;

public class CompararMediaDeAluno implements Comparator<Aluno> {

   public int  compare(Aluno p1, Aluno p2) {
      return AlunoUtils.getMedia(p1) < AlunoUtils.getMedia(p2) ? 0 : 1;
   }
}
