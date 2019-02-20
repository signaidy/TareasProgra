#include <iostream>

float productoPunto(const float* x, const float* y, int dims)
{
	return *x * *y;
}
bool sonOrtogonales(const float* x, const float* y, int dims)
{
	float prod = 0, redondeado;
	for(int i = 0; i < dims; i++)
	{
		prod = prod + productoPunto(&x[i], &y[i], dims);
	}
	redondeado = roundf(prod*100)/100;
	if (redondeado==0) {
		return true;
	}else
	{
		return false;
	}
}
bool esBase(const float** vectores, const int dims)
{
    
}
int main()
{
	float* vector1;
	float* vector2;
	int dim;
	float prod;
	printf("ingrese el numero de dimensiones del vector:\n");
	std::cin>>dim;
	vector1 = new float[dim];
	vector2 = new float[dim];
	for(int i = 1; i <= dim; i++)
	{
		printf("ingrese el numero en la posicion %i del vector 1:\n", i);
		std::cin>>vector1[i-1];
	}
	for(int i = 1; i <= dim; i++)
	{
		printf("ingrese el numero en la posicion %i del vector 2:\n", i);
		std::cin>>vector2[i-1];
	}
	for(int i = 0; i < dim; i++)
	{
		prod = prod + productoPunto(&vector1[i], &vector2[i], dim);
	}
	std::printf("el producto punto de los dos vectores es: %f\n", prod);
	bool s = sonOrtogonales(vector1, vector2, dim);
	if (s == true) {
		std::printf("los vectores son ortogonales");
	}else
	{
		std::printf("los vectores no son ortogonales");
	}
    esBase(&vector1, dim);
}