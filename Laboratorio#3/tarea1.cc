#include <iostream>
float FuerzaResistencia(float k, float v)
{
	float F = k * (v*v);
	return F;
}
float Fuerza(float g, float F)
{
	float f = g - F;
	return f;
}
float calc(float G, float K, float a, float v, float d, float dt)
{
	float t;
	float T;
	float F;
	std::printf("Ingrese tiempo de caida:");
	std::cin>>T;
	for(t=0; t <= T; t= t + dt)
		{
			v =v + a*dt;
			F = FuerzaResistencia(K, v);
			d = d + v*dt;
			a = Fuerza(G, F);
		}
	std::printf("La velocidad final es: %f, y la distancia recorrida fue de: %f.\n", v, d);
	return 0;
}
int main()
{
	const float Gt = 9.8;
	const float Gv = 8.87;
	const float Gl = 1.62;
	const float Gc = 1.23;
	const float Kp = 0.0023; 
	const float Ks = 0;
	float v;
	float a = 0;
	float dt = 0.01;
	const int obj = 1;
	const int A = 1;
	float d;
	float Fk;
	char x;
	int hue = 0;
	while(hue == 0)
	{
		std::printf("Ingrese el caracter de uno de los cuerpos celestes(t, v, l, c) o 's' para terminar el programa:");
		std::cin>>x;
		if(x=='s')
		{
			hue = 1;
		}else
		{
			if(x == 't')
			{
				calc(Gt, Kp, a, v, d, dt);	
			}else if(x == 'v')
			{
				calc(Gv, Kp, a, v, d, dt);
			}else if(x == 'l')
			{
				calc(Gl, Ks, a, v, d, dt);
			}else if(x == 'c')
			{
				calc(Gc, Ks, a, v, d, dt);
			}else 
			{
				std::printf("A metido un valor no reconocido por mi >:(\n");
			}
		}
	}
	return 0;	
}