package comparadores;

import java.util.Comparator;

import br.edu.ifpr.academico.modelo.Pessoa;

public class CompararNomeDePessoa implements Comparator<Pessoa> {

   @Override
   public int compare(Pessoa p1, Pessoa p2) {
      return p1.getNome().compareTo(p2.getNome());
   }
}