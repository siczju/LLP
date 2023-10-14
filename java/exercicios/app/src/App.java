// import videos.Documentario; -/                                             tudo
// import videos.Filme;        -/ ou     usar                        importar 
// import videos.Novela;       -/    pode     import videos.*;   irá
// import videos.Serie;         -/                            que 

// DevFlix -> www.devflix.com.br -> package -> br.com.devflix

import br.com.devflix.gui.*;
import br.com.devflix.videos.*;

public class App {
    public static void main(String[] args) throws Exception {
       // videos.Filme filme = new videos.Filme(); // quero pegar a classe filme que esta dentro da pasta videos (video.PacoteFilho.PacoteNeto...)
        Filme filme = new Filme();
        Novela novela = new Novela();
        Documentario documentario = new Documentario();
        Serie serie = new Serie();

        Janela janela = new Janela();
    }

}
