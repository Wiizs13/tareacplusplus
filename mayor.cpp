/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include <iostream> //cabezera
#include <stdlib.h> //cabezara
using namespace std; 

void mayor(int *numero1,int *numero2);
void desicion();
int ap(int res);
void Datos();
int numero1,numero2; //creacion de las variables numero1 y numero2

int main() { //Inicio del main

 Datos();

mayor(&numero1,&numero2); //llamada a la funcion y pide los datos de los que apuntan a numero1 y numero2

cout<<"\nPrimer numero: "<<numero1; //imprime numero 1
cout<<"\nSegundo numero: "<<numero2<<endl; //imprime numero2
desicion();
system("pause"); //pausa el sistema
return 0; //retorno 
} //finalizacion del main



void Datos(){
	cout<<"Ingrese el primer numero: "; //mensaje de ingreso
cin>>numero1; //asigna el numero ingresado a la variable
ap(numero1);
cout<<"Ingrese el segundo numero: "; //mensaje de ingreso del segundo numero
cin>>numero2; //asigna el numero ingresado a la variable
ap(numero2);
cout<<"\nPrimer numero: "<<numero1; //impresion de la variable 1
cout<<"\nSegundo numero: "<<numero2; //impresion de la variable 2

}

void mayor(int *numero1,int *numero2) { //inicio de la funcion mayor
if (*numero1>*numero2){ //iniio del if si numero1 es mayor a numero2

int aux=*numero1; // inicia una variable auxiliar y la iguala a puntero numero1
*numero1=*numero2; //puntero numero1 sera igual a puntero numero2
*numero2=aux;  //puntero numero2 seria igual a la variable auxiliar creada en la linia 8
cout<<"\n\nRealizo el intercambio\n"; //mensaje de confirmacion

} //finalizacion del if
else if (*numero1==*numero2){
	
	cout<<"\nCambio no Realizado los numeros son iguales\n"; //mensaje de negacion del proceso 
}
else //sino
cout<<"\n\nCambio no Realizado el Primer numero es menor al segundo\n"; //mensaje de negacion del proceso 

} 
void desicion(){ //inicio de funcion
			int r;//declaramos "r" para almacenar la respuesta del usuario.
            cout<<"\n\nDesea volver a intentarlo \n 1. si \n 2. no "<<endl;//impresion en pantalla para solicitar una respuesta al usuario
            cin>>r;
            ap(r);
                if(r == 1){ //si es igual a 1
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        main();//llamada a la funcion cuadrdo.
                }
                else { //sino
				system("cls");//comando para eliminar todo el texto en pantalla.
                        exit(0); //salida del sistema
				}
				  
			}
			
		int ap(int res){
        while ( cin.fail () ){ //vaidacion si se ingresa una letra.
                cin.clear();
                cin.ignore(1000,'\n');
                system("cls");
                cout<<"LETRAS NO PERMITIDAS"<<endl;//mensaje de error de ingreso.
                desicion();
        }
        if (res <= 0 ){ //validacion si se ingresa un numero negativo.
                system("cls");
                cout<<"los numeros negativos no son validos"<<endl;//mensaje de error de ingreso.2
                desicion();
        }		
}

