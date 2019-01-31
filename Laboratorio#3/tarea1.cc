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
	float T;
	float t;
	const int obj = 1;
	const int A = 1;
	float d;
	float Fk;
	float F;
	char x;
	int hue = 0;
	while(hue == 0)
	{
		std::printf("Ingrese el caracter de uno de los cuerpos celestes(t, v, l, c) o 's' para terminar el programa:");
		std::cin>>x;
		if(x=='s')
		{
			hue++;
		}else
		{
			std::printf("Ingrese tiempo de caida:")
			std::cin>>T;
			if(x == 't')
			{
				for(t=0; t <= T; t= t + 0.01)
				{
					v = a*t;
					Fk = FuerzaResistencia(Kp, v);
					d = v*t;
					a = Fuerza(Gt, Fk);
				}
				std::printf("La velocidad final es: %f, y la distancia recorrida fue de: %f.\n", v, d);
			}else if(x == 'v')
			{
				for(t=0; t <= T; t= t + 0.01)
				{
					v = a*t;
					Fk = FuerzaResistencia(Kp, v);
					d = v*t;
					a = Fuerza(Gv, Fk);
				}
				std::printf("La velocidad final es: %f, y la distancia recorrida fue de: %f.\n", v, d);
			}else if(x == 'l')
			{
				for(t=0; t <= T; t= t + 0.01)
				{
					v = a*t;
					Fk = FuerzaResistencia(Ks, v);
					d = v*t;
					a = Fuerza(Gl, Fk);
				}
				std::printf("La velocidad final es: %f, y la distancia recorrida fue de: %f.\n", v, d);
			}else if(x == 'c')
			{
				for(t=0; t <= T; t= t + 0.01)
				{
					v = a*t;
					Fk = FuerzaResistencia(Ks, v);
					d = v*t;
					a = Fuerza(Gc, Fk);
				}
				std::printf("La velocidad final es: %f, y la distancia recorrida fue de: %f.\n", v, d);
			}else 
			{
				std::printf("A metido un valor no reconocido por mi >:( ");
			}
		}
	}
	return 0;
}