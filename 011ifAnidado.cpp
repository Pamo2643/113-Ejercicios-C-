/*Escriba, compile y ejecute un programa en C++ que calcule y valore el índice
de masa corporal calculado como imc = m/Y^2*/
#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <math.h>
using namespace std;
int main()
{
	float m, t, imc;
	string seguir="S", nom, valora;
	setlocale(LC_ALL, "");
	while(seguir=="S" or seguir=="s"){
	system("cls");
	system("color 70");
	cout<<endl;
	cout<<"\nPrograma que calcula y valora el índice de masa corporal"<<endl;
	Sleep(400);
	cout<<"\n--------------------------------------------------------"<<endl;
	Sleep(400);cout<<endl;
	cout<<"\nCaptura y validación de datos"<<endl;
	Sleep(400);
	cout<<"\n--------------------------------------------------------"<<endl;
	Sleep(400);
	cout<<"\nDigite el nombre del paciente: "<<endl;
	Sleep(400);cin>>nom;
	cout<<"\nDigite la masa en Kg: "<<endl;
	Sleep(400);cin>>m;
	while(m<=0)
	{
		cout<<"\nError, digite la masa en Kg: "<<endl;
		cin>>m;
	}
	cout<<"\nDigite la talla en metros: "<<endl;
	cin>>t;
	while(t<=0 or t>2.5)
	{
		cout<<"\nError, digite la talla en metros"<<endl;
		cin>>t;
	}
	cout<<"\nCalculando y valorando el I.M.C..."<<endl;
	imc = (float(m))/(pow(t,2));
	if(imc<18.8){
		valora = "insuficiencia ponderal";
	}
	else if(imc<25){
		valora = "intervalo normal";
	}
	else if(imc<30){
		valora = "Preobesidad";
	}
	else if(imc<35){
		valora = "Obesidad clase I";
	}
	else if(imc<40){
		valora = "Obesidad clase II";
	}
	else{
		valora = "Obesidad clase III";
	}
	cout<<"\nImprimir datos y resultados "<<endl;
	
	cout<<"\nNombre del paciente: "<<nom<<endl;
	cout<<"\nMasa del paciente: "<<m<<endl;
	cout<<"\nTalla del paciente: "<<t<<endl;
	cout<<"\nÍndice de masa corporal en Kg/m^2: "<<imc<<endl;
	cout<<"\nValoración del índice IMC"<<valora<<endl;
	cout<<"\n----------------------------------------------------------"<<endl;
	cout<<endl<<endl<<endl;
	cout<<"\n¿Desea procesar a otro paciente?"<<endl;
	cin>>seguir;
	while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
	{
		cout<<"\nError, digite S o N "<<endl;
		cin>>seguir;
	}
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}