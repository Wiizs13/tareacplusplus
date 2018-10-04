#include <iostream>
#include <conio.h>

using namespace std;

int main(){ //inicio de la funcion principal
	system("Color 4F");
	for(int i=1; i<11; i++){ //ciclo for inicia i = a 1 y le digo que hasta que i sea menor que 11 que vaya aumentando en una unidad
		cout<<" "<<endl; //separacion de las tablas
		for(int j=1; j<11; j++){ // declaro la variable j y le digo que hasta que j sea menor que 11 que vaya aumentando en una unidad
			
		cout<< i << " * " <<j<< " = " << i*j <<endl; // multiplicacion de i * j 
		
		}
	}
	getch();
}
