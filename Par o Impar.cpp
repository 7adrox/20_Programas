#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Par (){ 
	
	system("cls");
	int n;

	cout<<"			Par o Impar		"<<endl;
	cout<<"\nEscribe un numero: ";
	cin>>n;
	
	if(n%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}

}
