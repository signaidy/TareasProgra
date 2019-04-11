#include <string>

class Expresion{
	public:
		virtual double evaluar() = 0;
};

class Valor: public Expresion{
	private:
		double valor;
	public:
		Valor(double _valor):valor(_valor){}
		virtual double evaluar() override{
			return valor;
		}
};
class OperacionBinaria{
	public:
		OperacionBinaria(Expresion* operador1, Expresion* operador2){}
		virtual double operar(const double op1, const double op2) const =0;
		double evaluar(){
			double op1 = valor.evaluar(operador1);
			double op2 = valor.evaluar(operador2);
			return operar(op1, op2);
		}
};
class Suma:public OperacionBinaria{
	private:
		Expresion* operador1;
		Expresion* operador2;
	public:
		Suma(Expresion* _operador1, Expresion* _operador2):operador1(_operador1)operador2(_operador2){}
		virtual double operar(const double op1, const double op2) override{
			return op1 + op2;
		}
		double evaluar(){
			double op1 = valor.evaluar(operador1);
			double op2 = valor.evaluar(operador2);
			return operar(op1, op2);
		}
};
class Multiplicacion:public OperacionBinaria{
	private:
		Expresion* operador1;
		Expresion* operador2;
	public:
		Multiplicacion(Expresion* _operador1, Expresion* _operador2):operador1(_operador1)operador2(_operador2){}
		virtual double operar(const double op1, const double op2) override{
			return op1 * op2;
		}
		double evaluar(){
			double op1 = valor.evaluar(operador1);
			double op2 = valor.evaluar(operador2);
			return operar(op1, op2);
		}
};
bool parse(const std::string expression, Expresion* resultado){
	for(int i = 0; i < expression.size(); i++)
	{
		if (((expression[i]=='+')||(expression[i]=='*'))&&((expression[i+1]!='+')||(expression[i+1]!='*'))&&((expression[i-1]!='+')||(expression[i-1]!='*'))) {
			if ((expression[i]=='+')) {
				resultado = new Suma ( new Valor(expression[i-1])
			}else if ((expression[i]=='*')) {
				resultado = new Multiplicacion ( new Valor(expression[i-1])
			}
		}
	}
}