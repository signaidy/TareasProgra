#include "Vehiculo.hh"
#include <sstream>

Vehiculo::Vehiculo(){}
Vector2d Vehiculo::getVelocidad(){
    return this->Velocidad;
}
Vector2d Vehiculo::getPosicion(){
    return this->Posicion;
}
void Vehiculo::acelerar(Vector2d& dv, float t){
    float dt=0.01;
    for (float i = 0; i <= t;i+=dt) {
        this->Velocidad.x += (dv.x*dt);
        this->Velocidad.y += (dv.y*dt);
        this->Posicion.x += (dv.x*dt);
        this->Posicion.y += (dv.y*dt);
    }
}
void Vehiculo::avanzar(float t){
    float dt=0.01;
    for(float i = 0; i < t; i+=dt)
    {
        this->Posicion.x += (this->Velocidad.x*dt);
        this->Posicion.y += (this->Velocidad.y*dt);
    }
    
}
const std::string Vehiculo::to_string() const{
    std::stringstream r;
	std::string i;
	r<<"tiene una velocidad en los respectivos ejes de: "<<Velocidad.to_string()<<",";
	r<<"y una posicion respecto del punto inicial de: "<<Posicion.to_string()<<"\n";
	r>>i;
	return i;
}