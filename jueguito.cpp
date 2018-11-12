#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void leer(int matriz[][3]);
void persona(int matriz [][3]);
void inicio(int matriz [][3]);
void inteligencia(int matriz [][3], int a);
int matrizvacia(int matriz[][3]);
void agana(int matriz2[][3], int *f);
int sorteo(int num);


int main(){
 
 int matriz[3][3];
 int c, sortear, f;
 
 system("color 30");
 
 printf("Para jugar introduce a mano donde quieres qu esté tu ficha, primero las x, luego las y\nAver si eres capaz de ganar.\nSi se queda parado seguramente sea porque has empatado.\n\n\n");
 
 inicio(matriz);
 
 sortear=sorteo(sortear);
 
 if(sortear==0){
  goto CPU;
 }
 
 do{
 
 leer(matriz);
 c=matrizvacia(matriz);
 
 persona(matriz);
CPU:
 inteligencia(matriz,c);
 agana(matriz, &f); 

 }while(f==0);
  
 leer(matriz);
 
 system("pause");
 return 0;
}

int matrizvacia(int matriz[][3]){
 int i, j, aux;
 
 aux = 0;
 
 for(i=0;i<3 && aux == 0;i++){
  for(j=0;j<3 && aux == 0 ;j++){
   if(matriz[i][j]==1){
    aux=1;
   }  
   else{
    aux=0;
   } 
  }
  
 }
 
 return aux; 
}

void inteligencia(int matriz [][3], int a){
 int i, j, rep, p, fichacolocada; 
 int x, y;
 fichacolocada=0;


 //Si el tablero esta vacio o solo hay una pieza
 if(a == 0 ){
  repetir:
   i=rand()%3;
   j=rand()%3;
   if(matriz[i][j] !=1){
    matriz[i][j]=2;
    fichacolocada=1;
    return;
   }
   else{
    goto repetir;
   }
   
 }
 //Si hay piezas en el tablero
 else{
  for(p=2;p>0;p--){   
      
   x=0;
   y=0;
   
   for (rep=0; rep<3; rep++){
   
    if(matriz[x][y]==p && matriz [x][y+1]==p && matriz[x][y+2]==0){
     matriz[x][y+2]=2;
     fichacolocada=1;
     return;
    }
    if(matriz[x][y+1]==p && matriz [x][y+2]==p && matriz[x][y]==0){
     matriz[x][y]=2;
     fichacolocada=1;
     return;
    }  
    x++;
   }
   
   x=0;
   y=0;
   
   for(rep=0; rep<3; rep++){
   
    if(matriz[x][y]==p && matriz [x+1][y]==p && matriz[x+2][y]==0){
     matriz[x+2][y]=2;
     fichacolocada=1;
     return;
    }
    if(matriz[x+1][y]==p && matriz [x+2][y]==p && matriz[x][y]==0){
     matriz[x][y]=2;
     fichacolocada=1;
     return;
    }  
    y++;
   }
   
   x=0;
   y=0;
   
   for(rep=0;rep<2;rep++){
    if(matriz[x][y]==p && matriz[x+1][y+1]==p && matriz[x+2][y+2]==0){
     matriz[x+2][y+2]=2;
     fichacolocada=1;
     return;
    }
    x++;
    y++; 
   }
   
   x=0;
   y=0;
   
    for(rep=0;rep<2;rep++){
    if(matriz[x+2][y]==p && matriz[x+1][y+1]==p && matriz[x+2][y+2]==0){
     matriz[x+2][y+2]=2;
     fichacolocada=1;
     return;
    }
    x--;
    y++; 
   }
   x=0;
   y=0;
   
   if ((matriz[x][y]==p && matriz[x+2][y+2]==p && matriz[x+1][y+1]==0) || (matriz[x+2][y]==p && matriz[x][y+2]==p && matriz[x+1][y+1]==0)){
    matriz[x+1][y+1]=2;
    fichacolocada=1;
    return;
   }
   
   x=0;
   y=0;
   
    for(rep=0;rep<3;rep++){
    if(matriz[x][y]==p && matriz[x+2][y]==p && matriz[x+1][y]==0){
     matriz[x+1][y]=2;
     fichacolocada=1;
     return;
    }
    y++; 
   }
   
   x=0;
   y=0;
   
    for(rep=0;rep<3;rep++){
    if(matriz[x][y]==p && matriz[x][y+2]==p && matriz[x][y+1]==0){
     matriz[x][y+1]=2;
     fichacolocada=1;
     return;
    }
    x++; 
   }
   
 }
   
   
   
  } 
  
   if(fichacolocada==0){
   
 repetir1:
    i=rand()%3;
    j=rand()%3;
    if(matriz[i][j] !=1){
     matriz[i][j]=2;
    }
    else{
     goto repetir1;
    }
 }
    
 
}

  
void inicio(int matriz [][3]){
 int i, j;
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   matriz[i][j]=0;
  }
 } 
}

void persona(int matriz [][3]){
  int i, j;
reintroduce:
 printf("x: ");
 scanf("%i",&i);
 fflush(stdin);
 printf("y: ");
 scanf("%i",&j);
 printf("\n");
 if(matriz[i-1][j-1]==0){
  matriz[i-1][j-1]=1;
 }
 else{
  printf("NO SEAS TRAMPOSO AHI YA HAY UNA FICHA!\n\n");
  goto reintroduce;
 }
}

void leer(int matriz[][3]){
 int i, j;
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   printf(" %i", matriz[i][j]);
  }  
  printf("\n");
  } 
  printf("\n\n\n");
}

void agana(int matriz2[][3], int * f){
 int n, m, x, y;
 for (n=1;n<3;n++){
  x=0;
  y=0;
  for(x=0;x<3;x++){  
   if(matriz2[x][y]==n && matriz2[x][y+1]==n && matriz2[x][y+2]==n){
    printf("\n %i HA GANADO\n\n",n);
    *f=1;
    return;
   }
  }
  
  x=0;
  y=0;
  
  for(y=0;y<3;y++){  
   if(matriz2[x][y]==n && matriz2[x+1][y]==n && matriz2[x+2][y]==n){
    printf("\n %i HA GANADO\n\n",n);
    *f=1;
    return;
   }
  }
  
  x=0;
  y=0;
  
  if((matriz2[x][y]==n && matriz2[x+1][y+1]==n && matriz2[x+2][y+2]==n) || (matriz2[x+2][y]==n && matriz2[x+1][y+1]==n && matriz2[x][y+2]==n)){
   printf("\n %i HA GANADO\n\n",n);
   *f=1;
   return;
  }

 }

 int i, j, aux;
 
 aux = 0;
 
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   if(matriz2[i][j]!=0){
    aux+=1;
   }  
   else{
    aux+=0;
   } 
  }  
 }
 if(aux==9){
  printf("HAY EMPATE\n");  
  *f=1;
  return;
 }
 
}

int sorteo(int num){
 int aux;

 aux=rand()%3;
 return aux;
}
