#include <iostream>

int main(){
    int valor1 = 1;
    int valor2 = 1;

    int resultado = ++valor1 + valor2++;//los "++" deberian ir antes para que el incremento ocurra antes, debido a que valor2 los tiene despues, la sumatoria se hizo despues de que se definiera resultado, por lo que resultado uso el valor anterior de valor2 enves del nuevo 7w7r

    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
}