//programa que calcula el valor a pagar en una factura de acuerdo a la forma de pago
#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

using namespace std;
int main()
{
	float p, tv, d, vp, v;
	int can, fp;
	string seguir="S",cod,des,pag;
	while(seguir=="S" or seguir=="s")
	{
		system("cls");
		system("color 70");
		cout<<endl;
		cout<<"\t\tPrograma que calcula el total a pagar de una factura"<<endl;
		cout<<"\t\t****************************************************"<<endl;
		cout<<"\nCaptura y validación de datos"<<endl;
		cout<<"\nDigite el código del artículo: "; cin>>cod;
		cout<<"\nIngrese la descripción del artículo: "; cin>>des;
		cout<<"\nDigite el precio del artículo: ";cin>>p;
		while(p<=0)
		{
			cout<<"\nERROR. El valor no puede ser negativo"<<endl;cin>>p;
		}
		cout<<"\nIngrese la cantidad de la compra: ";cin>>can;
		while(can<=0)
		{
			cout<<"\nERROR. Ingrese una cantidad válida"<<endl;cin>>can;
		}
		cout<<"\nDigite el número de la forma de pago: 1.Efectivo 2.Cheque 3.Tarjeta"<<endl;cin>>fp;
		while(fp<1 or fp>3)
		{
			cout<<"\nERROR: 1.Efectivo 2.Cheque 3.Tarjeta:"<<endl;cin>>fp;
		}
		cout<<"\n**********************************"<<endl;
		cout<<"\nCalculando el total a pagar..."<<endl;
		tv=p*can;
		if(fp==1){
			d=tv*0.1;
			pag="Efectivo";
		}
		else if(fp==2){
			d=tv*0.05;
			pag="Cheque";
		}
		else d=0;{
		pag="tarjeta";
		}
		vp=tv-d;
		cout<<endl;
		cout<<"\nImprimir datos y resultados"<<endl;
		cout<<"\n---------------------------"<<endl;
		cout<<"\nCódigo del artículo: "<<cod;
		cout<<"\nDescripcion del artículo: "<<des;
		cout<<"\nPrecio del artículo: "<<p;
		cout<<"\nCantida de compra: "<<can;
		cout<<"\nTotal de venta: "<<tv;
		cout<<"\nForma de pago: "<<fp;
		cout<<"\nDescuento aplicado: "<<d;
		cout<<"\nValor a pagar: "<<vp;
		cout<<"\n---------------------------"<<endl;
		cout<<endl;
		cout<<"\n¿Desea procesar otra compra S/N?"<<endl;cin>>seguir;
		while(seguir!="S" and seguir!="s" and seguir!="N" and seguir!="n")
		{
			cout<<"\nERROR. Digite S o N"<<endl;cin>>seguir;
		}
		
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}
