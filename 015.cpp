//programa que identifica qué clase de tríangulo es
#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main()
{
	float ib;
	int fc, ts, td;
	setlocale(LC_ALL, "");
	string seguir="S", tipo, nom;
	while(seguir=="S" or seguir=="s")
	{
		system("cls");//Limpieza de pantalla
		system("color 70");//configuración de color
		cout<<endl;
		cout<<"\n\n\tPrograma que determina el índice de barach\n";
		Sleep(400);
		cout<<"\t*******************************\n";
		Sleep(400);cout<<endl;
		cout<<"\n\tDigite el nomnbre del paciente:\t";
		cin>>nom;
		cout<<"\n\tDigite la frecuencia cardiaca\t";
		cin>>fc;
		while(fc<=0)
		{
			cout<<"\n\tDigite la frecuencia cardiaca:\t";
			cin>>fc;
		}
		cout<<"\n\tDigite la tensión diastólica\t";
		cin>>td;
		while(td<=0)
		{
			cout<<"\n\tDigite tensión diastólica:\t";
			cin>>td;
		}
		cout<<"\n\tDigite la tensión sistólica\t";
		cin>>ts;
		while(ts<=0)
		{
			cout<<"\n\tDigite tensión sistólica:\t";
			cin>>ts;
		}
		cout<<"\n\tProcesando los datos...\n\n";
		ib=(fc*(ts+td))/100;
		if(ib<110)
			tipo="Tendencia a la hipotensión";
		if(ib>=110 and ib<=170)
			tipo="Normal";
		if(ib>170 and ib<=200)
			tipo="Tendencia a la hipertensión";
		if(ib>200)
			tipo="Hipertenso";
		cout<<"\n\tImprimir datos y resultados";
		cout<<"\n\t-------------------------------";
		cout<<endl;
		cout<<"\n\tEl nombre del paciente es:\t"<<nom;Sleep(400);
		cout<<"\n\tLa frecuencia cardiaca p/m es:\t"<<fc;Sleep(400);
		cout<<"\n\tLa tensión diastólica mm Hg es:\t"<<td;Sleep(400);
		cout<<"\n\tLa tensión sistólica mm Hg es:\t"<<ts;Sleep(400);
		cout<<"\n\tEl índice de barach es:\t"<<ib;Sleep(400);
		cout<<"\n\tLa valoración del índice es:\t"<<tipo;Sleep(400);
		cout<<endl<<endl;
		cout<<"\n\t¿Desea procesar otro paciente? S o N\t";Sleep(400);
		Sleep(400);cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
		{
			cout<<"\n\tError. Digite S o N\t";
			Sleep(500);
			cin>>seguir;
		}
	}
	cout<<endl<<endl;cout<<"\t";
	system("pause");
	return 0;
}
	