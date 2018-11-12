/*Escribe un programa que lea la entrada estndar el precio de un producto
 y muestre en la salida estandar el precio del producto al aplicar el IVA */
 
 #include<iostream>
 
 using namespace std;
 
 int main(){
 	
 	
 	float  n1=0,n2=1.25,total=0;
 	
    cout<<"ingrese el precio del producto:"; cin>>n1;
 	
 	 total= n1 * n2;
 	
 	cout<<"el total del producto con iva es:"<<total<<endl;
 	return 0;
 }
 
 
 
 
