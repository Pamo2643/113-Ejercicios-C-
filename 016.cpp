//programa que dice cu�ntos d�gitos tiene un n�mero entre 1 y 100000
#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main()
{
	int num;
	setlocale(LC_ALL, "");
	string seguir="S", tipo;
	while(seguir=="S" or seguir=="s")
	{
		system("cls");
		system("Color 70");
		cout<<endl;
		cout<<"\n\n\tPrograma que determina cu�ntos d�gitos tiene un n�mero";
		cout<<"\n\t-------------------------------------------------------\n";
		cout<<"\n\n\tCaptura y validaci�n de datos";
		cout<<"\n\tDigite un n�mero natural menor que 100000:\t";cin>>num;
		while(num<=0 or num>100000)
		{
			cout<<"\n\tError. El n�mero debe ser <100000 y >0, digite el n�mero otra vez: ";
			cin>>num;
		}
		cout<<"\n\tProcesando los datos\n\n";
		if (num>0 and num<10)
			tipo="El numero tiene un d�gito";
		if (num>=10 and num<100)
			tipo="El n�mero tiene dos d�gitos";
		if (num>=100 and num<1000)
			tipo="El n�mero tiene tres d�gitos";
        if (num>=1000 and num<10000)
            tipo="El n�mero tiene cuatro d�gitos";
        if (num>=10000 and num<100000)
            tipo="El n�mero tiene cinco d�gitos";
        if (num==100000)
            tipo="El n�mero tiene seis d�gitos";
        cout<<"\n\tImprimir datos y resultados";
        cout<<"\n\t---------------------------";
		cout<<"\n\n\tEl n�mero digitado es:\t"<<num;
		cout<<"\n\tD�gitos del n�mero:\t"<<tipo;
		cout<<"\n\n\t�Desea continuar? S o N  ";cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
		{
			cout<<"\n\tERROR. Digite S o N";cin>>seguir;
		}
		
        
		
	}
	cout<<endl<<endl<<endl;
	cout<<"\t";
	system("pause");
	return 0;
}