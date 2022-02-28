#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void Hipotenusa(){
	system("cls");
 int co,ca;
 float h;
 
 cout<<"Ingresa el cateto opuesto:";
 cin>>co;
 
 cout<<"Ingresa el cateto adyacente:";
 cin>>ca;
 
 h=sqrt (pow(co,2)+pow(ca,2));
 
 cout<<"la hipotenusa es:"<<h;
 
 cin.get();
}
