/* realize un programa que pida al usuario un numero entero entre 1 y 100. el programa debe genrar
un numero aleatorio en ese mismo rango[1-100] e indicarle al usurio si el numero que ingreso es 
menor o mayor al numero aleatorio, asi hasta que lo adivine, por ultimo mostrarle el numero de 
intentos que le llevo.
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, dato, contador = 0;
	srand(time(NULL)); //Genera un numero aleatorio
	dato = 1 + rand()%(100);
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero<dato){
			cout<<"\ndigite un numero mayor\n";
		}
		if(numero>dato){
			cout<<"\nDigite un numero menor\n";
		}
		contador++;
	}while(numero != dato);
	
	cout<<"\nBien hecho adivinastes el numero\n";
	cout<<"numero de intentos: "<<contador<<endl;


system("pause");
return 0;
}
