//programa que identifica qu� clase de tr�angulo es
#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
	float ladoA, ladoB, ladoC;
	string tipo, seguir="S";
	while(seguir=="S" or seguir=="s")
	{
		cout<<"\t\t\nPROGRAMA QUE IDENTIFICA UN TRI�NGULO...\t"<<endl;
		cout<<"\t\t\n***************************************\t"<<endl;
		cout<<"\t\t\nVALIDANDO LOS DATOS"<<endl;
		cout<<"\t\t\nIngrese el valor de los lados"<<endl;
		cin>>ladoA>>ladoB>>ladoC;
		while(ladoA<=0 or ladoB<=0 or ladoC<=0 or ladoA>(ladoB+ladoC) or ladoB>(ladoA+ladoC) or ladoC>(ladoA+ladoB))
		{
			cout<<"\t\t\nUno o varios valores ingresados son incorrectos, dig�telos nuevamente: "<<endl;cin>>ladoA>>ladoB>>ladoC;
		}
		cout<<"\t\t\nDeterminando el tipo de tri�ngulo"<<endl;
		if(ladoA==ladoB and ladoB==ladoC){
			tipo="Equil�tero";
		}
		else if((ladoA==ladoB and ladoB!=ladoC) or (ladoA==ladoC and ladoA!=ladoB) or (ladoB==ladoC and ladoB!=ladoA))
		{
			tipo="Is�sceles";		
		}
		else if(ladoA!=ladoB and ladoB!=ladoC)
		{
			tipo="Escaleno";
		}
		cout<<"\t\t\nDATOS Y RESULTADOS"<<endl;
		cout<<"\t\t\n----------------------------------------"<<endl;
		cout<<"\t\t\nLado A del tri�ngulo: "<<ladoA<<endl;
		cout<<"\t\t\nLado B del tri�ngulo: "<<ladoB<<endl;
		cout<<"\t\t\nLado C del tri�ngulo: "<<ladoC<<endl;
		cout<<"\t\t\nTipo de tri�ngulo: "<<tipo<<endl;
		cout<<endl<<endl;
		cout<<"\t\t\n�Desea seguir S o N?"<<endl;cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
	{
		cout<<"\t\t\nError. Digite S o N"<<endl;cin>>seguir;
	}
	}
	
	
	cout<<endl<<endl;
	system("pause");
	
	return 0;
}
	