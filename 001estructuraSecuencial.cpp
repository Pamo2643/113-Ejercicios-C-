/*Escriba, compile y ejecute un programa en C++ que, dado un n�mero
ingresado por teclado, retorne su raiz cuadrada y el cuadrado.*/
#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <math.h>

using namespace std;
int main(){
	float num, raiz, cua;//Definimos la variables reales
	string seguir="S";//Definimos la variable de tipo cadena y asignaci�n
	setlocale(LC_ALL,"");
	while(seguir=="S" or seguir=="s"){
		system("cls");//Comando para limpiar la pantalla
		cout<<"\n\tProgrma que calcula la raiz cuadrada y el cuadrado de un n�mero";
		cout<<"\n\t_____________________________________________\n\n";
		cout<<"\n\tDigite un n�mero\t";
		cin>>num;//Captura el n�mero digitado
		system("color 20");//Configura el color
		if(num<0){//valida si el n�mero es negativo
			cout<<"\n\tError: El n�mero no tiene raiz real\n";
		}
		else{
			raiz=sqrt(num);//calcula la raiz cuadrada del n�mero
			cua=pow(num, 2);//calcula el cuadrado del n�mero
		}
		cout<<"\n\n\tImprimir datos y resultados";
		cout<<"\n\t----------------------------------------------\n\n";
		cout<<"\n\t El n�mero digitado es:\t\t"<<num<<endl<<endl;
		if (num >=0){
			cout<<"\n\tLa raiz cuadrada es:\t\t"<<"+/-"<<raiz<<"\n\n";
			cout<<"\n\tEl cuadrado del n�mero es:\t"<<cua<<"\n\n";
			cout<<"\n\t-----------------------------------------\n\n";
			cout<<"\n\t�Desea continuar procesando? ";
			cin>>seguir;
			while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n"){
				cout<<"\n\tError: Digite S o N\t";
				Sleep(500);cin>>seguir;
				cout<<endl<<endl;
				system("pause");
				return 0;
			}
		}
	}
	
	return 0;
}
