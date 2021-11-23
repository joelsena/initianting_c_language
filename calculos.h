// ifndef => "If not defined".
// Forma para evitar que um mesmo arquivo de cabe�alho seja "definido" varias vezes.
// Include guard.
#ifndef CALCULOS_H_INCLUDED
#define CALCULOS_H_INCLUDED

// Arquivos de cabe�alhos somente fazem as declara��es dos dados.
#define _PI 3.14159 // Em todo lugar do projeto vai poder acessar essa constante.

// Somente as declara��es, n�o � recomendado definir o c�digo aqui.
// Para definir as fun��es se cria outro arquivo .c, de prefer�ncia com o mesmo nome por conven��o.
int quadrado(int x);
int cubo(int x);

#endif // CALCULOS_H_INCLUDED
