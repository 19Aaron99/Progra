/* 
Este programa fue hecho por: Henry Adonay Jimenez Reyes
carnet: JR18011

Enunciado del problema.
Una empresa necesita calcular la produccion diaria de bebidas 
y los insumos requeridos para la elbaoracion de refresco
*/

//Librerias

#include <iostream>

//Declaraciones globales.

using namespace std;

//declaracion de funciones

void menu();//se crea la funcion menu

int validacion(int respuesta)//se crea la funcion validacion
	{
    	while(cin.fail())//este codigo valida si los datos ingresados son correctos
		{ 
            cin.clear();
            cin.ignore(1000,'\n');
            system("cls");//limpia la pantalla
            cout<<"\n\n\t\tLo que digito no es valido"<<endl;//mensaje a mostrar si el dato es erroneo
            menu();//retorna a la funcion menu
        }
        if (respuesta <= 0 )//este codigo valida si los numeros ingresados son correctos
		{
            system("cls");//limpia la pantalla
            cout<<"\n\n\t\tlos que digito no es valido"<<endl;//mensaje a mostrar si el dato es erroneo
            menu();//retorna a la funcion menu
        }	
}

void total1( int juguitos)//primera validacion de la funcion validacion
	{
		float water=0.6;//la cantidad de agua
		float sugar=0.7;//cantidad de azucar
		float insu1 = juguitos * water;//se hace este proceso para el agua
		float insu2 = juguitos * sugar;//se hace este proceso para el azucar
			cout<<"\n\n\t\tProduccion de jugos"<<endl;//se muestra este mensaje cuando los proceso ya estan hechos
			cout<<"\n\t\tEl total de jugos producidos es:  "<<juguitos<<endl;//respuesta del proceso anterior
			cout<<"\t\tEl total de agua utilizada fue:   "<<insu1<<"L "<<endl;//respuesta del proceso anterior
			cout<<"\t\tEl total de azucar utilizado fue: "<<insu2<<"Kg"<<endl;//respuesta del proceso anterior
	}
	
 void total( int soditas)//segunda validacion de la funcion validacion
	{
		float water=0.5;//la cantidad de agua
		float sugar=0.8;//la cantidad de azucar
		float insu1 = soditas * water;//se hace este proceso para el agua
		float insu2 = soditas * sugar;//se hace este proceso para el azucar
			cout<<"\n\n\t\tProduccion de sodas"<<endl;//se muestra este mensaje cuando los proceso ya estan hechos
			cout<<"\n\t\tEl total de sodas producidas es:  "<<soditas<<endl;//respuesta del proceso anterior
			cout<<"\t\tEl total de agua utilizada fue:   "<<insu1<<"L"<<endl;//respuesta del proceso anterior
			cout<<"\t\tEl total de azucar utilizado fue: "<<insu2<<"Kg"<<endl;//respuesta del proceso anterior
	}

//cuerpo del programa
int main()
	{
	//introduccion de variables
		int jugos;
		int sodas;
		float agua;
		float azucar;
	
		system("color 30");//color de la consola
		cout<<"\n\n\t\tIngrese el total de jugos a producir: ";//mensaje a mostrar
			cin>>jugos;//se guarda el dato
				validacion(jugos);//se confirma el dato
				
		cout<<"\n\n\t\tIngrese el total de sodas a producir: ";//mensaje a mostrar
			cin>>sodas;//se guarda el dato
				validacion(sodas);//se confirma el dato
		
		system("cls");//se limpia la pantalla
			total(jugos);//se muestra el resultado de jugos
				total1(sodas);//se muestra el resultado de sodas
	menu();
return 0;
}

void menu()
	{
		int res;
        cout<<"¿Quieres volver a utilizar el sistema?"<<endl;
        cout<<"1. Si"<<endl;
        cout<<"2. No"<<endl;
        cout<<"Eligio: ";
		cin>>res;
                
			if(res == 1)
			{
                system("cls");//limpiar pantalla
                    main();//llamada a la funcion main.
            }
            else
			{
                system("cls");//limpiar pantalla
        		cout<<"Gracias por utilizar el sistema"<<endl;                      
                    system("pause");
                        exit(0);
            }  
}
