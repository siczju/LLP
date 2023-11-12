//                          FUNÇÃO
// funções -> estruturas que agrupam blocos de comandos retornando um único valor ao final da execução.
// O que acontece com a memória do computador qnd a gente chama uma função e passa os parãmetros para la? (linha de baixo)
// é feito uma cópia do valor que é passado no parâmetro que pode ser alterado dentro da função sem afetar a variável da qual ela foi gerada.
#include <stdio.h>

int soma(int x, int y){
    return x + y;
}

// qnd acabar a função automaticamente o sistema operacional libera todas as regiões de memórias que estavam sendo utilizadas pela função

void main(){
    int a = 10, b = 20, c;

    c = soma(a,b);
    // o "x" não tem nada haver com o "a", a unica coisa que ele tem é a cópia do valor do "a", mesma coisa o "y" com o "b"
}