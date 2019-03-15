#pragma once
#include "Vector2d.cc"
#include <string>
class Vehiculo{
	public:
		Vehiculo();
		Vector2d getVelocidad();
		Vector2d getPosicion();
		void acelerar(Vector2d& dv, float t);
        void avanzar(float t);
		const std::string to_string() const;
	private:
		Vector2d Velocidad{0,0};
		Vector2d Posicion{0,0};
};