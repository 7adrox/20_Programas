#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Tabla(){

system("cls");	
int tabla = 1,multiplicar = 0;
cout<<"			Tablas de multiplicar		"<<endl;
cout<<"\nIngrese Tabla: ";
cin>>tabla;

for (int i=0;i< 11;i++){
		multiplicar = tabla * i;
		cout<<tabla<< " X "<<i<<" = "<<multiplicar<<endl;

		}
}
