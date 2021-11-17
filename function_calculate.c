#include <math.h>

float calculate(float *n1, float *n2, char op, float *res) {
    // Quando não utilizo ponteiros as variáveis: n1 e n2 vem zeradas.
    switch(op) {
        case '+':
            *res = *n1 + *n2;
            break;
        case '-':
            *res = *n1 - *n2;
            break;
        case '*':
            *res = *n1 * *n2;
            break;
        case '/':
            *res = *n1 / *n2;
            break;
        case 'p':
            *res = pow(*n1, *n2);
            break;
        default:
            *res = -1;
            break;
    }
}
