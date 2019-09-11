/*

numero natural mayor a uno que sólo se puede dividir por dos números; el uno y el mismo, es decir , tiene únicamente dos divisores.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
/***************************************/
//int divisor =1, divisores = 0, num = 0; //VARIABLES DE LA FORMA 1
//***********************************/
/************************************/
///VARIABLES DE LA FORMA 2
int cont=2,num;//variables se puede declaras asi o uno por uno como se te de la gana. 
char op;
bool a = true; //forma 2
/***********************************************/
do{
system("cls");
cout<<"Digite un numero: ";//imprime mensaje si le pones endl el numero para poder ingresarlo te dara un salto de line teniendolo asi en la misma linea se pondra
cin>>num; //en esta variable se guarda el dato ingresado por el usuario

/*
do{ //ciclo do while que se repetira hasta que divisor sea menor o igual a numero
if(num % divisor == 0){ //numero entre diviror iniciado en 0
divisores++; //aumentas el divisores en uno
}
divisor++;//aumentas el contador divisor en uno
}while(divisor <= num); //aqui es donde se cumple la funcion si diviror o contador anteriormete aumentado en 1 es menor o igual a numero sale 
if(divisores == 2){ //si divisores es igual a 2 entonces entrara a la funcion if sino es igual a 2 sale y se va directamente al else
cout<<"El numero "<<num<<" si es primo.";
}else{ //sino es igual a 2 entra aqui y lo declara como un numero NO primo
cout<<"El numero "<<num<<" no es primo.";
}
*/


//ESTA ES OTRA FORMA DE HACERLO POR SI NO ENTENDISTE ESO.
while(a && cont <= num/2){
if (num % cont == 0){
	a=false;
}
else{
	cont++;
}		
}
if(a){
	cout<<"El Numero es Primo\n\n";
}
else{
	cout<<"El Numero No Primo\n\n";
}
cout<<"Desea verificar otro Numero(S/N): ";
cin>>op;
}while((op != 'N') || (op != 'n'));

getch();

}
