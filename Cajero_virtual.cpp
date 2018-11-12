#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Saldo_inicial=1000, opc;
	float ing,saldo = 0,retiro;
	cout<<"====================================================================================================="<<endl;
	cout<<"\t\t\t\tBienvenido a su cajero virtual"<<endl;
	cout<<"====================================================================================================="<<endl;
	cout<<"1. Depositar dinero en la cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Digite su opcion: "; 
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite la cantidad que va a ingresar: ";
			cin>>ing;
			saldo = ing + Saldo_inicial;
			cout<<"Su nuevo saldo es: "<<saldo<<endl;
			cout<<"Gracias por preferirnos"<<endl;break;
			case 2:
				cout<<"Digite la cantidad que va a retirar de la cuenta: "; cin>>retiro;
				if(retiro>Saldo_inicial){
				cout<<"No se puede hacer su retiro porque no tiene tal cantidad en su cuenta";
				}
				else{
				saldo = retiro - Saldo_inicial;
				cout<<"Su nuevo saldo en cuenta es: "<<saldo<<endl;
				cout<<"Gracias por preferirnos"<<endl;
				}
				case 3:
				cout<<"Gracias por su visita"; break;

	}
	getch();
   return 0;
}
