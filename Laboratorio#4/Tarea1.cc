void porValor(int valor){
    valor = 42;//aqui la variable valor toma el valor de valor 1, y lo cambia a 42, por lo tanto nunca se toco la variable valor 1
}

void porReferencia(int& valor){
    valor = 42;//aqui la variable valor hace referencia al espacio de memoria de valor2, por lo que el cambio de valor a 42 se hace en ese espacio, cambiando el valor de valor2
}

int main(){
    int valor1 = 0;
    int valor2 = 0;

    porValor(valor1);
    porReferencia(valor2);

    printf("El resultado por valor es %i\n", valor1);
    printf("El resultado por referencia es %i\n", valor2);
}