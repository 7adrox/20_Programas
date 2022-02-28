#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void Decimales()
{
	system("cls");
	float x;
	string opcion;
    cout<<"Ingresa un numero"<<endl;
    cin>>x;
    if((x<1)||(x>999)) cout<<"Ingresa un numero del 1 al 999\n";
    else
    {
        if(x>=900)   {cout<<"novecientos  ";	x=x-900;}
        if(x>=800)   {cout<<"ochocientos  ";	x=x-800;}
        if(x>=700)   {cout<<"setecientos ";		x=x-700;}
        if(x>=600)   {cout<<"seisientos ";		x=x-600;}
        if(x>=500)   {cout<<"quinientos ";		x=x-500;}
        if(x>=400)   {cout<<"cuatrocientos ";	x=x-400;}
        if(x>=300)   {cout<<"trescientos ";		x=x-300;}
        if(x>=200)   {cout<<"doscientos ";		x=x-200;}
        if(x>100)    {cout<<"ciento ";		x=x-100;}
        if(x>=100)   {cout<<"cien ";		x=x-100;}
        if(x>90.999) {cout<<"noventa y ";	x=x-90; }
        if(x>=90)   {cout<<"noventa ";		x=x-90; }
        if(x>80) 	{cout<<"ochenta y ";	x=x-80; }
        if(x>=80)   {cout<<"ochenta ";		x=x-80; }
        if(x>70) 	{cout<<"setenta y ";	x=x-70; }
        if(x>=70)   {cout<<"setenta ";		x=x-70; }
        if(x>60) 	{cout<<"sesenta y ";	x=x-60; }
        if(x>=60)   {cout<<"sesenta";		x=x-60; }
        if(x>50) 	{cout<<"cincuenta y ";	x=x-50; }
        if(x>=50)   {cout<<"cincuenta";		x=x-50; }
        if(x>40) 	{cout<<"cuarenta y ";	x=x-40; }
        if(x>=40)   {cout<<"cuarenta";		x=x-40; }
        if(x>30) 	{cout<<"treinta y ";	x=x-30; }
        if(x>=30)   {cout<<"treinta";		x=x-30; }
        if(x>20) 	{cout<<"veinti";		x=x-20; }
        if(x>=20)   {cout<<"veinte";	x=x-20; }
        if(x>=16)   {cout<<"dieciseis ";x=x-16; }
        if(x>=15)   {cout<<"quince";	x=x-15; }
        if(x>=14)   {cout<<"catorce";	x=x-14; }
        if(x>=13)   {cout<<"trece";		x=x-13; }
        if(x>=12)   {cout<<"doce";		x=x-12; }
        if(x>=11)   {cout<<"once";		x=x-11; }
        if(x>=10)   {cout<<"diez";		x=x-10; }
        if(x>=9)    {cout<<"nueve";		x=x-9;  }
        if(x>=8)    {cout<<"ocho";		x=x-8;  }
        if(x>=7)    {cout<<"siete";		x=x-7;  }
        if(x>=6)    {cout<<"seis";		x=x-6;  }
        if(x>=5)    {cout<<"cinco";		x=x-5;  }
    	if(x>=4)    {cout<<"cuatro";	x=x-4;  }
        if(x>=3)    {cout<<"tres";		x=x-3;  }
        if(x>=2)    {cout<<"dos";		x=x-2;  }
        if(x>=1)    {cout<<"uno";		x=x-1;  }
        if(x>=0.9)  {cout<<" con nueve centimos"; 	x=x-0.9;}
        if(x>=0.8)  {cout<<" con ocho centimos"; 	x=x-0.8;}
        if(x>=0.7)  {cout<<" con siete centimos"; 	x=x-0.7;}
        if(x>=0.6)  {cout<<" con seis centimos"; 	x=x-0.6;}
        if(x>=0.5)  {cout<<" con cinco centimos"; 	x=x-0.5;}
        if(x>=0.4)  {cout<<" con cuatro centimos"; 	x=x-0.4;}
        if(x>=0.3)  {cout<<" con tres centimos"; 	x=x-0.3;}
        if(x>=0.2)  {cout<<" con dos centimos"; 	x=x-0.2;}
        if(x>=0.1)  {cout<<" con uno centimos"; 	x=x-0.1;}
        }
        cout<<"\n\n Desea pasar otro numero con decimal a letras (s/n): "; cin>>opcion;
        if(opcion=="s")
        {
        	Decimales();
		}

}
