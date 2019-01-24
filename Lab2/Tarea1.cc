#include <iostream>

int main(){
	int NumEmp = 5;//No pueden haber medios empleados.
	float const Salary = 110.5;//el salario no es un entero. constante porque esta variable no cambia
	float SigmaSalary = Salary * NumEmp;//el producto del salario por el numero de empleados puede no ser entero.
	float const imp = 0.1;//el valor de los impuestos es decimal :v constante porque esta variable no cambia
	double SigmaImp = SigmaSalary * imp;//El producto de la sumatoria de salarios por el valor de los impuesto puede no ser entero :,v
	std::printf("El sueldo total de los empleados es de %f. Los impuestos totales a pagar son de: %f.", SigmaSalary, SigmaImp);
	NumEmp++;
	NumEmp++;
	NumEmp++;
	SigmaSalary = Salary * NumEmp;
	SigmaImp = SigmaSalary * imp;
	std::printf("El sueldo total de los empleados es de %f. Los impuestos totales a pagar son de: %f.", SigmaSalary, SigmaImp);
}