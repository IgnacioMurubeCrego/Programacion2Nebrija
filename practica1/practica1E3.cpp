#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria{
	public:
		CuentaBancaria(string nm,string nc,double s):nombreDelTitular(nm),numeroDeCuenta(nc),saldo(s){};
		void depositar(double monto);
		void retirar(double monto);
		void mostrarInformacion();
		string getNombreTitular();
		string getNumeroCuenta();
		double getSaldo();
		
	private:
		string nombreDelTitular;
		string numeroDeCuenta;
		double saldo;
};

void CuentaBancaria::depositar(double monto){
	saldo += monto;
}

void CuentaBancaria::retirar(double monto){
	saldo -= monto;
} 

string CuentaBancaria::getNombreTitular(){
	return nombreDelTitular;
}

string CuentaBancaria::getNumeroCuenta(){
	return numeroDeCuenta;
}

double CuentaBancaria::getSaldo(){
	return saldo;
}

void CuentaBancaria::mostrarInformacion(){
	cout << "Nombre : " << getNombreTitular() << "\n"
	<< "Numero de Cuenta : " << getNumeroCuenta() << "\n"
	"Saldo Actual : " << getSaldo() << "\n\n";
}

int main(){
	
	CuentaBancaria c("Ignacio Murube","ES1684489416",423.65);
	c.mostrarInformacion();
	c.depositar(100);
	c.mostrarInformacion();
	c.retirar(240.87);
	c.mostrarInformacion();
	return 0;
}
