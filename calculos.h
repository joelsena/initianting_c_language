// ifndef => "If not defined".
// Forma para evitar que um mesmo arquivo de cabeçalho seja "definido" varias vezes.
// Include guard.
#ifndef CALCULOS_H_INCLUDED
#define CALCULOS_H_INCLUDED

// Arquivos de cabeçalhos somente fazem as declarações dos dados.
#define _PI 3.14159 // Em todo lugar do projeto vai poder acessar essa constante.

// Somente as declarações, não é recomendado definir o código aqui.
// Para definir as funções se cria outro arquivo .c, de preferência com o mesmo nome por convenção.
int quadrado(int x);
int cubo(int x);

#endif // CALCULOS_H_INCLUDED
