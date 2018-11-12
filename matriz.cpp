#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int matriz[100][100];
	int filas;
	int columnas;
	
	cout<<"digites cuantas filas quiere: ";
	cin>>filas;
	
	cout<<"Digite cuantas columnas quiere: ";
	cin>>columnas;
	
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout<<"Digite un numero para la posicion ["<<i<<"]["<<j<<"]";
			cin>>matriz[i][j];
		}
	}
	
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
