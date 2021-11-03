/*Escriba, compile y ejecute un programa en C++ que 
determine la distancia de una escalera apoyaba en 
la base de un edificio*/
#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;
int main()
{
	float dis, ang, hipot;
	string seguir = "S";
	setlocale(LC_ALL,"");
	while(seguir=="S" or seguir=="s")
	{
		system("cls");//comando de limpieza de pantalla
		system("color 70");//configuración de color
		cout<<"\n\n\n\tPrograma que calcula la distancia de la base de la escalera al edificio\n";
		cout<<"\t****************************************************************************\n";
		cout<<"\n\n\tDigite los datos de la hipotenusa en metros\n\n\t";
		cin>>hipot;//lectura de los datos de entrada
		cout<<"\n\n\tDigite el valor del ángulo en grados >0 y <90\n\n\t";
		cin>>ang;//Lectura de los datos de entrada
		while(hipot<0 or ang<=0 or ang>=90)
		{
			cout<<"\n\tError, digite los datos positivos de la hipotenusa y el ángulo tiene que ser mayor que cero y menor que 90\n\n\t";
			cin>>hipot>>ang;//Lectura de los datos de entrada
		}
		dis=((float)hipot)*sin(ang*3.1416/180);//Cálculo de la distancia
		cout<<"\n\tImprimir datos y resultados \n";
		cout<<"\t------------------------------\n";
		cout<<endl;
		cout<<"\n\tHipotenusa(longitud de la escalera en m): \t"<<hipot<<endl<<endl;
		cout<<"\n\tÁngulo en grados de la escalera: \t\t"<<ang<<endl<<endl;
		cout<<"\n\tDistancia de la escalera al edificio en m: \t"<<dis<<endl<<endl;
		cout<<"\n\t----------------------------\n";
		cout<<"\n\t¿Desea continuar procesando S o N?\t";
		cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
		{
			cout<<"\n\tError. Digite S N\t";
			Sleep(500);
			cin>>seguir;
		}		
	}
	cout<<endl<<endl;
	cout<<"\t";
	system("pause");
	return 0;
}
