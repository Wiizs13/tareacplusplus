/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include <iostream>
#include <math.h> //cabezeras

using namespace std;

void desicion();
int ap(int res);
int potencia(int *base,int *n); //iinicio de la funcion potencia
void Datos(); //inicio de la funcion datos 
 
 int n, base; //iniciio de las variables
 
int main(){ //inicio del bloque main


	Datos(); //llamada a la funcion datos
	potencia(&base,&n); //llamada a la funcion potencia 
	desicion();

	return 0; //returno
} //fin del main
void Datos(){ //declracion de la funcion
 cout << "Ingrese la base: " << endl; //mensaje 
 cin >> base; //guardar datos en variable
 ap(base);
 cout << "Ingrese el exponente" << endl; //mensaje
 cin >> n; //guardar datos en variable
 ap(n);
} //fin de funcion

int potencia(int *base,int *n){ //declaracion de funcion
	int resultado = pow(*base,*n); //inicio de variable que guardara el resultado de pow
 cout << *base << " elevado a la " << *n << " es igual a " << resultado << endl; //impresioon del resultado de elevar la base 
} //fin de funcion 

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

