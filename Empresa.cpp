/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include <iostream>



using namespace std;



void desicion();
void soda( int soda);	//funciones
void jugo(int jugo);
int ap(int res);


int main(){
	int sodas;
	int jugos;
	float agua;
	float azucar; //variables
	
		system("color 60");
		cout<<"Ingrese el total de la produccion diaria de sodas: "<<endl; //impresiones de pantalla
		cin>>sodas; //asignacion a la variable
		ap(sodas); //llamando a la funcion ap
		cout<<"Ingrese el total de la produccion diaria de jugos: "<<endl; //impresion de pantalla
		cin>>jugos; //asignacion a la variable
		ap(jugos); //llamando a la funcion 
		
				system("cls"); //limpiando la pantalla
				soda(sodas); //llamando a la funcion
				cout<<""<<endl; //espacio
				cout<<""<<endl;
				jugo(jugos); //llamando a la funcion
					cout<<""<<endl; //espacio
				cout<<""<<endl;
	desicion(); //llamando a la funcion
	
	return 0;
	
}

void soda( int soda){ //declaracion de funcion
	float agua=0.5; 
	float azucar=0.8;
	float ML = soda * agua;
	float G = soda * azucar;
	cout<<"SODAS"<<endl; //impresiones
	cout<<"El total de sodas es: "<<soda<<endl;
	cout<<"El total de agua es: "<<ML<<" ml"<<endl;
	cout<<"El total de azucar es: "<<G<<" g"<<endl;

}

void jugo( int jugo){ //declaracion de funciones
	float agua=0.6; 
	float azucar=0.7;
	float Ml = jugo * agua; //declaracion de variables
	float G = jugo * azucar;
	cout<<"JUGOS"<<endl;
	cout<<"El total de jugos es: "<<jugo<<endl; //impresiones
	cout<<"El total de agua es: "<<Ml<<" ml"<<endl;
	cout<<"El total de azucar es: "<<G<<" g"<<endl;
	
	
	
}
int ap(int res){
        while ( cin.fail () ){ //vaidacion si se ingresa una letra.
                cin.clear();
                cin.ignore(1000,'\n');
                system("color 4f");
                system("cls");
                cout<<"LETRAS NO PERMITIDAS"<<endl;//mensaje de error de ingreso.
                desicion();
        }
        if (res <= 0 ){ //validacion si se ingresa un numero negativo.
                system("cls");
                system("color 4f");
                cout<<"los numeros negativos no son validos"<<endl;//mensaje de error de ingreso.2
                desicion();
        }		
}

void desicion(){
			int r;//declaramos "r" para almacenar la respuesta del usuario.
            cout<<"Quiere intentarlo de nuevo \n 1. si \n 2. no"<<endl;//impresion en pantalla para solicitar una respuesta al usuario
            cin>>r;
                if(r == 1){
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        main();//llamada a la funcion main.
                }
                else{
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        exit(0);
                }
				  
			}
