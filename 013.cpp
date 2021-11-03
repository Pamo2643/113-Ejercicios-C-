//programa que identifica qué clase de tríangulo es
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
		cout<<"\t\t\nPROGRAMA QUE IDENTIFICA UN TRIÁNGULO...\t"<<endl;
		cout<<"\t\t\n***************************************\t"<<endl;
		cout<<"\t\t\nVALIDANDO LOS DATOS"<<endl;
		cout<<"\t\t\nIngrese el valor de los lados"<<endl;
		cin>>ladoA>>ladoB>>ladoC;
		while(ladoA<=0 or ladoB<=0 or ladoC<=0 or ladoA>(ladoB+ladoC) or ladoB>(ladoA+ladoC) or ladoC>(ladoA+ladoB))
		{
			cout<<"\t\t\nUno o varios valores ingresados son incorrectos, digítelos nuevamente: "<<endl;cin>>ladoA>>ladoB>>ladoC;
		}
		cout<<"\t\t\nDeterminando el tipo de triángulo"<<endl;
		if(ladoA==ladoB and ladoB==ladoC){
			tipo="Equilátero";
		}
		else if((ladoA==ladoB and ladoB!=ladoC) or (ladoA==ladoC and ladoA!=ladoB) or (ladoB==ladoC and ladoB!=ladoA))
		{
			tipo="Isósceles";		
		}
		else if(ladoA!=ladoB and ladoB!=ladoC)
		{
			tipo="Escaleno";
		}
		cout<<"\t\t\nDATOS Y RESULTADOS"<<endl;
		cout<<"\t\t\n----------------------------------------"<<endl;
		cout<<"\t\t\nLado A del triángulo: "<<ladoA<<endl;
		cout<<"\t\t\nLado B del triángulo: "<<ladoB<<endl;
		cout<<"\t\t\nLado C del triángulo: "<<ladoC<<endl;
		cout<<"\t\t\nTipo de triángulo: "<<tipo<<endl;
		cout<<endl<<endl;
		cout<<"\t\t\n¿Desea seguir S o N?"<<endl;cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
	{
		cout<<"\t\t\nError. Digite S o N"<<endl;cin>>seguir;
	}
	}
	
	
	cout<<endl<<endl;
	system("pause");
	
	return 0;
}
	