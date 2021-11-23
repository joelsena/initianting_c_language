// Quando se importa cabeçalhos ou arquivos no mesmo projeto/pasta se utiliza "" e não <>
#include "calculos.h"

// Agora definimos as funções antes declaradas no header
// Obs: Meio que sobrescrevemos as declarações

int quadrado(int x) {
    return x * x;
}

int cubo(int x) {
    return x * x * x;
}
