#pragmaonce
#include "Vector2d.cc"
#include <string>
class Vehiculo{
	public:
		Vehiculo();
		~Vehiculo();
		Vector2d* getVelocidad();
		Vector2d* getPosicion();
		void acelerar(Vector2d& dv, float t);
		const std::string to_string() const;
	private:
		Vector2d* Velocidad = new Vector2d(0,0);
		Vector2d* Posicion = new Vector2d(0,0);
};