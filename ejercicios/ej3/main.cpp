#include <iostream>

using namespace std;

class NumeroPositivo{
private:
    float numero;
public:

    NumeroPositivo(){};

    NumeroPositivo(float _numero){
        if(_numero <= 0)
            throw string("El numero introducido como parametro no es positivo. Debe ser (>0).");
        numero = _numero;
    };

    float getNumero() const{
        return numero;
    }

    void setNumero(float _numero) {
        numero = _numero;
    }

    void divideBy(float otherNumber){
        if(otherNumber == 0)
            throw string("Se ha intentado realizar una division por 0. Introduzca otro numero.");
        numero = numero / otherNumber;
    }

    void multiplyBy(float otherNumber){
        numero = numero * otherNumber;
    }

    void add(float otherNumber){
        numero = numero + otherNumber;
    }

};

void menu(){

    NumeroPositivo numeroPositivo;
    float inputNumeroPositivo = 0;
    float inputDivision = 0;
    float inputMultiplicacion;
    float inputSuma;

    // Pedimos numero positivo al usuario captando error posible : inputNumeroPositivo <= 0

    do{
        try {
            cout << "Introduzca un numero positivo" << endl;
            cin >> inputNumeroPositivo;
            numeroPositivo = NumeroPositivo(inputNumeroPositivo);
        }
        catch (string msg) {
            cout << "Errror : " << msg << endl;
        }
    }
    while(inputNumeroPositivo <= 0);

    // Una vez creado nuestro numero positivo realizamos las 3 acciones pedidas :

    // Division captando error de division por 0 :

    do{
        try {
            cout << "Introduzca un numero por el que desee dividir " << endl;
            cin >> inputDivision;
            numeroPositivo.divideBy(inputDivision);
        }
        catch (string msg) {
            cout << "Errror : " << msg << endl;
        }
    }
    while(inputDivision == 0);

    cout << "Numero Positivo ahora es : " << to_string(numeroPositivo.getNumero()) << endl;

    // Multiplicacion :

    cout << "Introduzca un numero por el que desee multiplicar " << endl;
    cin >> inputMultiplicacion;
    numeroPositivo.multiplyBy(inputMultiplicacion);

    cout << "Numero Positivo ahora es : " << to_string(numeroPositivo.getNumero()) << endl;

    // Suma :

    cout << "Introduzca un numero por el que desee sumar " << endl;
    cin >> inputSuma;
    numeroPositivo.add(inputSuma);

    cout << "Numero Positivo ahora es : " << to_string(numeroPositivo.getNumero()) << endl;

}

int main()
{
    menu();
    return 0;
}
