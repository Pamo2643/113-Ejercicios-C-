/*Escriba, compile y ejecute un programa en C++ que convierta la temperatura de 
grados Celsius a grados Farenheit, Kelvin y Rankime.*/
#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	float C, K, F, R;
	string seguir="S";
	while(seguir=="S" or seguir=="s")
	{
		system("cls");
		system("color 30");
		setlocale(LC_ALL,"");
		cout<<endl;
		cout<<"\nPROGRAMA QUE CONVIERTE LA TEMPERATURA CELSIUS A OTROS GRADOS"<<endl;
		cout<<"\n------------------------------------------------------------"<<endl;
		cout<<"\nDIGITE LA TEMPERATURA EN GRADOS CELSIUS: ";
		cin>>C;//lectura de los datos
		while(C<-273)
		{
			cout<<"\nDato incorrecto, digite la temperatura de nuevo"<<endl;
			cin>>C;
		}
		K=C+273; F=((9.0/5)*C)+32; R=F+460;//Conversión de temperaturas
		cout<<"\nIMPRIMIR DATOS Y RESULTADOS"<<endl;
		cout<<"\n------------------------------------------------------------"<<endl;
		cout<<endl;
		cout<<"\nLa temperatura en grados Celsius es: "<<C<<endl;
		cout<<"\nLa temperatura en grados Kelvin es: "<<K<<endl;
		cout<<"\nLa temperatura en grados Farenheit es: "<<F<<endl;
		cout<<"\nLa temperatura en grados Rankime es: "<<R<<endl;
		cout<<"\n------------------------------------------------------------"<<endl;
		cout<<"\n¿Desea continuar procesando So N"<<endl;
		cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
		{
			cout<<"\nError. Digite S o N"<<endl;
			Sleep(500);
			cin>>seguir;
		}
}
	cout<<endl<<endl;
	cout<<"\t"<<endl;
	system("pause");
	
	
	return 0;
}