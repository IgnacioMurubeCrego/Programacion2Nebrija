#include <iostream>
#include <string>

using namespace std;

class Persona{
	public:
		
	Persona(string n,int e,string d):nombre(n),edad(e),direccion(d){};
	
	void mostrarInformacion();
	string getNombre();
	int getEdad();
	string getDireccion();
	
	private:
		string nombre;
		int edad;
		string direccion;
};

string Persona::getNombre(){
	return nombre;
}

int Persona::getEdad(){
	return edad;
}

string Persona::getDireccion(){
	return direccion;
}

void Persona::mostrarInformacion(){
	cout << "Nombre : " << getNombre() << "\n"
	<< "Edad : " << getEdad() << "\n"
	"Direccion : " << getDireccion() << "\n";
}

int main(){
	Persona p1("Pepe",32,"Calle del Escorial, 54");
	p1.mostrarInformacion();
	
	return 0;
}
