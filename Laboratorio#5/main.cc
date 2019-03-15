#include <iostream>
#include "Vector2d.hh"
#include "Vehiculo.hh"

int main(){
    Vehiculo x;
    Vector2d l{3,1},n{-7.2,8};
    x.acelerar(l, 5);
    x.avanzar(10);
    std::cout<<x.to_string()<<"\n";
    x.acelerar(n,4);
    x.avanzar(9);
    std::cout<<x.to_string()<<"\n";                                                                                                                                                                                                                    
    return 0;
}