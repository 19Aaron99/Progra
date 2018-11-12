/** Programa hecho por: Henry Adonay Jimenez Reyes
	Carnet: JR18011
	 
    enuniado del probema.
    
	Una empresa comercaializadora contrata vendedores los cuales les paga un salrio
	que va deacuerdo al total de las ventas realizadas en el mes.
	Realizar un programa en C++ que sistematice este procedimiento al ingresar las
	ventas de un empleado e inmediatamente muestre el sueldo qeu le corresponde.  
**/
#include<iostream>//libreria de uso estandar
#include<iomanip>//esta libreria se uiliza para obtener un valor numerico en decimal
#include<stdlib.h>//esta libreria permite al programa no cerrarce inmediatamente
#include<sonido.h>//libreria del sonido

using namespace std;

//cuerpo del programa
int main(){
	
	//valores a utilizar en este programa
	float sueldo = 3.14159;//la funcion "float" permite ingresar datos en forma decimal
	int ingreso;//la funcion "int" solo permite ingresar datos enteros
	int opc;
	
	system("color 30");//funciona para agregar color
	
	cout<<"\n\t\t\tBienvenido al menu de la empresa"<<endl;//con el "cout" mostramos un mensaje al usuario
	
	cout<<"\n\n\t\tIngrese la cantidad de sueldo que realizo este mes: ";//aqui se le pide al usuario que ingrese los datos de venta
	cin>> ingreso;//con la funcion "cin" se guardan los datos ingresados por el usuario
	
	system("color 34");//funciona para agregar color
	
	while(cin.fail())//este codigo funciona para detectar si son numeros
	{
		cin.clear();
		cin.ignore(1000,'\n');
		cout<<"\n\n\t\tPor favor ingrese bien los datos solicitados: ";//si no son numeros le mostrara este mesaje al usuario
		cin>>ingreso;//si los datos son correctos se guarda en "ingreso"
		system ("pause");//sirve para dar un pausa
	}
	
	while(ingreso <= 0)//sirve para validar si los numeros son correctos y no negativos
	{
		cout<<"\n\n\t\tPor favor ingrese bien los datos solicitados: ";//si sin numeros erroneos mostrara este mensaje al usurio
		cin>>ingreso;//si el numero es correcto se guardara en "ingreso"
		exit (0);//sirve para salir
	}
	
	system("color 30");//funciona para agregar color
	
	//aqui ya se entra en un ciclo de comprobacion
	
	if(ingreso <= 500000)//con el "if" se le da la funcion de "si el ingreso introducido por el usuario es menor a 50000
	{
		sonido1();//sonido al mostrar el resultado	
		cout<<"\n\tsu sueldo es: 80,000"<<endl;//se le mostrara este resultado en la pantalla
	}
	else if(ingreso <= 1000000 )//con el "if" se le da la funcion de "si el ingreso introducido por el usuario es menor a 1000000
	{
		sonido1();//sonido al mostrar el resultado	
		cout<<"\n\tsu sueldo es: 160,000"<<endl;//se le mostrara este mensaje al usuario	
	}
	else if(ingreso <= 1500000)//en otro caso utilizando el "else if" se le da la funcion de "si ingreso es menor a 150000"
	{
		sonido1();//sonido al mostrar el resultado	
		cout<<"\n\tsu sueldo es: 320,000"<<endl;//se le mostrara este mensaje al usuario
	}
	else if(ingreso <= 2500000)//en otro caso utilizando el "else if" se le da la funcion de "si ingreso es menor a 250000"
	{
		sonido1();//sonido al mostrar el resultado	
		cout<<"\n\tsu sueldo es: 450,000"<<endl;//se le mostrara este mensaje al usuario
	}
	else if(ingreso <= 4000000){//en otro caso utilizando el "else if" se le da la funcion de "si ingreso es menor a 400000"
		sonido1();//sonido al mostrar el resultado	
		cout<<"\n\tsu sueldo es: 500,000 "<<endl;//se le mostrara este mensaje al usuario
	}
	else
	{//en caso contrario el "else" debe hacer otro proceso diferente 
		sueldo = ingreso * 0.20;//y se hace este proceso
		sonido1();//sonido al mostrar el resultado	
		cout<<fixed<<setprecision(3)<<"\n\ttu sueldo por el 20% de sus ventas es: "<<sueldo<<endl;//y con esta linea de comando expresamos su sueldo 
		//en decimales
	}
//aqui acaba el ciclo de comprobacion
	
	// y se cierra el sistema
	system ("pause");
	return 0;
}

