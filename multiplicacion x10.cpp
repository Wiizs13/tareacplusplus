/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include<iostream>
#include<conio.h> //cabezeras
using namespace std;

//Funciones
void mult(int *x,int *y); //inicia la funcion mult y crea los punteros
void Datos(); //inicio de funciion daatos
void desicion(); //inicio de funcion desision
int ap(int res);

int n1,n2=10; //inicio de variables

int main(){ //inicio de main
	Datos(); //llamada a funcion datos
	mult(&n1,&n2); //llamada a funcion mult
	desicion(); //llamada a funcion desision
	
	getch(); //fin de conio
	return 0; //returno
} //fin de main

void Datos(){ //declaracion de datos	
	cout<<"Digite 1 numero: "; // impresion de mensaje
	cin>>n1; //guarda los datos en n1
	ap(n1);
	cout<<n1<<" x 10 "<<endl; //impresion de mensaje
} //fin de funcion

void mult(int *x,int *y){//iniciio de funcion mult
	int multiplicacion = (*x * *y); //inicia variable y multiplica x*y

	cout<<"La multiplicacion es: "<<multiplicacion<<endl; //imprime resultado
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


