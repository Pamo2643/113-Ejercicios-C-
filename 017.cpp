//Programa que ordena de menor a mayor tres números que se leen por teclado
#include <iostream>
#include <string>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main()
{
	int n1, n2, n3, me, in, in, ma;
	string seguir="S";
    setlocale(LC_ALL, "");
    while (seguir=="S" or seguir=="s")
    {
        system("cls");//Programa de limpieza de la pantalla
        system("color 70");//Comando de configuraciÃ³n de color
        cout<<endl;
        cout<<"\n\n\t¡PROGRAMA QUE ORDENA TRES NÚMEROS DE MENOR A MAYOR!";
        cout<<"\n\t--------------------------------------\n";
        Sleep(400);
        cout<<endl;
        cout<<"\n\tCaptura y validación de datos";
        Sleep(400);
        cout<<"\n\t---------------------\n\n";
        Sleep(400);
        cout<<"\n\tDigite los tres números a ordenar\t";
        cin>>n1>>n2>>n3;
        cout<<"\n\tProcesando los datos...\n\n";
        Sleep(400);
        if(n1>n2 and n2>n3){
            ma=n1;in=n2;me=n3;
        }
        if(n1>n3 and n3>n2){
            ma=n1;in=n3;me=n2;
        }
        if(n2>n1 and n1>n3){
            ma=n2;in=n1;me=n3;
        }
        if(n2>n3 and n3>n1){
            ma=n2;in=n3;me=n1;
        }
        if(n3>n1 and n1>n2){
            ma=n3;in=n1;me=n2;
        }
        if(n3>n2 and n2>n1){
            ma=n3;in=n2;me=n1;
        }
        cout<<"\n\tImprimir datos y resultados";
        cout<<"\n\t--------------------------";
        cout<<endl;
        cout<<"\n\tEl nÃºmero menor es:\t\t"<<me;Sleep(400);
        cout<<"\n\tEl nÃºmero intermedio es:\t"<<in;Sleep(400);
        cout<<"\n\tEl nÃºmero mayor es:\t\t"<<ma;Sleep(400);
        cout<<endl<<endl;
        cout<<"\n\tÂ¿Desea procesar otros nÃºmeros? S o N\t";
        Sleep(400);cin>>seguir;
        while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n"){
            cout<<"\n\tError. Digite S o N\t";
            Sleep(500);
            cin>>seguir;
        }
    }
    cout<<endl<<endl;
    cout<<"\t";system("pause");
	return 0;
}
	