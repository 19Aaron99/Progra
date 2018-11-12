#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main (){
	
	float a,b,c;
	float p,at,r;
	
	cout <<"\ningrese el valor del lado A:"; cin>>a;
	cout <<"\ningrese le valor del lado B:"; cin>>b;
	cout <<"\ningrese le valor del lado C:"; cin>>c;
	
	p= (a+b+c)/2.0;
	r= p*(p-a)*(p-b)*(p-c);
	
	if(r>=0)
	{
		at= sqrt(r);
		cout<<at;
		}
	else
	    {
		cout<<"No existe tal triangulo!";
		}	
	
	getch();

}
