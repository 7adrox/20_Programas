#include <iostream>
#include <cstring>
#include <windows.h>
#include <conio.h>
using namespace std;
void Palindromo(){
	char derecho [100], reves[100];
	
	cout<<"			Determinar si es palindromo		"<<endl;
	cout<<"\nEscribe la palabra: "<<endl;
	cin>>derecho;
	
	for(int i=(strlen(derecho)-1);i>=0;i--){
		reves[strlen(derecho)-1-i]=derecho[i];
	}
	reves[strlen(derecho)]='\0';
	
	if(strcmp(derecho,reves)==0){
		cout<<"______________________"<<endl;
		cout<<"Es palindromo";
	}
	else { cout<<"______________________"<<endl;
		cout<<"No es palindromo";
	}

		
}
