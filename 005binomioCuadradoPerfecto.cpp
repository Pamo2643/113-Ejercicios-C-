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
		cout<<"\nPrograma que calcula las raices de una ecuacion cuadrática"<<endl;
		cout<<"\n----------------------------------------------------------"<<endl;
		cout<<"\nDigite los coeficientes a, b, y c de la ecuación cuadrática"<<endl;
		cin>>a>>b>>c;//lectura de los datos de entrada
		cout<<endl;
		while(a==0)//validación de datos
		{
			cout<<"\nNo es una ecuación cuadrática, digite el coeficiente a"<<endl;
			cin>>a;//lectura de datos de entrada
		}
		if(b*b-4*a*c<0){
			cout<<"\nLa ecuación no tiene raíces reales"<<endl;
			system("pause");
			return 0;
		}
		r1=(-b+sqrt(b*b-4*a*c))/(2.0*a);//Cálculo de la primera raíz
		r2=(-b-sqrt(b*b-4*a*c))/(2.0*a);//Cálculo de la segunda raíz
		cout<<"\nIMPRESIÓN DE DATOS Y RESULTADOS"<<endl;
		cout<<"\n------------------------------------------------------------"<<endl;
		cout<<"\nEcuación cuadrática general aX^2+bX+c"<<endl;
		cout<<"\nEcuación cuadrática particular"<<a<<"X^2+"<<b<<"X+"<<c<<endl;
		cout<<"\nEl coeficiente cuadrático es "<<a<<endl;
		cout<<"\nEl coeficiente lineal es "<<b<<endl;
		cout<<"\nEl coeficiente término independiente es "<<c<<endl;
		cout<<"\nLa primera raíz de la ecuación cuadrática es: "<<r1<<endl;
		cout<<"\nLa segunda raíz de la ecuación cuadrática es: "<<r2<<endl;
		cout<<"\n------------------------------------------------------------"<<endl;
		cout<<"\n¿Desea seguir procesando?"<<endl;
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