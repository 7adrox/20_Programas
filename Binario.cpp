#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void Binario()
{
	system("cls");
	int n;
	string opcion;
	short binario[10];
	
	cout<<"Ingresa el numero para pasarlo a binario: "; cin>>n;
	for(int i=0; i<8; i++)
	{
		binario[i] = n % 2;
		n /=2;
	}
	cout<<"El numero en binario es: ";
	for(int i=7;i>=0; i--)
	{
		cout<<binario[i];
	}
	cout<<"\n\n Deseas convertir otro numero a binario (s/n): "; cin>>opcion;
	if(opcion=="s")
	{
		Binario();
	}

}
