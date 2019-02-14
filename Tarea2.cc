#include <iostream>

float vectormakerlmao(float (&v)[], const int dim)
{
	for(int i = 0; i <= dim; i++)
	{
		printf("ingrese el numero en la posicion %i del vector:\n", i);
		cin>>v[i];
	}
}
float productoPunto(cosnt float* x, const float* y, int dims)
{
	return x * y;
}
int main()
{
	int dim;
	float prod = 0;
	printf("ingrese el numero de dimensiones del vector:\n");
	cin>>dim;
	float vector1[dim];
	float vector2[dim];
	vectormakerlmao(vector1[dim], dim);
	vectormakerlmao(vector2[dim], dim);
	for(i=0;i<=dim;i++)
	{
		prod = prod + productoPunto(vector1[i], vector2[i], dim);
	}
}