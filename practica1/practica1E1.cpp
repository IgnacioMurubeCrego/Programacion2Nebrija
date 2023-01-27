#include <iostream>

using namespace std;

// Ex.1

class Rectangulo{
	
	public:
		
	Rectangulo(int ancho,int alto) : rectAncho(ancho),rectAlto(alto){};
	
	int getAncho() const;
	int getAlto() const;
	int setAncho() const;
	int setAlto() const;
	int obtenerArea() const;
	int obtenerPerimetro() const;
	
	private:
		
	int rectAncho;
	int rectAlto;
	
};

int Rectangulo::getAncho() const{
	return rectAncho;
}

int Rectangulo::getAlto() const{
	return rectAlto;
}

int Rectangulo::obtenerArea() const{
		return getAncho()*getAncho();
	}
	
int Rectangulo::obtenerPerimetro() const{
		return 2*(getAncho()+getAlto());
	}

int main(){
	
	Rectangulo rect(3,3);

	cout << "Area = " << rect.obtenerArea() << "\n";
	cout << "Perimetro = " << rect.obtenerPerimetro() << "\n";
	
	return 0;
}
