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
bool esBase(const float* const* V, const int dim)
{
    bool s, z;
	for(int i=0;i<=dim-1;i++)
	{
	    int l=i+1;
		z = sonOrtogonales(V[i], V[l], dim);
		if (z == true) {
			s = true;
		}else
		{
			s = false;
		}
	}
	if (s == true) {
		printf("El conjunto de vectores es base\n");
		return true;
	}else
	{
		printf("El conjunto de vectores no es base\n");
		return false;
	}
}
int main()
{
	float* vector1;
	float* vector2;
	float* V;
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
		std::printf("los vectores son ortogonales\n");
	}else
	{
		std::printf("los vectores no son ortogonales\n");
	}
	V = new float[2];
	V[1] = *vector1;
	V[2] = *vector2;
    esBase(&V, dim);
}