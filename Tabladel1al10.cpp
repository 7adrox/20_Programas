#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Tabla1a10(){
	
int inicio = 1, fin = 10, multiplicar = 0;
cout<<"			Tablas de multiplicar del 1 al 10		"<<endl;

for (int i=inicio;i<=fin;i++){
	
		for(int ii=1;ii<=10;ii++){
		multiplicar = i * ii;
		cout<<i<< " X "<<ii<<" = "<<multiplicar<<endl;

		}
		cout<<endl;
}
}
