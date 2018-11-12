/*
Este programa fue hecho por: Henry Adonay Jimenez Reyes
carnet: JR18011

problema a resolver.
Una empresa de telefonia nesesita saber el total a pagar cada cliente 
por llamada por el minuto que se traden hablando
*/

//Librerias o directorios utilizados.

#include <iostream>


//Declaraciones globales

using namespace std;

//declaramos una funcion Llamada 
float Llamada(int min, float tar)
	{
		float pago;
		pago = min  *  tar;//se le indica que hara este proceso
	
	return pago;//este retornara el resultado del proceso anterior
	}
	
//declaramos una funcion menu	
void  menu();

//cuerpo del programa
int main(){
	
	//declaramos las variables
    float tarifa;
    float minutos;
    int reg;
    float pagoTotal; 
    
		system("color 30");//codigo para darle color 
        cout<<"\n\n\t\tIngrese el total de minutos que utilizo: ";//mostraremos este mensaje al usuario
        cin>>minutos;//lo ingresado se guardara en minutos
            while ( cin.fail () ){ //codigo de confirmacion de datos
                cin.clear();
                cin.ignore(1000,'\n');
                system("cls");//codigo para limpiar la pantalla
                cout<<"\n\t\tLos datos ingrsados no son validos"<<endl;//mensaje a mostrar si los datos son erroneos
                menu();//retorna a la funcion menu
            }
            if (minutos <= 0 ){ //comprobacion de numeros
                system("cls");//codigo para limpiar la pantalla
                cout<<"\t\tEl valor no es valido."<<endl;//mensaje a mostrar si los datos son erroneos
                menu();//retorna a la funcion menu
            }
	//comprobacion de daos 
		if(minutos <=10 )//si los minutos ingresados son menor a 10 minutos
			{
                tarifa = 0.05;//se hara este proceso
            }
		else if(minutos >= 11 && minutos <=15 )//caso contrario si los minutos ingresados son mayor a 11 y menor a 15 minutos
			{
            	tarifa = 0.08;//se hara este proceso
            }
		else if(minutos > 15 )//otro caso es si minutos ingresados es mayor a 15 minutos
			{
            	tarifa = 0.10;//se hara este proceso
            }
                   
		pagoTotal = Llamada(minutos,tarifa);//utilizamos la funcion llamada
                    
        cout<<"\n\n\t\tEl costo de su llamada es: $"<<pagoTotal<<endl;//se mostrara el costo de la llamada
		cout<<"\t\ty su tarifa es: $"<<tarifa<<endl;//se mostrara la tarifa 
		cout<<"\n";//salto de linea
        
    menu();//retorna a la funcion menu    
    return 0;
}
//Finaliza función main.

//inicia funcion menu que nos preguntara si queremos volverlo a intentar
void menu(){
		//declaramos una variable en la que se gurdara el dato
			int reg;
            cout<<"\t\tquieres volver a utilizar el sistema?"<<endl;//mensaje a mostrar
            cout<<"\t\t1. Si"<<endl;//mensaje a mostar
            cout<<"\t\t2. No"<<endl;//mensaje a mostrar
            cout<<"\t\tsu opcion: ";//decidion del usuario
            cin>>reg;//el dato ingresado se guarda
            
            //comienzo de proceso de confirmacion
                if(reg == 1)//si el usuario digito 1
				{
                	system("cls");//se limpiara la pantalla
                    main();//retenra a el cuerpo del programa
                }
                else if(reg == 2)//caso contrario
				{
                    system("cls");//se limpiara la pantalla
                    cout<<"\n\t\tGracias por utilizar nuestro servicios"<<endl;//se mostrara este mensaje
                    exit(0);//y para todo el sistema
                }
}
//fnaliza la funcion menu

