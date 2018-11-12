#include<iostream>
#include<math.h>

using namespace std;

int main(){
 
 float x1,x2,a,b,c;
 
 cout<<"sea la siguiente funcion: ax^2+bx+c=0";
 cout<<"\ndigite el valor del coeficiente principal(a): ";cin>>a;
 cout<<"digite el valor del segundo coeficiente(b): ";cin>>b;
 cout<<"digite el valor del termino independiente(c): ";cin>>c;
 if(a!=0){
  if(pow(b,2)-4*a*c>=0){
  cout<<"\nx toma 2 valores,ya que es una ecuacion de segundo grado";
  x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
  cout<<"\nun valor de x es: "<<x1<<endl;
  cout<<"el otro valor de x es: "<<x2<<endl;
  }
        else{
         cout<<"\nlos valores de x no existen,solo en los imaginarios";
  }
 }
      else{
   cout<<"\nx solo toma un valor,la ecuacion no es de segundo grado";
 x1=(-c)/b;
     cout<<"\nel valor de x es: "<<x1<<endl;
  }   
 
 return 0;
 
}
