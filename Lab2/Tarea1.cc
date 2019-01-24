#include <iostream>

int main(){
	int NumEmp = 5;//No pueden haber medios empleados.
	float Salary = 110.5;//el salario no es un entero.
	float SigmaSalary = Salary * NumEmp05;//el producto del salario por el numero de empleados puede no ser entero.
	float imp = 0.1;//el valor de los impuestos es decimal :v
	float SigmaImp = SigmaSalary * imp;//El producto de la sumatoria de salarios por el valor de los impuesto puede no ser entero :,v
	std::printf("El sueldo total de los empleados es de %f. Los impues totales a pagar son de: %f.", SigmaSalary, SigmaImp);
	NumEmp++;
	NumEmp++;
	NumEmp++;
	SigmaSalary = Salary * NumEmp05;
	SigmaImp = SigmaSalary * imp;
	std::printf("El sueldo total de los empleados es de %f. Los impues totales a pagar son de: %f.", SigmaSalary, SigmaImp);
}