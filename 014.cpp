//Programa que ingresa 4 números y los ordena de mayor a menor, deben mostrar los números capturados de mayor a menor
#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main()
{
	float a, b, c, d, ma, me;
	setlocale(LC_ALL,"");
	string seguir="S", tipo;
	while(seguir=="S" or seguir=="s")
	{
		system("cls");
		system("color 70");
		cout<<endl;
		cout<<"\nPrograma quue determina el mayor y menor de cuatro números"<<endl;
		cout<<"\n**********************************************************"<<endl;
		cout<<endl;
		cout<<"\nCaptura y validación de datos"<<endl;
		cout<<"\n**********************************************************"<<endl;
		cout<<"\n\Digite los cuatro números: "<<endl;
		cin>>a>>b>>c>>d;
		cout<<"\nProcesamiento de los datos"<<endl;
		if (a>b and a>c and a>d)
			ma=a;
		if (b>a and b>c and b>d)
			ma=b;
		if (c>a and c>b and c>d)
			ma=c;
		if (d>a and d>b and d>c)
			ma=d;
		if (a<b and a<c and a<d)
			me=a;
		if (b<a and b<c and b<d)
			me=b;
		if (c<a and c<b and c<d)
			me=c;
		if (d<a and d<b and d<c)
			me=d;
		cout<<"\nImprimir datos y resultados"<<endl;
		cout<<"\n-----------------------------------------------------------"<<endl;
		cout<<endl;
		cout<<"\nEl primer número es: "<<a<<endl;
		cout<<"\nEl segundo número es: "<<b<<endl;
		cout<<"\nEl tercer número es: "<<c<<endl;
		cout<<"\nEl cuarto número es: "<<d<<endl;
		cout<<"\nEl número mayor es: "<<ma<<endl;
		cout<<"\nEl número menor es: "<<me<<endl;
		cout<<endl<<endl;
		cout<<"\n¿Desea procesar nuevamente? S o N "<<endl;
		cin>>seguir;
		while(seguir!="N" and seguir!="n" and seguir!="S" and seguir!="s")
		{
			cout<<"\nError. Digite S o N"<<endl;
			cin>>seguir;
		}								
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}
	