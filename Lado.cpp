/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include <iostream>
#include <conio.h> //inicio de cabezeras
using namespace std;

void desicion(); //inicio de funcion
int ap(int res);
void Cuadrado(float *x,float *y); //inicio de funcion
void Cubo(float *x,float *y); //inicio de funcion

float Lado,Area; //inicio de variables

int main(){ //inicio de main

desicion(); //llamada a la funcion

	getch(); //fin de conio
	return 0; //returnpo
}

void Cuadrado(float *x,float *y){ //declaracion de funcion
	cout<<" Digite el Valor de uno de los lados: ";  //impresion de mensaje
cin>>Lado; //guardar los datos
ap(Lado);
Area=(Lado * Lado); //area es igual a lado por lado
cout<<" El Area del Cuadrado es "<<Area<<endl<<endl<<endl; //impresion de mensaje
}//fin de funcion


void Cubo(float *x,float *y){ //inicio de funcion
	cout<<" Digite el Valor de uno de los lados:  "; //impresion de mensaje
cin>>Lado; //guardar datos
ap(Lado);
Area=(Lado * Lado); //area sera igual a lado por lado
int r= (Area*6); //iniico de r sera igual a area por 6
cout<<" El Area del Cubo es "<<r<<endl<<endl<<endl; //impresion de mensaje
}// fin de funcion




void desicion(){ //inicio de funcion
			int r;//declaramos "r" para almacenar la respuesta del usuario.
            cout<<"Que desea encontrar \n 1. Area de cuadrado \n 2. Area de cubo \n 3. Salir\n"<<endl;//impresion en pantalla para solicitar una respuesta al usuario
            cin>>r;///guardar datos en r
			 ap(r) ;
                if(r == 1){ //si r es igual a 1
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        Cuadrado(&Lado,&Area);//llamada a la funcion cuadrdo.
                        system("pause"); //pausa el sistema
                        system("cls"); //elimina la consola
                        main(); //llamada a main
                }
                else if(r == 2){ //si r es igual a 2
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        Cubo(&Lado,&Area);//llamada a la funcion cuadrdo.
                      	system("pause"); //pausa el sistema
                        system("cls"); //limpia la consola
                        main(); //llamada a main
                }
                else { //sino
				system("cls");//comando para eliminar todo el texto en pantalla.
                        exit(0); //sale del sistema
				} //fin de la funcion
				  
			} //fin de funcion
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


