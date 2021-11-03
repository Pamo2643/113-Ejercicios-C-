/*Programa que calcula el promedio anual del incremento poblacional en los últimos tres años
en los útlimos tres años, el porcentaje de incremento se lee por teclado y se debe valorar.
Si el incremento es >30% se considera alta, entre 10% y 30% es media y <10% es baja.*/
#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	float p1, p2, p3, pa;
	setlocale(LC_ALL,"");
	string seguir = "S", val;
	while (seguir=="S" or seguir == "s")
	{
		system("cls");//Comando de limpieza de la pantalla
		system("Color 70");//Comando de configuración de color
		cout<<endl;
		cout<<"\n\nPrograma que calcula el promedio del incremento poblacional";
		cout<<"\n\t--------------------------------------------\n";
		Sleep(400);cout<<endl;
		cout<<"\n\tCaptura y validación de datos";
		Sleep(400);
		cout<<"\n\t------------------------------------\n\n";
		Sleep(400);
		cout<<"\n\tDigite el primer incremento poblacional (factor decimal)\t";
		cin>>p1;
		while(p1<0 or p1>1)
		{
			cout<<"\n\tError. Digite el primer incremento poblacional (fracción decimal):\t";
			Sleep(400);cin>>p1;
		}
		cout<<"\n\tDigite el segundo incremento poblacional(fracción decimal):\t";
		cin>>p2;
		while(p2<0 or p2>1)
		{
			cout<<"\n\tError. Digite el segundo incremento poblacional (fracción decimal):\t";
			Sleep(400);cin>>p2;
		}
		cout<<"\n\tDigite el tercer incremento poblacional(fracción decimal):\t";
		cin>>p3;
		while(p3<0 or p3>1)
		{
			cout<<"\n\tError. Digite el tercer incremento poblacional (fracción decimal):\t";
			Sleep(400);cin>>p3;
		}
		cout<<"\n\tProcesando los datos...\n\n";
		Sleep(400);
		pa=cbrt((1+p1)*(1+p2)*(1+p3))-1;
		if (pa>0.3)
		{
			val="ALta";
		}
		else if (pa>0.1)
		{
			val="Media";
		}
		else
		{
			val="Baja";
		}
		cout<<"\n\tImprimir datos y resultados";
		cout<<"\n\t----------------------------";
		cout<<endl;
		cout<<"\n\tPrimer incremento poblacional:\t\t"<<p1*100<<"%";
		Sleep(400);
		cout<<"\n\tSegundo incremento poblacional:\t\t"<<p2*100<<"%";
		Sleep(400);
		cout<<"\n\tTercer incremento poblacional:\t\t"<<p3*100<<"%";
		Sleep(400);
		cout<<"\n\tPromedio incremento poblacional:\t\t"<<pa*100<<"%";
		Sleep(400);
		cout<<"\n\tValoración del promedio de incremento:\t"<<val;
		Sleep(400);
		cout<<endl<<endl;
		cout<<"\n\t¿Desea procesar nuevamente? S o N\t";
		Sleep(400);cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
		{
			cout<<"\n\tError. Digite S o N\n";
			Sleep(500);cin>>seguir;
		}
	}
	cout<<endl<<endl;
	cout<<"\t";system("pause");
	return 0;
}
	