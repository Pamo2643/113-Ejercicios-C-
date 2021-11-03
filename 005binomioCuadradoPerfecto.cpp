#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, r1, r2;
	string seguir="S";
	setlocale(LC_ALL, "");
	while(seguir=="S" or seguir=="s")
	{
		system("cls");
		system("color 30");
		cout<<endl;
		cout<<"\nPrograma que calcula las raices de una ecuacion cuadr�tica"<<endl;
		cout<<"\n----------------------------------------------------------"<<endl;
		cout<<"\nDigite los coeficientes a, b, y c de la ecuaci�n cuadr�tica"<<endl;
		cin>>a>>b>>c;//lectura de los datos de entrada
		cout<<endl;
		while(a==0)//validaci�n de datos
		{
			cout<<"\nNo es una ecuaci�n cuadr�tica, digite el coeficiente a"<<endl;
			cin>>a;//lectura de datos de entrada
		}
		if(b*b-4*a*c<0){
			cout<<"\nLa ecuaci�n no tiene ra�ces reales"<<endl;
			system("pause");
			return 0;
		}
		r1=(-b+sqrt(b*b-4*a*c))/(2.0*a);//C�lculo de la primera ra�z
		r2=(-b-sqrt(b*b-4*a*c))/(2.0*a);//C�lculo de la segunda ra�z
		cout<<"\nIMPRESI�N DE DATOS Y RESULTADOS"<<endl;
		cout<<"\n------------------------------------------------------------"<<endl;
		cout<<"\nEcuaci�n cuadr�tica general aX^2+bX+c"<<endl;
		cout<<"\nEcuaci�n cuadr�tica particular"<<a<<"X^2+"<<b<<"X+"<<c<<endl;
		cout<<"\nEl coeficiente cuadr�tico es "<<a<<endl;
		cout<<"\nEl coeficiente lineal es "<<b<<endl;
		cout<<"\nEl coeficiente t�rmino independiente es "<<c<<endl;
		cout<<"\nLa primera ra�z de la ecuaci�n cuadr�tica es: "<<r1<<endl;
		cout<<"\nLa segunda ra�z de la ecuaci�n cuadr�tica es: "<<r2<<endl;
		cout<<"\n------------------------------------------------------------"<<endl;
		cout<<"\n�Desea seguir procesando?"<<endl;
		cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
		{
			cout<<"\nError. Digite S o N"<<endl;
			Sleep(500);
			cin>>seguir;
		}
							
	}
	cout<<endl<<endl;
	cout<<"\n"<<endl;
	system("pause");
	return 0;
}