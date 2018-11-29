/*
programa hecho por: Henry Adonay jimenez Reyes 
Carnet: JR18011
*/

//Linrerias a utilizadas.

#include <iostream>
#include <math.h>
#include <string.h>
//Declaraciones globales.

using namespace std;

//funciones.

void solicitud();
void menu();
int validacion(int respuesta);
void fibonacci();
void taylor();
double exponencial(double,unsigned long int);
int factorial(unsigned long int); 



//Inicia funcion main.

int main() {
	solicitud();
	system("pause");
	return 0;
}

//Finaliza funcion main.

//Inicializacion de las funciones.
void solicitud(){
	int resp;


	
		cout<<"Bienvenido al menu pricipal"<<endl;
		cout<<"Que opcion quiere elegir?"<<endl;
		cout<<"1) Resolver la serie Fibonacci."<<endl;
		cout<<"2) Resolver la serie de Taylor."<<endl;
		cout<<"3) Ver el historial."<<endl;
		cout<<"4) Salir."<<endl;
		cout<<"Digite el numero de su eleccion: "<<endl;
		cin>>resp;
		validacion(resp);
			
			if(resp == 1){
				fibonacci();
			}
			else if(resp == 2){
				taylor();
			}
			else if(resp == 3){
				cout<<"no ogre hacerlo"<<endl;
				menu();			
			}
			else if(resp == 4){	
				        system("cls");//comando para eliminar todo el texto en pantalla.
                        cout<<"*************************************"<<endl;
                        cout<<"Gracais por utilizar el sistema"<<endl;
                        cout<<"*************************************"<<endl;                        
			}
			else{
				system("CLS");
				cout<<"Esta no es una opcion valida!!!"<<endl;
				menu();
			}
}

void menu(){
			int r;//declaramos "r" para almacenar la respuesta del usuario.
            cout<<"quieres volver a utilizar el sistema?"<<endl;//impresion en pantalla para solicitar una respuesta al usuario
            	cout<<"1. Si"<<endl;
 		cout<<"2. No"<<endl;
		cin>>r;
                if(r == 1){
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        main();//llamada a la funcion main.
                }
                else{
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        cout<<"*************************************"<<endl;
                        cout<<"Un gusto trabajar para usted!"<<endl;
                        cout<<"*************************************"<<endl;                        
                        system("pause");
                        exit(0);
                }
}

int validacion(int respuesta){
        while ( cin.fail () || respuesta < 0 ){
                cin.clear();
                cin.ignore(1000,'\n');
                system("cls");
                cout<<"El caracter ingresado no es valido"<<endl;//mensaje de error de ingreso.
                cout<<"Por favor ingrese un valor valido"<<endl;
                menu();
        }
}

void fibonacci(){
		int x=0;
		int y=1;
		int z=1;
		int num;
		string nombre;	
				cout<<"De cuantos numeros desea calcular la serie?"<<endl; 
				cin>>num;
				validacion(num);
				system("cls");
				cout<<"1 ";
				for(int i=0;i<=num;i++){
					z = x +y;
					cout<<z<<" ";
					x = y;
					y = z;
				}
				cout<<endl;	
					system("pause");
						menu();	
	
}

void taylor(){
	system("cls");

	unsigned long int n=0; //nuemro n de la serie
    double x=0; //valor de x
    cout<<"Ingrese n=";
    cin>>n;
    cout<<"Ingrese x=";
    cin>>x; 
    cout<<"Resultado es= "<<exponencial(x,n)<<endl;
    system("pause");
    system("cls");
    menu();
}

double exponencial(double x,unsigned long int n)
{
    double resultado=0; //varibale para devolver
    for (unsigned int i=0;i<=n;i++) //desde n=0 hasta donde llegue la serie
    {
        resultado+=pow(x,i)/factorial(i);   //uso de la función pow de la libreia cmath se saca esa potencia y con la función factorial se obtiene ese denominador con ese valor de n
    }
    return resultado; //devuelvo valor
}
 
int factorial(unsigned long int i)
{
    unsigned int resultado=1; //valor inicial 1
    if (i==0)  //si es cero se devuelve factoril 1
    {
        return resultado;
    }else     //sino se saca el factorial
    {
        while(i>1)
        {
            resultado=resultado*i;
            i--;
        }
 
    return resultado;
 
    }
}






