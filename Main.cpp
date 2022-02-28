#include "Suma, resta, multiplicacion y division.cpp"
#include "Par o Impar.cpp"
#include "Km a millas; m a pul; lb a k y visceversa.cpp"
#include "Palindromo.cpp" 
#include "Numeros arabigos a romanos.cpp"
#include "Numeros enteros a letras.cpp"
#include "Numeros decimales a letras.cpp"
#include "Tabla de multiplicar.cpp"
#include "Tabladel1al10.cpp"
#include "grafica.cpp"
#include "Binario.cpp"
#include "Hexa.cpp"
#include "Figuras.cpp"
#include "Punto.cpp"
#include "cajero.cpp"
#include "Hipotenusa.cpp"
#include "animacion.cpp"
#include "Adivina.cpp"
#include "Ordenar.cpp"
#include "Grados.cpp" 
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void menu()
{
	cout<<"------------- 20 Programas -------------"<<endl;
	cout<<"\n1. Suma, resta, multiplicacion y division"<<endl;
	cout<<"2. Par o impar"<<endl; 
	cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<"4. Determinar si una palabra o numero es palindromo"<<endl;
	cout<<"5. De numeros arabigos a Romanos"<<endl;
	cout<<"6. Conversion de numeros enteros a letras"<<endl;
	cout<<"7. Conversion de numeros con decimales a letras"<<endl;
	cout<<"8. Tabla de Multiplicar"<<endl;
	cout<<"9. Tablas del 1 al 10"<<endl;
	cout<<"10. Multiplicacion grafica"<<endl;
	cout<<"11. De decimal a binario"<<endl;
	cout<<"12. De decimal a Hexadecimal"<<endl;
	cout<<"13. Figuras geometricas"<<endl;
	cout<<"14. Mover punto por la pantalla"<<endl;
	cout<<"15. Cajero automata "<<endl;
	cout<<"16. Calcular hipotenusa"<<endl;
	cout<<"17. Adivinar numero"<<endl;
	cout<<"18. Ordenar ascendente y descendente"<<endl;
	cout<<"19. Conversion de Grados"<<endl;
	cout<<"20. Animacion"<<endl;

	cout<<"\n Elija la opcion que deseas: ";
}

int main()
{
	int opcion;
	double total=0;
	menu();
	cin>>opcion;

	switch(opcion)
	{
		case 1:
			Operaciones();
			break;
		case 2:
			Par();
			break;
		case 3:
			Conversiones();
			break;
		case 4:
			Palindromo();
			break;
		case 5:
			Arabigo();
			break;
		case 6:
			Enteros();
			break;
		case 7:
			Decimales();
			break;
		case 8:
			Tabla();
			break;
		case 9:
			Tabla1a10();
			break;
		case 10:
			grafica();
			break;
		case 11:
			Binario();
			break;
		case 12:
			Hexa();
			break;
		case 13:
			Figuras();
			break;
		case 14:
			Punto();
			break;
		case 15:
			cajero(total);
			break;
		case 16:
			Hipotenusa();
			break;
		case 17:
			Ordenar();
			break;
		case 18:
			Adivina();
			break;
		case 19:
			Grados();
			break;
		case 20:
			animacion();
			break;
	}
	return 0;
}
