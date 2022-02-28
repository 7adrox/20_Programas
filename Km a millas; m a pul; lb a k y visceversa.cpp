#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Conversiones (){ 
	
	system("cls");
	float n; 
	float kmmll = 0; 
	float mllkm = 0; 
	float mp = 0; 
	float pm = 0;
	float lk = 0;
	float kl = 0;
	
	cout<<"			Kilometros a millas, metros a pulgadas, libras a kilos y viceversa		"<<endl;
	cout<<"\nIngresa la magnitud: ";
	cin>>n;
	
	kmmll = n / 1.609;
	mllkm = n * 1.609;
	mp = n * 39.37;
	pm = n / 39.37;
	lk = n / 2.205;
	kl = n * 2.205;
	
	cout<<"______________________________"<<endl;
	cout<<"kilometros a millas: "<<kmmll<<endl;
	cout<<"millas a kilometros : "<<mllkm<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"metros a pulgadas: "<<mp<<endl;
	cout<<"pulgadas a metros: "<<pm<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"libras a kilos: "<<lk<<endl;
	cout<<"kilos a libras: "<<kl<<endl;
	
}
