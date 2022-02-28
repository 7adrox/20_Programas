#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

void Grados(){
	system("cls");
	double F, C, K;
	double calculoC, calculoF, calculoKF, calculoKC;
	double calculoCK, calculoFK;
	int X;
	string opcion;
	cout<<"1.	De grados Centigrados a Farenheit"<<endl;
	cout<<"2.	De grados Centigrados a Kelvin"<<endl;
	cout<<"3.	De grados Farenheit a Centigrados"<<endl;
	cout<<"4. 	De grados Farenheit a Kelvin"<<endl;
	cout<<"5. 	De grados Kelvin a Farenheit"<<endl;
	cout<<"6. 	De grados Kelvin a Centigrados"<<endl;
	cout<<"Selecciona una opcion:"<<endl;
	cin>>X;
	
	switch(X)
	{
	case 1:
		cout<<"Ingresa el valor en centigrados: "; cin>>C;
		calculoC= (C * 9/5) + 32;
		cout<<"El valor de centigrados a farenheit es de:  " <<calculoC;
	break;
	case 2:
		cout<<"Ingresa el valor en centigrados: "; cin>>C;
		calculoCK= C + 273.15 ;
		cout<<"El valor de centigrados a kelvin es de:  " <<calculoCK;
	break;
	case 3:
		cout<<"Ingresa el valor en fahrenheit: "; cin>>F;
		calculoF= (F-32) * 5/9;
		cout<<"El valor de Farenheit a centigrados es de:  " <<calculoF;
	break;
	case 4:
		cout<<"Ingresa el valor en fahrenheit: "; cin>>F;
		calculoFK= (F-32) * 5/9 + 273.15;
		cout<<"El valor de Farenheit a kelvin es de:  " <<calculoFK;
	break;
	case 5:
		cout<<"Ingresa el valor en grados kelvin: "; cin>>K;
		calculoKF=(K-273.15)* 9/5 + 32;
		cout<<"El valor de kelvin a farenheit es de:  " <<calculoKF;
	break;
	case 6:
		cout<<"Ingresa el valor en grados kelvin: "; cin>>K;
		calculoKC=K-273.15;
		cout<<"El valor de kelvin a centigrados es de:  " <<calculoKC;
	break;
	}
	
	cout<<"\n\n Deseas hacer otra conversion de grados? (s/n): "; cin>>opcion;
	if(opcion=="s")
	{
		Grados();
	}

}
