#include<iostream>
using namespace std;
int main() {

	int numero1;
	int numero2;
	int resultado, operacion, retorno;

	do
	{
		cout << "Ingrese un primer numero: ";
		cin >> numero1;

		while (numero1 < 1 || numero1 > 10)
		{
			cout << "NUMERO INGRESADO INCORRECTO, POR FAVOR VUELVE A INTENTARLO"<<endl;
			cout << "Ingrese un primer numero: ";
			cin >> numero1;
		}

		cout << "Ingrese un segundo numero: ";
		cin >> numero2;

		while (numero2 < 1 || numero2 > 10)
		{
			cout << "NUMERO INGRESADO INCORRECTO, POR FAVOR VUELVE A INTENTARLO" << endl;
			cout << "Ingrese un segundo numero: ";
			cin >> numero2;
		}

		cout << ".::MENU DE OPERACIONES::." << endl;
		cout << "1. ADICION"<<endl;
		cout << "2. SUSTRACCION"<<endl;
		cout << "3. MULTIPLICACION"<<endl;
		cout << "4. DIVISION"<<endl;
		cout << "INGRESE LA OPCION QUE DESEA REALIZAR: ";
		cin >> operacion;

		while (operacion < 1 || operacion > 4)
		{
			cout << "OPERACION NO ENCONTRADA, VUELVA A INGRESAR UNA OPERACION VALIDA"<<endl;
			cout << ".::MENU DE OPERACIONES::." << endl;
			cout << "1. ADICION"<<endl;
			cout << "2. SUSTRACCION"<<endl;
			cout << "3. MULTIPLICACION"<<endl;
			cout << "4. DIVISION"<<endl;
			cout << "INGRESE LA OPCION QUE DESEA REALIZAR: ";
			cin >> operacion;
		}


		switch (operacion)
		{
		case 1: resultado = numero1 + numero2;
			cout << "El resultado de la adicion es: " << resultado;
			break;
		case 2: resultado = numero1 - numero2;
			cout << "El resultado de la sustraccion es: " << resultado;
			break;
		case 3: resultado = numero1 * numero2;
			cout << "El resultado de la multiplicacion es: " << resultado;
			break;
		case 4: resultado = numero1 / numero2;
			cout << "El resultado de la division es: " << resultado;
			break;
		}

		cout << endl;
		cout << "¿Desea ejecutar otra operacion? (1.SI O 2.NO): ";
		cin >> retorno;

	} while (retorno == 1);

	cout << "GRACIAS POR USAR EL SOFTWARE DE CALCULADORA BASICA";


	cout << endl;
	system("pause");
	return 0;
}