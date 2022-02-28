#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Operaciones (){ 

	system("cls");
	int n1, n2; 
	int s = 0; 
	int r = 0; 
	int m = 0; 
	int d = 0;
	
	cout<<"			Suma, resta, multiplicacion y division		"<<endl;
	cout<<"\nEscribe el primer numero: ";
	cin>>n1;
	cout<<"Escribe el segundo  numero: ";
	cin>>n2;
	
	s = n1 + n2;
	r = n1 - n2;
	m = n1 * n2;
	d = n1 / n2;
	
	cout<<"_______________________"<<endl;
	cout<<"La suma es: "<<s<<endl;
	cout<<"La resta es: "<<r<<endl;
	cout<<"La multiplicacion es: "<<m<<endl;
	cout<<"La division es: "<<d<<endl;
	
	
}
