#include <iostream>

void vectorMakerLmao(float** V, const int Vnum, const int dim)
{
	for(int i = 1; i <= Vnum; i++)
	{
		for(int j = 1; j <= dim; j++)
		{
			printf("Ingrese el numero en la posicion %i del vector %i: \n", i, j);
			std::cin>>V[i-1][j-1];
		}
	}
	
}
bool sonOrtogonales(const float** V, const float** V2, const int dims)
{
	float prod = 0, redondeado;
	for(int i = 0; i < dims; i++)
	{
		prod = prod + productoPunto(V[i], V2[i], dims);
	}
	redondeado = roundf(prod*100)/100;
	if (redondeado==0) {
		return true;
	}else
	{
		return false;
	}
}
bool esBase(const float** V, const int dim)
{
	for(i=0;i<dim-1;i++)
	{
	    l=i+1
	    for(j=0;j<dim;j++)
	    {
	        sonOrtogonales(V[i][j],V[l][j],dim);
	    }
	}
}
int main()
{
	float** Vs;
	int Vnum;
	int dim;
	printf("Cuantos vectores quiere verificar?\n");
	std::cin>>Vnum;
	printf("Ingrese el numero de dimenciones: \n");
	std::cin>>dim;
	Vs = new float*[Vnum];
	for(int i = 0; i < Vnum; i++)
	{
		Vs[i]=new float[dim];
	}
	vectorMakerLmao(Vs, Vnum, dim);
}