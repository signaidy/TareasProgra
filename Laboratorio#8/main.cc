#include <iostream>
#include <sstream>
#include <string>

bool parseInt(const std::string& valor, int& resultado);
class Semantica{
	public:
	virtual bool parse(const std::string& valor, int& resultado) const = 0;
	virtual int opSuma(const int arg1, const int arg2) const = 0;
	virtual int opProducto(const int arg1, const int arg2) const = 0;
};	
class Arith: public Semantica
{
public:
	Arith(){};
	~Arith(){};
	virtual bool parse(const std::string& valor, int& resultado) const override{
	int res = 0, arg1, arg2;
	std::stringstream coso, coso2;
	if (parseInt(valor, resultado)) {
		for(int i = 0; i < valor.size(); i++)
		{
			if (((valor[i]=='+')||(valor[i]=='*'))&&((valor[i+1]!='+')||(valor[i+1]!='*'))&&((valor[i-1]!='+')||(valor[i-1]!='*'))) {
				coso<<valor[i-1];
				coso>>arg1;
				coso2<<valor[i+1];
				coso2>>arg2;
				if ((valor[i]=='+')) {
					res += Arith::opSuma(arg1, arg2);
				}else if ((valor[i]=='*')) {
					res += Arith::opProducto(arg1, arg2);
				}
			}
			coso.str("");
			coso.str("");
		}
		resultado = res;
	}else
	{
		return false;
	}
	return true;
	}
	virtual int opSuma(const int arg1, const int arg2) const override{
		return arg1 + arg2;
	}
	virtual int opProducto(const int arg1, const int arg2) const override{
		return arg1 * arg2;
	}
};

class ZArith: public Semantica
{
public:
	ZArith(int base){
		_base = base;
	}
	~ZArith()=default;
	virtual bool parse(const std::string& valor, int& resultado) const override{
	int res = 0, arg1, arg2;
	std::stringstream coso, coso2;
	if (parseInt(valor, resultado)) {
		for(int i = 0; i < valor.size(); i++)
		{
			if (((valor[i]=='+')||(valor[i]=='*'))&&((valor[i+1]!='+')||(valor[i+1]!='*'))&&((valor[i-1]!='+')||(valor[i-1]!='*'))) {
				coso<<valor[i-1];
				coso>>arg1;
				coso2<<valor[i+1];
				coso2>>arg2;
				if ((valor[i]=='+')) {
					res += ZArith::opSuma(arg1, arg2);
				}else if ((valor[i]=='*')) {
					res += ZArith::opProducto(arg1, arg2);
				}
			}
			coso.str("");
			coso.str("");
		}
			resultado = res;
		}else
		{
			return false;
		}
		return true;
	}
	virtual int opSuma(const int arg1, const int arg2) const override{
		return (arg1 + arg2)%_base;
	}
	virtual int opProducto(const int arg1, const int arg2) const override{
		return (arg1 * arg2)%_base;
	}
	private:
		int _base;
};

bool evaluar(const Semantica& x, const std::string& expresion, int& resultado){
	return x.parse(expresion, resultado);
}
bool parseInt(const std::string& valor, int& resultado){
	std::stringstream coso;
	for(int i = 0; i < valor.size(); i++)
	{
		if ((valor[i]=='0')||(valor[i]=='1')||(valor[i]=='2')||(valor[i]=='3')||(valor[i]=='4')||(valor[i]=='5')||(valor[i]=='6')||(valor[i]=='7')||(valor[i]=='8')||(valor[i]=='9')||(valor[i]=='+')||(valor[i]=='*')) {
			coso<<valor[i];
		}else
		{
			return false;
		}
	}
	coso>>resultado;
	return true;
}
int main(){
	std::string ex1("2*3+5");
	std::string ex2("2*mal+5");
	int resultado;
	Arith sem1;
	ZArith sem2(5);
	if (evaluar(sem1, ex1, resultado)) {
		printf("El resultado es: %i\n", resultado);
	}
	if (evaluar(sem2, ex1, resultado)) {
		printf("El resultado es: %i\n", resultado);
	}
	if (!evaluar(sem1, ex2, resultado)) {
		printf("No se pudo evaluar ex2\n");
	}
	
}