#include <iostream>
#include <string>
#include <array>

using namespace std;

class Libro{
	public:
		Libro(string t, string a, double an) : titulo(t),autor(a),anio(an){};
		void mostrarInformacion();
		string getTitulo();
		string getAutor();
		double getAnio();
		
	private:
		string titulo;
		string autor;
		double anio;	
};

string Libro::getTitulo(){
	return titulo;
}

string Libro::getAutor(){
	return autor;
}

double Libro::getAnio(){
	return anio;
}

void Libro::mostrarInformacion(){
	cout << "Titulo : " << getTitulo() << "\n"
	<< "Autor : " << getAutor() << "\n"
	"Año : " << getAnio() << "\n\n";
}

int main(){
	Libro l1("L1","A1",2001);
	Libro l2("L2","A2",2002);
	Libro l3("L3","A3",2003);
	array<Libro,3> libros = {l1,l2,l3};
	for(Libro l : libros){
		l.mostrarInformacion();
	}
	return 0;
}
