#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    int intentos[3], numCorrecto = 8,r;
    bool resuelto = false;
    for (int i=0 ;i < 3;i++ ){
        cout<<"intento "<<(i+1)<<" ingresa un numero: ";cin>>intentos[i];
        if(intentos[i]==numCorrecto){

            resuelto = true;
            break;
        }else{
            cout<<"vuelve a intentarlo"<<endl;
        }
    }
    if (resuelto==true){
        cout<<"adivinaste el numero era: "<<numCorrecto<<endl;
        cout<<"quieres volver a intentar?\n 1. si \n 2. no \n ingresa un numero: ";cin>>r;
        if(r==1){
            main();
        }else{
            cout<<"Adios ;)"<<endl;
        }

    }else{
        cout<<"agotaste todos tus intentos quieres volver a intentar?\n 1. si \n 2. no \n ingresa un numero: ";cin>>r;
        if(r==1){
            main();
        }else{
            cout<<"Adios ;)"<<endl;
        }

    }


return 0;
}
