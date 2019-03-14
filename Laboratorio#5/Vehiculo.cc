#include "Vehiculo.hh"
#include <sstream>

Vehiculo::~Vehiculo(){
    delete Velocidad;
    delete Posicion;
}
Vehiculo::Vehiculo(){}
Vector2d* Vehiculo::getVelocidad(){
    return this->Velocidad;
}
Vector2d* Vehiculo::getPosicion(){
    return this->Posicion;
}
void Vehiculo::acelerar(Vector2d& dv, float t){
    float dt=0.01;
    for (float i = 0; i <= t;i+=dt) {
    this->Velocidad->getX+=((dv.getX) * dt);
    this->Velocidad->getY+=((dv.getY) * dt);
    this->Posicion->getX+=((this->Velocidad->getX) * dt);
    this->Posicion->getY+=((this->Velocidad->getY) * dt);
    }
}
const std::string Vehiculo::to_string() const{
    std::stringstream r;
	std::string i;
	r<<"tiene una velocidad en los respectivos ejes de: "<<Velocidad->to_string()<<",";
	r<<"y una posicion respecto del origen de: "<<Posicion->to_string();
	r>>i;
	return i;
}