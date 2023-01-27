#include <iostream>
#include <string>
#include <array>
using namespace std;

class Empleado{
	public:
		Empleado(string nombre, double salario, double anioContratacion) : nombre(nombre),salario(salario),anioContratacion(anioContratacion){};
		void mostrarInformacion();
		void mostrarAntiguedad();
		string getNombre();
		double getSalario();
		double getAnioContratacion();
		double calcularAntiguedad();
		
	private:
		string nombre;
		double salario;
		double anioContratacion;	
};

string Empleado::getNombre(){
	return nombre;
}

double Empleado::getSalario(){
	return salario;
}

double Empleado::getAnioContratacion(){
	return anioContratacion;
}

double Empleado::calcularAntiguedad(){
	return (2023-getAnioContratacion());
}

void Empleado::mostrarInformacion(){
	cout << "Nombre : " << getNombre() << "\n"
	<< "Salario : " << getSalario() << "\n"
	"Año de Contratacion : " << getAnioContratacion() << "\n\n";
}

void Empleado::mostrarAntiguedad(){
	cout << "Nombre : " << getNombre() << "\n"
	"Años de Antiguedad : " << calcularAntiguedad() << "\n\n";
}

int main(){
	Empleado pepe("Pepe",1200,2018);
	Empleado juan("Juan",1500,2013);
	Empleado sara("Sara",1350,2015);
	
	array<Empleado,3> empleados= {pepe,juan,sara};
	for(Empleado e : empleados){
		e.mostrarAntiguedad();
	}
	
	return 0;
}


