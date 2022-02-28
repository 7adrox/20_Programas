#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Enteros (){ 

	system("cls");	
	int n, uni, dec, cen, mil; 
	
	cout<<"			Numeros enteros a letras		"<<endl;
	cout<<"\nEscribe un numero: ";
	cin>>n;
	
	uni = n%10; n /= 10;
	dec = n%10; n /= 10;
	cen = n%10; n /= 10;
	mil = n%10; n /= 10;
	
	switch(mil){
		case 0: cout<<""; break;
		case 1: cout<<"mil "; break;
		case 2: cout<<"dos mil "; break; 
		case 3: cout<<"tres mil "; break;
		case 4: cout<<"cuatro mil "; break; 
		case 5: cout<<"cinco mil "; break; 
		case 6: cout<<"seis mil "; break;
		case 7: cout<<"siete mil "; break;
		case 8: cout<<"ocho mil "; break; 
		case 9: cout<<"nueve mil "; break;
	}
	switch(cen){
		case 0: cout<<""; break;
		case 1: if (dec==0  && uni==0){
			cout<<"cien "; 
		} 
		else {
			cout<<"ciento ";	
		} 
		break;
		case 2: cout<<"doscientos "; break;
		case 3: cout<<"trescientos "; break;
		case 4: cout<<"cuatrocientos "; break;
		case 5: cout<<"quinientos "; break;
		case 6: cout<<"seiscientos "; break;
		case 7: cout<<"setecioentos "; break;
		case 8: cout<<"ochocietos "; break;
		case 9: cout<<"novecientos "; break;
	}
	switch(dec){
		case 1: switch (uni){
			case 0: cout<<"diez "; break;
			case 1: cout<<"once "; break;
			case 2: cout<<"doce "; break;
			case 3: cout<<"trece "; break;
			case 4: cout<<"catorce "; break;
			case 5: cout<<"quince "; break;
			case 6: cout<<"dieciseis "; break;
			case 7: cout<<"diecisiete "; break;
			case 8: cout<<"dieciocho "; break;
			case 9: cout<<"diecinueve "; break;
		}
		break;	
		
		case 2: switch (uni){
			case 0: cout<<"veinte "; break;	
			case 1: cout<<"veintiuno "; break;
			case 2: cout<<"veintidos "; break;
			case 3: cout<<"veintitres "; break;
			case 4: cout<<"veinticuatro "; break;
			case 5: cout<<"veinticinco "; break;
			case 6: cout<<"veintiseis "; break;
			case 7: cout<<"veintisiete "; break;
			case 8: cout<<"veintiocho "; break;
			case 9: cout<<"veintinueve "; break;		
		}
		break;
		
		case 3: if (uni==0){
		 cout<<"treinta "; break;
		}
		else{
		 cout<<"treinta y "; break;
		}
		break;
		
		case 4: if (uni==0){
		 cout<<"cuarenta "; break;
		}
		else{
		 cout<<"cuarenta y "; break;
		}
		break;
		
		case 5: if (uni==0){
		 cout<<"cincuenta "; break;
		}
		else{
		 cout<<"cincuenta y "; break;
		}
		break;
		
		case 6: if (uni==0){
		 cout<<"sesenta "; break;
		}
		else{
		 cout<<"sesenta y "; break;
		}
		break;
		
		case 7: if (uni==0){
		 cout<<"setenta "; break;
		}
		else{
		 cout<<"setenta y "; break;
		}
		break;
		
		case 8: if (uni==0){
		 cout<<"ochenta "; break;
		}
		else{
		 cout<<"ochenta y "; break;
		}
		break;
		
		case 9: if (uni==0){
		 cout<<"noventa "; break;
		}
		else{
		 cout<<"noventa y "; break;
		}
		break;
		
	}

	switch(uni){
		case 0: if (mil==0 && cen==0 && dec==0){
			cout<<"cero"; break;
			}
			else {
				cout<<""; break;
			}
			break;
			
		case 1: if (mil==0 && cen==0 && dec==0) {
				cout<<"uno";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"uno";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"uno";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"uno";
			}
			else { 
				cout<<"";
			}
			break;
			
		case 2: if (mil==0 && cen==0 && dec==0) {
				cout<<"dos ";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"dos ";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"dos ";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"dos ";
			}
			else { 
				cout<<"";
			}
			break;
		
		case 3: if (mil==0 && cen==0 && dec==0) {
				cout<<"tres ";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"tres ";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"tres ";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"tres ";
			}
			else { 
				cout<<"";
			}
			break;	
		
		case 4: if (mil==0 && cen==0 && dec==0) {
				cout<<"cuatro ";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"cuatro ";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"cuatro ";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"cuatro ";
			}
			else { 
				cout<<"";
			}
			break;
		
		case 5: if (mil==0 && cen==0 && dec==0) {
				cout<<"cinco ";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"cinco ";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"cinco ";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"cinco ";
			}
			else { 
				cout<<"";
			}
			break;	
		
		case 6: if (mil==0 && cen==0 && dec==0) {
				cout<<"sies ";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"sies ";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"sies ";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"sies ";
			}
			else { 
				cout<<"";
			}
			break;
		
		case 7: if (mil==0 && cen==0 && dec==0) {
				cout<<"siete ";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"siete ";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"siete ";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"siete ";
			}
			else { 
				cout<<"";
			}
			break;
		
		case 8: if (mil==0 && cen==0 && dec==0) {
				cout<<"ocho ";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"ocho ";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"ocho ";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"ocho ";
			}
			else { 
				cout<<"";
			}
			break;
			
		case 9: if (mil==0 && cen==0 && dec==0) {
				cout<<"nueve ";
			} else if (mil==0 && cen==0 && dec>=3){
				cout<<"nueve ";
			} else if (mil==0 && cen==1 && dec>=3 || dec==0){
				cout<<"nueve ";
			} else if (mil==1 && cen==0 && dec>=3 || dec==0){
				cout<<"nueve ";
			}
			else { 
				cout<<"";
			}
			break;							
	}		

}
