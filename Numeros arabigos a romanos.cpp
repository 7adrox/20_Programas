#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Arabigo (){ 
	int n, uni, dec, cen, mil; 
	
	cout<<"			Numeros arabigos a romanos		"<<endl;
	cout<<"\nEscribe un numero: ";
	cin>>n;
	
	uni = n%10; n /= 10;
	dec = n%10; n /= 10;
	cen = n%10; n /= 10;
	mil = n%10; n /= 10;
	
	switch(mil){
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break; 
		case 3: cout<<"MMM"; break;
		case 4: cout<<"-I-V"; break; 
		case 5: cout<<"-V"; break; 
		case 6: cout<<"-VM"; break;
		case 7: cout<<"-VMM"; break;
		case 8: cout<<"-VMMM"; break; 
		case 9: cout<<"-I-X"; break;
	}
	switch(cen){
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CCC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCCC"; break;
		case 9: cout<<"CM"; break;
	}
	switch(dec){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break;
	}
	switch(uni){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
	}
	

}
