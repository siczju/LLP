package comparadores;

import java.util.Iterator;
import java.util.List;

import br.edu.ifpr.academico.modelo.*;

public class AlunoUtils {
   
   public static float getMedia(Aluno al) {
      float media = 0;
      
      List<Avaliacao> avaliacoes = al.getAvaliacoes();
      
      Iterator<Avaliacao> enem = avaliacoes.iterator();
      
      while (enem.hasNext())
         
      media += enem.next().getNota();  
      
      return media / avaliacoes.size();
      }
}