/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <string.h> //librerias necesarias
#include <time.h>
using namespace std;

void loop(char c[3][3]);
void Intro_primero(char c[3][3]);
void tablero(char c[3][3]);
void Intro_Yo(char c[3][3]); //declaracion de las funciones
void Intro_IA(char c[3][3]);
int Ganador(char c[3][3]);
//INICIO DEL MAIN
int main (){
 char c [3][3];//tablero
 
 loop(c);//llaman a todas las funciones fundamentales y hace un refresco de pantalla
 cout<<"\n";
 system ("pause");
 return 0;
}
	//FIN DEL MAIN
void loop(char c[3][3]){
 int i = 0, j = 0;
 
 Intro_primero(c);
 tablero (c);	
 do{
  system ("cls");
  tablero(c);
  if (i % 2 == 0){
   Intro_Yo(c);
  }
  else{
   Intro_IA(c);
  }
  j = Ganador(c);
  i++;
 }while ((i < 9) && (j == 2));
 system ("cls");
 tablero(c);
 if (j == 0){
  cout<<endl<<"Felicidades. Ganaste!!\n";
 }
 else if (j == 1){
  cout<<endl<<"Oh, no! Has perdidido :C.\n";
 }
 else{
  cout<<endl<<"Has empatado :/.\n";
 }
}

void Intro_primero(char c[3][3]){
 char aux;
 
 aux = '1';
 
 for (int i = 0; i < 3; i++){
  for (int j = 0; j< 3; j++){
   c[i][j] = aux++;
  }
 }
}

void Intro_Yo(char c[3][3]){
 char aux;
 int i, j, k;
 /*en estos bucles se solucionan 2 problemas graves que son:
 -La introduccion de fichas invalidas
 - El que el programa reconozca si el usuario quiere pone una ficha ya puesta antes.
 */
 do{
  k = 0; //k va ser igual a 0
  do{ // abrimos ciclo 
   cout<<endl<<"Coloca ficha: "; //impresion en pantalla
   fflush(stdin);
   cin>>aux; //asignacion a la variable aux
  }while((aux < '1') ||( aux > '9')); //si aux es menor a 1 y mayor a 9
  switch(aux){ //inicio de switch aux  se creara un caso por cada casilla por lo que se repite una y otra ves 
  //el mismo proceso.
   case '1': //primer caso
    i = 0; //iniciamos las variables en 0
    j = 0;
    if (c[i][j] == 'X' || c[i][j] == 'O'){ //si la variable i j es igual a x y igual a O
     k = 1; // k va ser igual a 1
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl; //impresion del error 
    }
   break; //pausa 
   case '2': //caso numero 2
    i = 0;
    j = 1;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl; //se repite el mismo caso 1
    }
   break;
   case '3':
    i = 0;
    j = 2;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;
   case '4':
    i = 1;
    j = 0;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;
   case '5':
    i = 1;
    j = 1;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;
   case '6':
    i = 1;
    j = 2;
   break;
   case '7':
    i = 2;
    j = 0;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;
   case '8':
    i = 2;
    j = 1;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;
   case'9':
    i = 2;
    j =2;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;
  }
 }while(k == 1);
 c[i][j] = 'X';
}
//La pc pone fichas
void Intro_IA(char c[3][3]){  //vs la computadora
 int i,j,k; //inicio de variables
 
 srand(time(NULL));//Semilla
 do{
  
  i = rand() % 3; //i va ser igual a ramdon
  j = rand () %3;
  k = 0;
  
  if (c[i][j] == 'X' || c[i][j] == 'O'){ //si c es igual a x y c igual a 0
   k = 1; //k va ser igual a 1
  }
 }while(k == 1);
 c[i][j] = 'O';
}

void tablero(char c[3][3]){ //creacion del tablero
 
 for (int i = 0; i<3;i++){ //ciclos for 
  for (int j = 0; j<3; j++){ 
   if (j < 2){
    cout<<" "<<c[i][j]<<" |";
   }
   else{ //sino
    cout<<" "<<c[i][j];}
  }
  if(i < 2){
   cout<<endl<<"---------"<<endl;
  }
 }
}
//Return 0 = jugador gano, return 1 = maquina gano
int Ganador(char c[3][3]){
 //ficha inicial(1)
 if (c[0][0] == 'X' || c[0][0] == 'O'){
  if (c[0][0] == c[0][1] && c[0][0] == c[0][2]){
   if (c[0][0] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
  if (c[0][0] == c[1][0] && c[0][0] == c[2][0]){
   if (c[0][0] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
 }
 //Ficha central(5)
 else if (c[1][1] == 'X' || c[1][1] == 'O'){
  //fichas 1 5 9
  if (c[1][1] == c[0][0] && c[1][1] == c[2][2]){
   if (c[1][1] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
  //fichas 2 5 8
  if (c[1][1] == c[0][1] && c[1][1] == c[2][1]){
   if (c[1][1] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
  //Fichas 4 5 6
  if (c[1][1] == c[1][0] && c[1][1] == c[1][2]){
   if (c[1][1] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
  //fichas 7 5 3
  if (c[1][1] == c[2][0] && c[1][1] == c[0][2]){
   if (c[1][1] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
 }
 //Ficha final (9)
 else if(c[2][2] == 'X' || c[2][2] == 'O'){
  if (c[2][2] == c[1][2] && c[2][2] == c[0][2]){
   if (c[2][2] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  if (c[2][2] == c[2][1] && c[2][2] == c[2][0]){
   if (c[2][2] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
   }
  }
 }
 return 2;
}
